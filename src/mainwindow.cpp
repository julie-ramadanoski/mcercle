/**
  This file is a part of mcercle
  Copyright (C) 2010-2014 Cyril FRAUSTI

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

#include <QMessageBox>
#include <QPrinter>
#include <QPainter>
#include <QPrintDialog>
#include <QFileDialog>
#include <QDesktopServices>
#include <QLabel>
#include <QStyle>
#include <QDebug>
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
	#include <QPlastiqueStyle>
	#include <QTextCodec>
#else
	#include <QStyleFactory>
#endif

#include <QApplication>

#include "dialogsettings.h"
#include "dialogproviders.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogwaiting.h"
#include "dialoginvoicelist.h"
#include "dialogservicesedit.h"
#include "update.h"
#include "inout.h"
#include "printc.h"

#ifdef __WIN32
	#include "trymcercle.h"
#endif

/**
	Constructeur de la class MainWindow
*/
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	//langage
	m_lang = QLocale::system().name().section('_', 0, 0);

	// la fenetre est maximisee par defaut
	setMinimumSize(QSize(640, 480));
	setWindowState(Qt::WindowMaximized);

	m_database = new database( m_lang, this);
	m_Settings = new Settings(this);
	
#if QT_VERSION < QT_VERSION_CHECK(5, 0, 0)
	QApplication::setStyle(new QPlastiqueStyle);
	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf-8"));
	QTextCodec::setCodecForTr(QTextCodec::codecForName("utf-8"));
#else
	QApplication::setStyle(QStyleFactory::create("Fusion"));
#endif
	qDebug() << "======================= MCERCLE DEBUG =======================";
	qDebug() << "ApplicationDirPath: " << qApp->applicationDirPath();
}


/**
	Destructeur de la class MainWindow
*/
MainWindow::~MainWindow() {
	//sauvegarde les index des champs de recherche
	m_Settings->setPositionListSearchProduct( m_productView->getIndexSearchProduct() );

	delete ui;
	delete m_Settings;
	delete m_database;
}

/**
	Change de language
*/
void MainWindow::changeEvent(QEvent *e) {
	QMainWindow::changeEvent(e);
	switch (e->type()) {
	case QEvent::LanguageChange:
		ui->retranslateUi(this);
		break;
	default:
		break;
	}
}

/**
  Initialise lapplication, base de donnees etc..
  */
void MainWindow::init(){
	// Charge le fichier de configurations
	if(!m_Settings -> settingIsOk()) {
		///TODO: QWizard pour la config du soft
		m_Settings -> setDatabase_default();
		m_Settings -> setSettingState(true);
	}

	// Style dark
	if(m_Settings ->getTheme() == tr("Sombre")) {
		qApp->setStyleSheet( "QTableWidget {background: rgb(170,170,170,255);}  ");
		QPalette p;
		p = qApp->palette();
		p.setColor(QPalette::Window, QColor(100,100,100));
		p.setColor(QPalette::Button, QColor(100,100,100));
		//p.setColor(QPalette::Highlight, QColor(45,142,90));
		p.setColor(QPalette::ButtonText, QColor(255,255,255));
		qApp->setPalette(p);
	}

	//Base de donnees
	m_database->setBdd( m_Settings->getDatabase_bdd() );
	m_database->setHostName( m_Settings->getDatabase_hostName() );
	m_database->setPort( m_Settings->getDatabase_port() );
	m_database->setDatabaseName( m_Settings->getDatabase_databaseName() );
	m_database->setUserName( m_Settings->getDatabase_userName() );
	m_database->setPassword( m_Settings->getDatabase_userPassword() );
	m_database->connect();

	/// Construction des widgets!!
	//customers
	m_customerView = new customerView( m_database, m_lang  );
	m_customerView->hide();
	//products
	m_productView = new productView( m_database, m_lang, productView::PRODUCT_VIEW );
	m_productView->hide();
	m_productView->setIndexSearchProduct( m_Settings->getPositionListSearchProduct() );
	//board
	m_board = new board( m_database, m_lang );

	//Attention au sauvegardes
	mlabel_warningBdd = new QLabel();
	mlabel_warningBdd -> setAlignment( Qt::AlignCenter );
	if( m_Settings -> getDatebddSave().addMonths(3) < QDate::currentDate()){
		QString txt = "<p align=\"center\" style=\"font-size:13px;font-weight:bold;color:white;background:#D65600; \">";
		txt += tr("La base de donn&eacute;es doit &ecirc;tre sauvegard&eacute;e! Derniere sauvegarde r&eacute;alis&eacute;e le: ") + m_Settings -> getDatebddSave().toString(tr("dd-MM-yyyy")) + "</p>";
		mlabel_warningBdd -> setText(txt);
		mlabel_warningBdd -> setVisible(true);
	}
	else{
		mlabel_warningBdd -> setVisible(false);
	}
	
	//Mis en layout
	ui->verticalLayout->addWidget( mlabel_warningBdd );
	ui->verticalLayout->addWidget( m_board );
	ui->verticalLayout->addWidget( m_customerView );
	ui->verticalLayout->addWidget( m_productView );
	ui->verticalLayout->update();

	// test os version
    ui->action_don->setVisible(false);
#ifdef __WIN32
	ui->action_don->setVisible(false);
	trymcercle mtry;
	if(mtry.isLock()) {
		QString messageTry = "<p align=\"center\" style=\"font-size:13px;font-weight:bold;color:white;background:#2D7D45; \">";
		messageTry += tr("mcercle - VERSION LIMITEE (EVALUATION)") + tr("<br/><a href=\"http://cfdev.fr/mcercle\"><span style=\"color:#fff;\">Commander une clef d'activation</span></a></p>");
		messageTry += mlabel_warningBdd -> text();
		mlabel_warningBdd -> setText(messageTry);
		mlabel_warningBdd -> setVisible(true);
		mlabel_warningBdd -> setOpenExternalLinks ( true );

		ui->menuImporter->setEnabled(false);
	}
#endif

	// TODO : SEGFAULT!!! Checkupdate
#ifdef QT_NO_DEBUG
	if( m_Settings->getCheckVersion() ){
		Update *up = new Update(this);
		up -> checkVersion( m_Settings->getUrl() );
	}
#endif
}


