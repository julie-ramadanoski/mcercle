/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QAction *actionA_propos;
    QAction *actionA_propos_de_Qt;
    QAction *actionTableau_de_bord;
    QAction *actionClients;
    QAction *actionProduits;
    QAction *actionConfiguration;
    QAction *actionActionProvider;
    QAction *actionLivres_des_Recettes;
    QAction *actionSauvegarder_la_base_de_donn_es_sous;
    QAction *actionServices_common;
    QAction *action_don;
    QAction *actionClients_ex;
    QAction *actionProduits_ex;
    QAction *actionServices_ex;
    QAction *actionFournisseur_ex;
    QAction *actionSignaler_un_bug;
    QAction *actionImprimer_une_fiche_Ent_te;
    QAction *actionClients_import;
    QAction *actionProduits_import;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QMenu *menuAffichage;
    QMenu *menuOutils;
    QMenu *menuExporter;
    QMenu *menuImporter;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1024, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app/logo"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAnimated(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app/quit"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter->setIcon(icon1);
        actionQuitter->setVisible(true);
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app/help"), QSize(), QIcon::Normal, QIcon::Off);
        actionA_propos->setIcon(icon2);
        actionA_propos_de_Qt = new QAction(MainWindow);
        actionA_propos_de_Qt->setObjectName(QString::fromUtf8("actionA_propos_de_Qt"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app/AboutQt"), QSize(), QIcon::Normal, QIcon::Off);
        actionA_propos_de_Qt->setIcon(icon3);
        actionTableau_de_bord = new QAction(MainWindow);
        actionTableau_de_bord->setObjectName(QString::fromUtf8("actionTableau_de_bord"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/app/board"), QSize(), QIcon::Normal, QIcon::Off);
        actionTableau_de_bord->setIcon(icon4);
        actionTableau_de_bord->setVisible(true);
        actionClients = new QAction(MainWindow);
        actionClients->setObjectName(QString::fromUtf8("actionClients"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app/customers"), QSize(), QIcon::Normal, QIcon::Off);
        actionClients->setIcon(icon5);
        actionProduits = new QAction(MainWindow);
        actionProduits->setObjectName(QString::fromUtf8("actionProduits"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/app/products"), QSize(), QIcon::Normal, QIcon::Off);
        actionProduits->setIcon(icon6);
        actionConfiguration = new QAction(MainWindow);
        actionConfiguration->setObjectName(QString::fromUtf8("actionConfiguration"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/app/preference"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfiguration->setIcon(icon7);
        actionActionProvider = new QAction(MainWindow);
        actionActionProvider->setObjectName(QString::fromUtf8("actionActionProvider"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/app/providers"), QSize(), QIcon::Normal, QIcon::Off);
        actionActionProvider->setIcon(icon8);
        actionLivres_des_Recettes = new QAction(MainWindow);
        actionLivres_des_Recettes->setObjectName(QString::fromUtf8("actionLivres_des_Recettes"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/app/venteComptoire"), QSize(), QIcon::Normal, QIcon::Off);
        actionLivres_des_Recettes->setIcon(icon9);
        actionSauvegarder_la_base_de_donn_es_sous = new QAction(MainWindow);
        actionSauvegarder_la_base_de_donn_es_sous->setObjectName(QString::fromUtf8("actionSauvegarder_la_base_de_donn_es_sous"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/app/save_as"), QSize(), QIcon::Normal, QIcon::Off);
        actionSauvegarder_la_base_de_donn_es_sous->setIcon(icon10);
        actionServices_common = new QAction(MainWindow);
        actionServices_common->setObjectName(QString::fromUtf8("actionServices_common"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/app/services"), QSize(), QIcon::Normal, QIcon::Off);
        actionServices_common->setIcon(icon11);
        action_don = new QAction(MainWindow);
        action_don->setObjectName(QString::fromUtf8("action_don"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/app/don1"), QSize(), QIcon::Normal, QIcon::Off);
        action_don->setIcon(icon12);
        actionClients_ex = new QAction(MainWindow);
        actionClients_ex->setObjectName(QString::fromUtf8("actionClients_ex"));
        actionProduits_ex = new QAction(MainWindow);
        actionProduits_ex->setObjectName(QString::fromUtf8("actionProduits_ex"));
        actionServices_ex = new QAction(MainWindow);
        actionServices_ex->setObjectName(QString::fromUtf8("actionServices_ex"));
        actionFournisseur_ex = new QAction(MainWindow);
        actionFournisseur_ex->setObjectName(QString::fromUtf8("actionFournisseur_ex"));
        actionSignaler_un_bug = new QAction(MainWindow);
        actionSignaler_un_bug->setObjectName(QString::fromUtf8("actionSignaler_un_bug"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/app/bug"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignaler_un_bug->setIcon(icon13);
        actionImprimer_une_fiche_Ent_te = new QAction(MainWindow);
        actionImprimer_une_fiche_Ent_te->setObjectName(QString::fromUtf8("actionImprimer_une_fiche_Ent_te"));
        actionClients_import = new QAction(MainWindow);
        actionClients_import->setObjectName(QString::fromUtf8("actionClients_import"));
        actionClients_import->setIcon(icon5);
        actionProduits_import = new QAction(MainWindow);
        actionProduits_import->setObjectName(QString::fromUtf8("actionProduits_import"));
        actionProduits_import->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 26));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menuBar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        menuAffichage = new QMenu(menuBar);
        menuAffichage->setObjectName(QString::fromUtf8("menuAffichage"));
        menuOutils = new QMenu(menuBar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        menuExporter = new QMenu(menuOutils);
        menuExporter->setObjectName(QString::fromUtf8("menuExporter"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/app/export"), QSize(), QIcon::Normal, QIcon::Off);
        menuExporter->setIcon(icon14);
        menuImporter = new QMenu(menuOutils);
        menuImporter->setObjectName(QString::fromUtf8("menuImporter"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/app/import"), QSize(), QIcon::Normal, QIcon::Off);
        menuImporter->setIcon(icon15);
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setMovable(true);
        mainToolBar->setAllowedAreas(Qt::AllToolBarAreas);
        mainToolBar->setIconSize(QSize(32, 32));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuAffichage->menuAction());
        menuBar->addAction(menuOutils->menuAction());
        menuBar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionSauvegarder_la_base_de_donn_es_sous);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionSignaler_un_bug);
        menuAide->addAction(actionA_propos);
        menuAide->addAction(actionA_propos_de_Qt);
        menuAffichage->addAction(actionTableau_de_bord);
        menuAffichage->addAction(actionClients);
        menuAffichage->addAction(actionProduits);
        menuAffichage->addAction(actionServices_common);
        menuAffichage->addAction(actionActionProvider);
        menuOutils->addAction(actionLivres_des_Recettes);
        menuOutils->addAction(actionImprimer_une_fiche_Ent_te);
        menuOutils->addAction(menuExporter->menuAction());
        menuOutils->addAction(menuImporter->menuAction());
        menuOutils->addSeparator();
        menuOutils->addAction(actionConfiguration);
        menuExporter->addAction(actionClients_ex);
        menuExporter->addAction(actionProduits_ex);
        menuExporter->addAction(actionServices_ex);
        menuExporter->addAction(actionFournisseur_ex);
        menuImporter->addAction(actionClients_import);
        menuImporter->addAction(actionProduits_import);
        mainToolBar->addAction(actionTableau_de_bord);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClients);
        mainToolBar->addAction(actionProduits);
        mainToolBar->addAction(actionServices_common);
        mainToolBar->addAction(actionActionProvider);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionConfiguration);
        mainToolBar->addAction(actionA_propos);
        mainToolBar->addAction(action_don);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "mcercle", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionA_propos->setText(QApplication::translate("MainWindow", "A propos", 0, QApplication::UnicodeUTF8));
        actionA_propos_de_Qt->setText(QApplication::translate("MainWindow", "A propos de Qt", 0, QApplication::UnicodeUTF8));
        actionTableau_de_bord->setText(QApplication::translate("MainWindow", "Tableau de bord", 0, QApplication::UnicodeUTF8));
        actionTableau_de_bord->setShortcut(QApplication::translate("MainWindow", "T", 0, QApplication::UnicodeUTF8));
        actionClients->setText(QApplication::translate("MainWindow", "Clients", 0, QApplication::UnicodeUTF8));
        actionClients->setShortcut(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        actionProduits->setText(QApplication::translate("MainWindow", "Produits", 0, QApplication::UnicodeUTF8));
        actionProduits->setShortcut(QApplication::translate("MainWindow", "P", 0, QApplication::UnicodeUTF8));
        actionConfiguration->setText(QApplication::translate("MainWindow", "Configuration", 0, QApplication::UnicodeUTF8));
        actionActionProvider->setText(QApplication::translate("MainWindow", "Fournisseurs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionActionProvider->setToolTip(QApplication::translate("MainWindow", "Fournisseurs", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionActionProvider->setShortcut(QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8));
        actionLivres_des_Recettes->setText(QApplication::translate("MainWindow", "Livres des Recettes", 0, QApplication::UnicodeUTF8));
        actionLivres_des_Recettes->setShortcut(QApplication::translate("MainWindow", "L", 0, QApplication::UnicodeUTF8));
        actionSauvegarder_la_base_de_donn_es_sous->setText(QApplication::translate("MainWindow", "Sauvegarder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSauvegarder_la_base_de_donn_es_sous->setToolTip(QApplication::translate("MainWindow", "Sauvegarder la base de donnees sous", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSauvegarder_la_base_de_donn_es_sous->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionServices_common->setText(QApplication::translate("MainWindow", "Services", 0, QApplication::UnicodeUTF8));
        actionServices_common->setShortcut(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        action_don->setText(QApplication::translate("MainWindow", "Faire un don", 0, QApplication::UnicodeUTF8));
        action_don->setIconText(QApplication::translate("MainWindow", "Faire un don", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        action_don->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:9pt;\">mcercle vous aide dans votre activit&eacute;.</span></p><p align=\"center\"><span style=\" font-size:9pt; font-weight:600; color:#815a0c;\">Aidez moi &agrave; continuer en faisant un don.</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; color:#815a0c;\">MERCI</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClients_ex->setText(QApplication::translate("MainWindow", "Clients", 0, QApplication::UnicodeUTF8));
        actionProduits_ex->setText(QApplication::translate("MainWindow", "Produits", 0, QApplication::UnicodeUTF8));
        actionServices_ex->setText(QApplication::translate("MainWindow", "Services", 0, QApplication::UnicodeUTF8));
        actionFournisseur_ex->setText(QApplication::translate("MainWindow", "Fournisseur", 0, QApplication::UnicodeUTF8));
        actionSignaler_un_bug->setText(QApplication::translate("MainWindow", "Signaler un bug", 0, QApplication::UnicodeUTF8));
        actionImprimer_une_fiche_Ent_te->setText(QApplication::translate("MainWindow", "Imprimer une fiche \303\240 Ent\303\252te", 0, QApplication::UnicodeUTF8));
        actionClients_import->setText(QApplication::translate("MainWindow", "Clients", 0, QApplication::UnicodeUTF8));
        actionProduits_import->setText(QApplication::translate("MainWindow", "Produits", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuAide->setTitle(QApplication::translate("MainWindow", "Aide", 0, QApplication::UnicodeUTF8));
        menuAffichage->setTitle(QApplication::translate("MainWindow", "Affichage", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Outils", 0, QApplication::UnicodeUTF8));
        menuExporter->setTitle(QApplication::translate("MainWindow", "Exporter", 0, QApplication::UnicodeUTF8));
        menuImporter->setTitle(QApplication::translate("MainWindow", "Importer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
