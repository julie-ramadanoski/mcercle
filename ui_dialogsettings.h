/********************************************************************************
** Form generated from reading UI file 'dialogsettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSETTINGS_H
#define UI_DIALOGSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Application;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_App;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBox_checkVersion;
    QComboBox *comboBox_theme;
    QLabel *label_30;
    QCheckBox *checkBox_manageStock;
    QLineEdit *lineEdit_url;
    QFrame *line;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_compagny;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_logo;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_15;
    QPushButton *pushButton_Logo;
    QPushButton *pushButton_ClearImage;
    QGridLayout *gridLayout_2;
    QLabel *label_17;
    QLabel *label_7;
    QCheckBox *checkBox_TAX;
    QLineEdit *lineEdit_sPhone;
    QLabel *label_6;
    QLineEdit *lineEdit_sName;
    QLabel *label_14;
    QLabel *label_16;
    QLineEdit *lineEdit_sNum;
    QLineEdit *lineEdit_sCapital;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_sEmail;
    QLabel *label_8;
    QLineEdit *lineEdit_sWebSite;
    QLineEdit *lineEdit_sCity;
    QLineEdit *lineEdit_sZipCode;
    QLabel *label_27;
    QComboBox *comboBox_CA;
    QLabel *label_11;
    QLineEdit *lineEdit_sFax;
    QLineEdit *lineEdit_numTVA;
    QLabel *label_28;
    QLabel *label_currency;
    QLineEdit *lineEdit_currency;
    QLabel *label_10;
    QLineEdit *lineEdit_sAdd1;
    QLineEdit *lineEdit_sAdd2;
    QLineEdit *lineEdit_sAdd3;
    QWidget *tab_bank;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLineEdit *lineEdit_nameBanque;
    QGridLayout *gridLayout_4;
    QLabel *label_24;
    QLineEdit *lineEdit_IBAN1;
    QLineEdit *lineEdit_IBAN2;
    QLineEdit *lineEdit_IBAN3;
    QLineEdit *lineEdit_IBAN4;
    QLineEdit *lineEdit_IBAN6;
    QLineEdit *lineEdit_IBAN7;
    QLineEdit *lineEdit_IBAN5;
    QLineEdit *lineEdit_IBAN9;
    QLineEdit *lineEdit_IBAN8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_25;
    QLineEdit *lineEdit_BIC;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_tax;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_tax;
    QWidget *tab_Database;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_hostName;
    QLabel *label_2;
    QLineEdit *lineEdit_port;
    QLineEdit *lineEdit_databaseName;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_login;
    QLabel *label_5;
    QLineEdit *lineEdit_password;
    QToolButton *toolButton_BaseSelect;
    QLabel *label_26;
    QComboBox *comboBox_dbase;
    QLabel *label_db_info;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_state;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_connect;
    QSpacerItem *verticalSpacer;
    QWidget *tab_printing;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_5;
    QLabel *label_printFont;
    QLabel *label_29;
    QCheckBox *checkBox_drawLine;
    QCheckBox *checkBox_border_radius;
    QFontComboBox *comboBox_printFont;
    QComboBox *comboBox_fontSize;
    QLabel *label_fontSize;
    QLabel *label_LineFree;
    QLineEdit *lineEdit_print1;
    QLineEdit *lineEdit_print2;
    QLineEdit *lineEdit_print3;
    QLineEdit *lineEdit_print4;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogSettings)
    {
        if (DialogSettings->objectName().isEmpty())
            DialogSettings->setObjectName(QString::fromUtf8("DialogSettings"));
        DialogSettings->resize(621, 542);
        DialogSettings->setMinimumSize(QSize(500, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app/preference"), QSize(), QIcon::Normal, QIcon::Off);
        DialogSettings->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DialogSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(DialogSettings);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setIconSize(QSize(16, 24));
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tab_Application = new QWidget();
        tab_Application->setObjectName(QString::fromUtf8("tab_Application"));
        verticalLayout_12 = new QVBoxLayout(tab_Application);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_App = new QVBoxLayout();
        verticalLayout_App->setObjectName(QString::fromUtf8("verticalLayout_App"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        checkBox_checkVersion = new QCheckBox(tab_Application);
        checkBox_checkVersion->setObjectName(QString::fromUtf8("checkBox_checkVersion"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app/ok"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_checkVersion->setIcon(icon1);
        checkBox_checkVersion->setChecked(false);

        gridLayout_6->addWidget(checkBox_checkVersion, 1, 0, 1, 1);

        comboBox_theme = new QComboBox(tab_Application);
        comboBox_theme->setObjectName(QString::fromUtf8("comboBox_theme"));

        gridLayout_6->addWidget(comboBox_theme, 0, 1, 1, 1);

        label_30 = new QLabel(tab_Application);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_6->addWidget(label_30, 0, 0, 1, 1);

        checkBox_manageStock = new QCheckBox(tab_Application);
        checkBox_manageStock->setObjectName(QString::fromUtf8("checkBox_manageStock"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app/products"), QSize(), QIcon::Normal, QIcon::Off);
        checkBox_manageStock->setIcon(icon2);

        gridLayout_6->addWidget(checkBox_manageStock, 3, 0, 1, 1);

        lineEdit_url = new QLineEdit(tab_Application);
        lineEdit_url->setObjectName(QString::fromUtf8("lineEdit_url"));

        gridLayout_6->addWidget(lineEdit_url, 1, 1, 1, 1);


        verticalLayout_App->addLayout(gridLayout_6);

        line = new QFrame(tab_Application);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_App->addWidget(line);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_App->addItem(verticalSpacer_4);


        verticalLayout_12->addLayout(verticalLayout_App);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app/config"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_Application, icon3, QString());
        tab_compagny = new QWidget();
        tab_compagny->setObjectName(QString::fromUtf8("tab_compagny"));
        horizontalLayout_2 = new QHBoxLayout(tab_compagny);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_logo = new QLabel(tab_compagny);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));

        horizontalLayout_3->addWidget(label_logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_15 = new QLabel(tab_compagny);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_5->addWidget(label_15);

        pushButton_Logo = new QPushButton(tab_compagny);
        pushButton_Logo->setObjectName(QString::fromUtf8("pushButton_Logo"));

        verticalLayout_5->addWidget(pushButton_Logo);

        pushButton_ClearImage = new QPushButton(tab_compagny);
        pushButton_ClearImage->setObjectName(QString::fromUtf8("pushButton_ClearImage"));

        verticalLayout_5->addWidget(pushButton_ClearImage);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout_4->addLayout(horizontalLayout_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_17 = new QLabel(tab_compagny);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 1, 2, 1, 1);

        label_7 = new QLabel(tab_compagny);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        checkBox_TAX = new QCheckBox(tab_compagny);
        checkBox_TAX->setObjectName(QString::fromUtf8("checkBox_TAX"));
        checkBox_TAX->setEnabled(true);

        gridLayout_2->addWidget(checkBox_TAX, 1, 3, 1, 1);

        lineEdit_sPhone = new QLineEdit(tab_compagny);
        lineEdit_sPhone->setObjectName(QString::fromUtf8("lineEdit_sPhone"));
        lineEdit_sPhone->setMaxLength(24);

        gridLayout_2->addWidget(lineEdit_sPhone, 3, 1, 1, 1);

        label_6 = new QLabel(tab_compagny);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        lineEdit_sName = new QLineEdit(tab_compagny);
        lineEdit_sName->setObjectName(QString::fromUtf8("lineEdit_sName"));
        lineEdit_sName->setMaxLength(64);

        gridLayout_2->addWidget(lineEdit_sName, 0, 1, 1, 1);

        label_14 = new QLabel(tab_compagny);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 4, 2, 1, 1);

        label_16 = new QLabel(tab_compagny);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 0, 1, 1);

        lineEdit_sNum = new QLineEdit(tab_compagny);
        lineEdit_sNum->setObjectName(QString::fromUtf8("lineEdit_sNum"));
        lineEdit_sNum->setMaxLength(64);

        gridLayout_2->addWidget(lineEdit_sNum, 0, 3, 1, 1);

        lineEdit_sCapital = new QLineEdit(tab_compagny);
        lineEdit_sCapital->setObjectName(QString::fromUtf8("lineEdit_sCapital"));

        gridLayout_2->addWidget(lineEdit_sCapital, 1, 1, 1, 1);

        label_9 = new QLabel(tab_compagny);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 3, 0, 1, 1);

        label_12 = new QLabel(tab_compagny);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 3, 2, 1, 1);

        label_13 = new QLabel(tab_compagny);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 4, 0, 1, 1);

        lineEdit_sEmail = new QLineEdit(tab_compagny);
        lineEdit_sEmail->setObjectName(QString::fromUtf8("lineEdit_sEmail"));
        lineEdit_sEmail->setMaxLength(128);

        gridLayout_2->addWidget(lineEdit_sEmail, 4, 1, 1, 1);

        label_8 = new QLabel(tab_compagny);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        lineEdit_sWebSite = new QLineEdit(tab_compagny);
        lineEdit_sWebSite->setObjectName(QString::fromUtf8("lineEdit_sWebSite"));
        lineEdit_sWebSite->setMaxLength(256);

        gridLayout_2->addWidget(lineEdit_sWebSite, 4, 3, 1, 1);

        lineEdit_sCity = new QLineEdit(tab_compagny);
        lineEdit_sCity->setObjectName(QString::fromUtf8("lineEdit_sCity"));
        lineEdit_sCity->setMaxLength(64);

        gridLayout_2->addWidget(lineEdit_sCity, 5, 1, 1, 1);

        lineEdit_sZipCode = new QLineEdit(tab_compagny);
        lineEdit_sZipCode->setObjectName(QString::fromUtf8("lineEdit_sZipCode"));
        lineEdit_sZipCode->setMaxLength(10);

        gridLayout_2->addWidget(lineEdit_sZipCode, 5, 3, 1, 1);

        label_27 = new QLabel(tab_compagny);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_2->addWidget(label_27, 6, 0, 1, 1);

        comboBox_CA = new QComboBox(tab_compagny);
        comboBox_CA->setObjectName(QString::fromUtf8("comboBox_CA"));

        gridLayout_2->addWidget(comboBox_CA, 6, 1, 1, 1);

        label_11 = new QLabel(tab_compagny);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 5, 2, 1, 1);

        lineEdit_sFax = new QLineEdit(tab_compagny);
        lineEdit_sFax->setObjectName(QString::fromUtf8("lineEdit_sFax"));
        lineEdit_sFax->setMaxLength(24);

        gridLayout_2->addWidget(lineEdit_sFax, 3, 3, 1, 1);

        lineEdit_numTVA = new QLineEdit(tab_compagny);
        lineEdit_numTVA->setObjectName(QString::fromUtf8("lineEdit_numTVA"));

        gridLayout_2->addWidget(lineEdit_numTVA, 2, 1, 1, 1);

        label_28 = new QLabel(tab_compagny);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        gridLayout_2->addWidget(label_28, 2, 0, 1, 1);

        label_currency = new QLabel(tab_compagny);
        label_currency->setObjectName(QString::fromUtf8("label_currency"));

        gridLayout_2->addWidget(label_currency, 2, 2, 1, 1);

        lineEdit_currency = new QLineEdit(tab_compagny);
        lineEdit_currency->setObjectName(QString::fromUtf8("lineEdit_currency"));
        lineEdit_currency->setMaxLength(3);
        lineEdit_currency->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit_currency, 2, 3, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        label_10 = new QLabel(tab_compagny);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        lineEdit_sAdd1 = new QLineEdit(tab_compagny);
        lineEdit_sAdd1->setObjectName(QString::fromUtf8("lineEdit_sAdd1"));
        lineEdit_sAdd1->setMaxLength(128);

        verticalLayout_4->addWidget(lineEdit_sAdd1);

        lineEdit_sAdd2 = new QLineEdit(tab_compagny);
        lineEdit_sAdd2->setObjectName(QString::fromUtf8("lineEdit_sAdd2"));
        lineEdit_sAdd2->setMaxLength(128);

        verticalLayout_4->addWidget(lineEdit_sAdd2);

        lineEdit_sAdd3 = new QLineEdit(tab_compagny);
        lineEdit_sAdd3->setObjectName(QString::fromUtf8("lineEdit_sAdd3"));
        lineEdit_sAdd3->setMaxLength(128);

        verticalLayout_4->addWidget(lineEdit_sAdd3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/app/compagny"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_compagny, icon4, QString());
        tab_bank = new QWidget();
        tab_bank->setObjectName(QString::fromUtf8("tab_bank"));
        verticalLayout_7 = new QVBoxLayout(tab_bank);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_19 = new QLabel(tab_bank);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 0, 1, 1);

        lineEdit_nameBanque = new QLineEdit(tab_bank);
        lineEdit_nameBanque->setObjectName(QString::fromUtf8("lineEdit_nameBanque"));
        lineEdit_nameBanque->setMaxLength(24);
        lineEdit_nameBanque->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(lineEdit_nameBanque, 0, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_24 = new QLabel(tab_bank);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 0, 0, 1, 1);

        lineEdit_IBAN1 = new QLineEdit(tab_bank);
        lineEdit_IBAN1->setObjectName(QString::fromUtf8("lineEdit_IBAN1"));
        lineEdit_IBAN1->setMaxLength(4);
        lineEdit_IBAN1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN1, 1, 0, 1, 1);

        lineEdit_IBAN2 = new QLineEdit(tab_bank);
        lineEdit_IBAN2->setObjectName(QString::fromUtf8("lineEdit_IBAN2"));
        lineEdit_IBAN2->setMaxLength(4);
        lineEdit_IBAN2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN2, 1, 1, 1, 1);

        lineEdit_IBAN3 = new QLineEdit(tab_bank);
        lineEdit_IBAN3->setObjectName(QString::fromUtf8("lineEdit_IBAN3"));
        lineEdit_IBAN3->setMaxLength(4);
        lineEdit_IBAN3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN3, 1, 2, 1, 1);

        lineEdit_IBAN4 = new QLineEdit(tab_bank);
        lineEdit_IBAN4->setObjectName(QString::fromUtf8("lineEdit_IBAN4"));
        lineEdit_IBAN4->setMaxLength(4);
        lineEdit_IBAN4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN4, 1, 3, 1, 1);

        lineEdit_IBAN6 = new QLineEdit(tab_bank);
        lineEdit_IBAN6->setObjectName(QString::fromUtf8("lineEdit_IBAN6"));
        lineEdit_IBAN6->setMaxLength(4);
        lineEdit_IBAN6->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN6, 1, 5, 1, 1);

        lineEdit_IBAN7 = new QLineEdit(tab_bank);
        lineEdit_IBAN7->setObjectName(QString::fromUtf8("lineEdit_IBAN7"));
        lineEdit_IBAN7->setMaxLength(4);
        lineEdit_IBAN7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN7, 1, 6, 1, 1);

        lineEdit_IBAN5 = new QLineEdit(tab_bank);
        lineEdit_IBAN5->setObjectName(QString::fromUtf8("lineEdit_IBAN5"));
        lineEdit_IBAN5->setMaxLength(4);
        lineEdit_IBAN5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN5, 1, 4, 1, 1);

        lineEdit_IBAN9 = new QLineEdit(tab_bank);
        lineEdit_IBAN9->setObjectName(QString::fromUtf8("lineEdit_IBAN9"));
        lineEdit_IBAN9->setMaxLength(2);
        lineEdit_IBAN9->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN9, 2, 1, 1, 1);

        lineEdit_IBAN8 = new QLineEdit(tab_bank);
        lineEdit_IBAN8->setObjectName(QString::fromUtf8("lineEdit_IBAN8"));
        lineEdit_IBAN8->setMaxLength(4);
        lineEdit_IBAN8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lineEdit_IBAN8, 2, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_25 = new QLabel(tab_bank);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_6->addWidget(label_25);

        lineEdit_BIC = new QLineEdit(tab_bank);
        lineEdit_BIC->setObjectName(QString::fromUtf8("lineEdit_BIC"));
        lineEdit_BIC->setMaxLength(11);
        lineEdit_BIC->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit_BIC);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_6->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        verticalLayout_7->addLayout(verticalLayout_6);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/app/revenue"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_bank, icon5, QString());
        tab_tax = new QWidget();
        tab_tax->setObjectName(QString::fromUtf8("tab_tax"));
        tab_tax->setEnabled(true);
        verticalLayout_10 = new QVBoxLayout(tab_tax);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_tax = new QVBoxLayout();
        verticalLayout_tax->setObjectName(QString::fromUtf8("verticalLayout_tax"));

        verticalLayout_10->addLayout(verticalLayout_tax);

        tabWidget->addTab(tab_tax, QString());
        tab_Database = new QWidget();
        tab_Database->setObjectName(QString::fromUtf8("tab_Database"));
        verticalLayout_3 = new QVBoxLayout(tab_Database);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tab_Database);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        lineEdit_hostName = new QLineEdit(tab_Database);
        lineEdit_hostName->setObjectName(QString::fromUtf8("lineEdit_hostName"));

        gridLayout->addWidget(lineEdit_hostName, 1, 1, 1, 1);

        label_2 = new QLabel(tab_Database);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit_port = new QLineEdit(tab_Database);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));

        gridLayout->addWidget(lineEdit_port, 2, 1, 1, 1);

        lineEdit_databaseName = new QLineEdit(tab_Database);
        lineEdit_databaseName->setObjectName(QString::fromUtf8("lineEdit_databaseName"));

        gridLayout->addWidget(lineEdit_databaseName, 3, 1, 1, 1);

        label_3 = new QLabel(tab_Database);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_4 = new QLabel(tab_Database);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        lineEdit_login = new QLineEdit(tab_Database);
        lineEdit_login->setObjectName(QString::fromUtf8("lineEdit_login"));

        gridLayout->addWidget(lineEdit_login, 4, 1, 1, 1);

        label_5 = new QLabel(tab_Database);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        lineEdit_password = new QLineEdit(tab_Database);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 5, 1, 1, 1);

        toolButton_BaseSelect = new QToolButton(tab_Database);
        toolButton_BaseSelect->setObjectName(QString::fromUtf8("toolButton_BaseSelect"));

        gridLayout->addWidget(toolButton_BaseSelect, 3, 2, 1, 1);

        label_26 = new QLabel(tab_Database);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout->addWidget(label_26, 0, 0, 1, 1);

        comboBox_dbase = new QComboBox(tab_Database);
        comboBox_dbase->setObjectName(QString::fromUtf8("comboBox_dbase"));

        gridLayout->addWidget(comboBox_dbase, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        label_db_info = new QLabel(tab_Database);
        label_db_info->setObjectName(QString::fromUtf8("label_db_info"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_db_info->setFont(font);

        verticalLayout_2->addWidget(label_db_info);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_18 = new QLabel(tab_Database);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_4->addWidget(label_18);

        horizontalSpacer_3 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label_state = new QLabel(tab_Database);
        label_state->setObjectName(QString::fromUtf8("label_state"));

        horizontalLayout_4->addWidget(label_state);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_connect = new QPushButton(tab_Database);
        pushButton_connect->setObjectName(QString::fromUtf8("pushButton_connect"));

        horizontalLayout_4->addWidget(pushButton_connect);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/app/database"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_Database, icon6, QString());
        tab_printing = new QWidget();
        tab_printing->setObjectName(QString::fromUtf8("tab_printing"));
        verticalLayout_9 = new QVBoxLayout(tab_printing);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_printFont = new QLabel(tab_printing);
        label_printFont->setObjectName(QString::fromUtf8("label_printFont"));
        label_printFont->setScaledContents(false);

        gridLayout_5->addWidget(label_printFont, 0, 0, 1, 1);

        label_29 = new QLabel(tab_printing);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_5->addWidget(label_29, 2, 0, 1, 1);

        checkBox_drawLine = new QCheckBox(tab_printing);
        checkBox_drawLine->setObjectName(QString::fromUtf8("checkBox_drawLine"));

        gridLayout_5->addWidget(checkBox_drawLine, 2, 1, 1, 1);

        checkBox_border_radius = new QCheckBox(tab_printing);
        checkBox_border_radius->setObjectName(QString::fromUtf8("checkBox_border_radius"));
        checkBox_border_radius->setChecked(false);
        checkBox_border_radius->setAutoRepeat(false);
        checkBox_border_radius->setAutoExclusive(false);
        checkBox_border_radius->setTristate(false);

        gridLayout_5->addWidget(checkBox_border_radius, 3, 1, 1, 1);

        comboBox_printFont = new QFontComboBox(tab_printing);
        comboBox_printFont->setObjectName(QString::fromUtf8("comboBox_printFont"));

        gridLayout_5->addWidget(comboBox_printFont, 0, 1, 1, 1);

        comboBox_fontSize = new QComboBox(tab_printing);
        comboBox_fontSize->setObjectName(QString::fromUtf8("comboBox_fontSize"));
        comboBox_fontSize->setModelColumn(0);

        gridLayout_5->addWidget(comboBox_fontSize, 1, 1, 1, 1);

        label_fontSize = new QLabel(tab_printing);
        label_fontSize->setObjectName(QString::fromUtf8("label_fontSize"));

        gridLayout_5->addWidget(label_fontSize, 1, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_5);

        label_LineFree = new QLabel(tab_printing);
        label_LineFree->setObjectName(QString::fromUtf8("label_LineFree"));

        verticalLayout_8->addWidget(label_LineFree);

        lineEdit_print1 = new QLineEdit(tab_printing);
        lineEdit_print1->setObjectName(QString::fromUtf8("lineEdit_print1"));
        lineEdit_print1->setMaxLength(256);

        verticalLayout_8->addWidget(lineEdit_print1);

        lineEdit_print2 = new QLineEdit(tab_printing);
        lineEdit_print2->setObjectName(QString::fromUtf8("lineEdit_print2"));
        lineEdit_print2->setMaxLength(256);

        verticalLayout_8->addWidget(lineEdit_print2);

        lineEdit_print3 = new QLineEdit(tab_printing);
        lineEdit_print3->setObjectName(QString::fromUtf8("lineEdit_print3"));
        lineEdit_print3->setMaxLength(256);

        verticalLayout_8->addWidget(lineEdit_print3);

        lineEdit_print4 = new QLineEdit(tab_printing);
        lineEdit_print4->setObjectName(QString::fromUtf8("lineEdit_print4"));

        verticalLayout_8->addWidget(lineEdit_print4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);


        verticalLayout_9->addLayout(verticalLayout_8);

        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/app/print"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_printing, icon7, QString());

        horizontalLayout->addWidget(tabWidget);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(tabWidget, pushButton_Logo);
        QWidget::setTabOrder(pushButton_Logo, pushButton_ClearImage);
        QWidget::setTabOrder(pushButton_ClearImage, lineEdit_sName);
        QWidget::setTabOrder(lineEdit_sName, lineEdit_sNum);
        QWidget::setTabOrder(lineEdit_sNum, lineEdit_sCapital);
        QWidget::setTabOrder(lineEdit_sCapital, checkBox_TAX);
        QWidget::setTabOrder(checkBox_TAX, lineEdit_sPhone);
        QWidget::setTabOrder(lineEdit_sPhone, lineEdit_sFax);
        QWidget::setTabOrder(lineEdit_sFax, lineEdit_sEmail);
        QWidget::setTabOrder(lineEdit_sEmail, lineEdit_sWebSite);
        QWidget::setTabOrder(lineEdit_sWebSite, lineEdit_sCity);
        QWidget::setTabOrder(lineEdit_sCity, lineEdit_sZipCode);
        QWidget::setTabOrder(lineEdit_sZipCode, lineEdit_sAdd1);
        QWidget::setTabOrder(lineEdit_sAdd1, lineEdit_sAdd2);
        QWidget::setTabOrder(lineEdit_sAdd2, lineEdit_sAdd3);
        QWidget::setTabOrder(lineEdit_sAdd3, lineEdit_nameBanque);
        QWidget::setTabOrder(lineEdit_nameBanque, lineEdit_IBAN1);
        QWidget::setTabOrder(lineEdit_IBAN1, lineEdit_IBAN2);
        QWidget::setTabOrder(lineEdit_IBAN2, lineEdit_IBAN3);
        QWidget::setTabOrder(lineEdit_IBAN3, lineEdit_IBAN4);
        QWidget::setTabOrder(lineEdit_IBAN4, lineEdit_IBAN5);
        QWidget::setTabOrder(lineEdit_IBAN5, lineEdit_IBAN6);
        QWidget::setTabOrder(lineEdit_IBAN6, lineEdit_IBAN7);
        QWidget::setTabOrder(lineEdit_IBAN7, lineEdit_IBAN8);
        QWidget::setTabOrder(lineEdit_IBAN8, lineEdit_IBAN9);
        QWidget::setTabOrder(lineEdit_IBAN9, lineEdit_BIC);
        QWidget::setTabOrder(lineEdit_BIC, comboBox_dbase);
        QWidget::setTabOrder(comboBox_dbase, lineEdit_hostName);
        QWidget::setTabOrder(lineEdit_hostName, lineEdit_port);
        QWidget::setTabOrder(lineEdit_port, lineEdit_databaseName);
        QWidget::setTabOrder(lineEdit_databaseName, toolButton_BaseSelect);
        QWidget::setTabOrder(toolButton_BaseSelect, lineEdit_login);
        QWidget::setTabOrder(lineEdit_login, lineEdit_password);
        QWidget::setTabOrder(lineEdit_password, pushButton_connect);
        QWidget::setTabOrder(pushButton_connect, buttonBox);

        retranslateUi(DialogSettings);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogSettings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogSettings, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogSettings);
    } // setupUi

    void retranslateUi(QDialog *DialogSettings)
    {
        DialogSettings->setWindowTitle(QApplication::translate("DialogSettings", "Configuration", 0, QApplication::UnicodeUTF8));
        checkBox_checkVersion->setText(QApplication::translate("DialogSettings", "V\303\251rifie si une nouvelle version est disponible.", 0, QApplication::UnicodeUTF8));
        comboBox_theme->clear();
        comboBox_theme->insertItems(0, QStringList()
         << QApplication::translate("DialogSettings", "Normale", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "Sombre", 0, QApplication::UnicodeUTF8)
        );
        label_30->setText(QApplication::translate("DialogSettings", "Apparence : (Apr\303\250s red\303\251marrage de mcercle)", 0, QApplication::UnicodeUTF8));
        checkBox_manageStock->setText(QApplication::translate("DialogSettings", "G\303\250re le d\303\251compte automatique du stock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_url->setToolTip(QApplication::translate("DialogSettings", "Adresse du d\303\251p\303\264t", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lineEdit_url->setText(QApplication::translate("DialogSettings", "http://cfdev.fr/download/mcercle/", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_Application), QApplication::translate("DialogSettings", "Application", 0, QApplication::UnicodeUTF8));
        label_logo->setText(QApplication::translate("DialogSettings", "Logo", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("DialogSettings", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:600; text-decoration: underline;\">Logo</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:7pt;\">Taille recommand\303\251e :1000 X 1000px</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_Logo->setText(QApplication::translate("DialogSettings", "Parcourir", 0, QApplication::UnicodeUTF8));
        pushButton_ClearImage->setText(QApplication::translate("DialogSettings", "Effacer", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("DialogSettings", "Assujetti \303\240 la TVA: ", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogSettings", "Nom: ", 0, QApplication::UnicodeUTF8));
        checkBox_TAX->setText(QString());
        label_6->setText(QApplication::translate("DialogSettings", "Siret: ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DialogSettings", "Site internet: ", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("DialogSettings", "Capital: ", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogSettings", "Tel: ", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DialogSettings", "Fax: ", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DialogSettings", "Email: ", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogSettings", "Ville: ", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("DialogSettings", "Calcul du CA: ", 0, QApplication::UnicodeUTF8));
        comboBox_CA->clear();
        comboBox_CA->insertItems(0, QStringList()
         << QApplication::translate("DialogSettings", "Date de facturation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "Date du r\303\250glement", 0, QApplication::UnicodeUTF8)
        );
        label_11->setText(QApplication::translate("DialogSettings", "Code Postal: ", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("DialogSettings", "Num\303\251ro TVA:", 0, QApplication::UnicodeUTF8));
        label_currency->setText(QApplication::translate("DialogSettings", "Devise :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DialogSettings", "Adresse :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_compagny), QApplication::translate("DialogSettings", "Informations", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("DialogSettings", "Nom du Titulaire :", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DialogSettings", "IBAN :", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DialogSettings", "BIC :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_bank), QApplication::translate("DialogSettings", "Informations bancaire", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_tax), QApplication::translate("DialogSettings", "Tva", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogSettings", "Adresse : ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogSettings", "Port : ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogSettings", "Nom de la base : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogSettings", "Identifiant : ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogSettings", "Mot de pass : ", 0, QApplication::UnicodeUTF8));
        toolButton_BaseSelect->setText(QApplication::translate("DialogSettings", "...", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("DialogSettings", "<html><head/><body><p>Base de donnees :</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_db_info->setText(QApplication::translate("DialogSettings", "Informations :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("DialogSettings", "Etat:", 0, QApplication::UnicodeUTF8));
        label_state->setText(QApplication::translate("DialogSettings", "...", 0, QApplication::UnicodeUTF8));
        pushButton_connect->setText(QApplication::translate("DialogSettings", "Se connecter", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_Database), QApplication::translate("DialogSettings", "Base de donn\303\251es", 0, QApplication::UnicodeUTF8));
        label_printFont->setText(QApplication::translate("DialogSettings", "Police d'impression (Deja Vu Sans):", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("DialogSettings", "Cadres :", 0, QApplication::UnicodeUTF8));
        checkBox_drawLine->setText(QApplication::translate("DialogSettings", "Dessiner les cadres", 0, QApplication::UnicodeUTF8));
        checkBox_border_radius->setText(QApplication::translate("DialogSettings", "Bords arrondis", 0, QApplication::UnicodeUTF8));
        comboBox_fontSize->clear();
        comboBox_fontSize->insertItems(0, QStringList()
         << QApplication::translate("DialogSettings", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSettings", "12", 0, QApplication::UnicodeUTF8)
        );
        label_fontSize->setText(QApplication::translate("DialogSettings", "Taille de la police :", 0, QApplication::UnicodeUTF8));
        label_LineFree->setText(QApplication::translate("DialogSettings", "<html><head/><body><p>Lignes Libres du pied de page:</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_printing), QApplication::translate("DialogSettings", "Impression/Factures", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSettings: public Ui_DialogSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSETTINGS_H