/**
	Affiche les informations au sujet de Qt
*/
void MainWindow::on_actionA_propos_de_Qt_triggered() {
	QApplication::aboutQt();
}

/**
	Quitte l application
*/
void MainWindow::on_actionQuitter_triggered() {
	close();
}

/**
	Affiche le tableau de bord
*/
void MainWindow::on_actionTableau_de_bord_triggered() {
	m_board->show();
	m_board->listStockAlertToTable();
	m_board->listInvoiceAlertToTable();
	m_board->listProposalAlertToTable();
	m_board->listYear();
	m_board->listRevenuesToTable();
	m_customerView->hide();
	m_productView->hide();
	ui->verticalLayout->update();
}

/**
	Affiche la gestion clients
*/
void MainWindow::on_actionClients_triggered() {
	m_board->hide();
	m_customerView->refreshCustomersList();
	m_customerView->show();
	m_productView->hide();
	ui->verticalLayout->update();
}

/**
	Affiche la gestion produits
*/
void MainWindow::on_actionProduits_triggered() {
	m_board->hide();
	m_customerView->hide();
	m_productView->refreshProductsList();
	m_productView->show();
	ui->verticalLayout->update();
}

/**
	Affiche la liste des fournisseurs
*/
void MainWindow::on_actionActionProvider_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	DialogProviders *m_DialogProviders = new DialogProviders(m_database->m_product);
	m_DialogProviders->setModal(true);
	m_DialogProviders->exec();
	delete m_DialogProviders;
}

/**
	Affiche les informations de l application
*/
void MainWindow::on_actionA_propos_triggered() {
	//fenetre a propos
	m_about = new about(m_database, this);
	m_about->setModal(true);
	m_about->show();
}

/**
	Ouvrir la fenetre de configuration
  */
void MainWindow::on_actionConfiguration_triggered() {
   DialogSettings *m_DialogSettings = new DialogSettings(m_Settings, m_database, m_lang, this);
   m_DialogSettings->setModal(true);
   QObject::connect(m_DialogSettings, SIGNAL(askRefreshList()), this, SLOT(RefreshLists()));
   m_DialogSettings->show();
}

/**
	Rafraichir les listes clients et produits
  */
void MainWindow::RefreshLists() {
	m_customerView->listCustomers(1);
	m_customerView->listServices();
	m_customerView->listProposals();
	m_customerView->listInvoices();
	m_productView->listProducts(1);
	m_board->listStockAlertToTable();
	m_board->listInvoiceAlertToTable();
	m_board->listProposalAlertToTable();
	m_board->listYear();
	m_board->listRevenuesToTable();
}

/**
	Rafraichir les listes clients et produits
  */
void MainWindow::RefreshActivation() {
//
}

/**
	Ouvre le dialog pour lister les factures
  */
void MainWindow::on_actionLivres_des_Recettes_triggered() {
	if(m_database->isConnected()){
		DialogInvoiceList *m_DialogInvList = new DialogInvoiceList(m_lang, m_database, this);
		m_DialogInvList->setModal(true);
		m_DialogInvList->show();
	}
}

/**
  Sauvegarder la base de donnees sous..
*/
void MainWindow::on_actionSauvegarder_la_base_de_donn_es_sous_triggered() {
	// Si on est pas connecte on sort
	if(!m_database->isConnected())return;
	// Test de SQLITE
	if(m_database->getBdd() != "SQLITE"){
		QMessageBox::information(this, tr("Information"),
								 tr("Cette fonction est disponible uniquement pour SQLITE !"));
		return;
	}

	// Fermeture de la base de donnees
	m_database->close();
	
	QString source = m_database->getDatabaseName();
	QString name = source; 
	name.replace(".db", "_"+QDateTime::currentDateTime().toString(tr("dd-MM-yyyy_HHmmss"))+".db");
	QString filename = QFileDialog::getSaveFileName(this, "Enregister sous... ",  name, "*.db");
	// TODO: A tester si le fichier existe deja...
	// Une confirmation a ete demandee pour la reecriture du fichier via QFileDialog.
	if( !filename.isEmpty() ) {
		if(QFile::exists ( filename )){
			// Si le fichier existe deja on supprime
			if(!QFile::remove ( filename ) ){
				QMessageBox::critical(this, tr("Erreur"),
									 tr("Impossible de remplacer le fichier!\n\n")+
									 "Destination: "+name+"\n");
				// Reouverture de la base de donnees
				m_database -> connect();
				return;
			}	
		}
		if( QFile::copy(source, filename) ) {
			QMessageBox::information(this, tr("Information"),
									 tr("Sauvegarde Terminée!\n\n")+
									 "Source: "+source+"\n"+
									 "Destination: "+filename+"\n");
			m_Settings -> setDatebddSave( QDate::currentDate() );
		}
		else
			QMessageBox::critical(this, tr("Erreur"),
									tr("Sauvegarde impossible!\n\n")+
										"Source: "+source+"\n"+
										"Destination: "+filename+"\n");
	}
	// Reouverture de la base de donnees
	m_database -> connect();
}


/**
 * @brief MainWindow::on_actionServices_common_triggered
 */
void MainWindow::on_actionServices_common_triggered() {
	// Si on est pas connecte on sort
	if(!m_database -> isConnected())return;
	
	DialogServicesEdit *m_DServComm = new DialogServicesEdit(m_database);
	m_DServComm -> setModal(true);
	m_DServComm -> exec();

	delete m_DServComm;
}

/**
 * @brief Ouvrir le dossier ou se trouve la base de donnees
 */
void MainWindow::on_actionOuvrir_BddDir_triggered() {
	//
}

/**
 * @brief Lien pour faire un don...jen ai besoin malheureusement :(
 */
void MainWindow::on_action_triggered() {
	QDesktopServices::openUrl(QUrl("https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=72NQ9YWVE8U2W"));
}

/**
 * @brief exporter les clients
 */
void MainWindow::on_actionClients_ex_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout exp(m_database);
	exp.exportAllCustomers();
}

/**
 * @brief expoter les produits
 */
void MainWindow::on_actionProduits_ex_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout exp(m_database);
	exp.exportAllProducts();
}

/**
 * @brief exporter les services
 */
void MainWindow::on_actionServices_ex_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout exp(m_database);
	exp.exportAllServices();
}

void MainWindow::on_actionFournisseur_ex_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout exp(m_database);
	exp.exportAllProviders();
}

/**
 * @brief Signaler_un_bug -> sur github
 */
void MainWindow::on_actionSignaler_un_bug_triggered() {
	QDesktopServices::openUrl(QUrl("https://github.com/cfdev/mcercle/issues"));
}

/**
 * @brief MainWindow:: imprimer un fichier à entête
 */
void MainWindow::on_actionImprimer_une_fiche_Ent_te_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	Printc mprint(m_database, m_lang, this);
	mprint.print_fileEmpty();
}


/**
 * @brief Import some customers
 */
void MainWindow::on_actionClients_import_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout import(m_database);
	import.importAllCustomers();
	m_customerView->refreshCustomersList();
}

/**
 * @brief Import some products
 */
void MainWindow::on_actionProduits_import_triggered() {
	//Si on est pas connecte on sort
	if(!m_database->isConnected())return;

	inout import(m_database);
	import.importAllProducts();
	m_productView->refreshProductsList();
}
