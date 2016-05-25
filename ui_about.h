/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_ico;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_apropos;
    QHBoxLayout *horizontalLayout_don;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_don;
    QPushButton *pushButton_donFree;
    QPushButton *pushButton_donmonthly;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_paypaloptions;
    QLabel *label_don;
    QWidget *tab_3;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEditLicence;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushBut_Close;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(497, 475);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app/help"), QSize(), QIcon::Normal, QIcon::Off);
        about->setWindowIcon(icon);
        gridLayout = new QGridLayout(about);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_ico = new QLabel(about);
        label_ico->setObjectName(QString::fromUtf8("label_ico"));

        horizontalLayout_2->addWidget(label_ico);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(about);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout_4 = new QHBoxLayout(tab);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_apropos = new QLabel(tab);
        label_apropos->setObjectName(QString::fromUtf8("label_apropos"));

        verticalLayout_2->addWidget(label_apropos);

        horizontalLayout_don = new QHBoxLayout();
        horizontalLayout_don->setObjectName(QString::fromUtf8("horizontalLayout_don"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_don = new QPushButton(tab);
        pushButton_don->setObjectName(QString::fromUtf8("pushButton_don"));
        pushButton_don->setIconSize(QSize(124, 26));
        pushButton_don->setDefault(false);
        pushButton_don->setFlat(false);

        verticalLayout_4->addWidget(pushButton_don);

        pushButton_donFree = new QPushButton(tab);
        pushButton_donFree->setObjectName(QString::fromUtf8("pushButton_donFree"));

        verticalLayout_4->addWidget(pushButton_donFree);

        pushButton_donmonthly = new QPushButton(tab);
        pushButton_donmonthly->setObjectName(QString::fromUtf8("pushButton_donmonthly"));

        verticalLayout_4->addWidget(pushButton_donmonthly);


        horizontalLayout_don->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_don->addItem(horizontalSpacer_2);

        label_paypaloptions = new QLabel(tab);
        label_paypaloptions->setObjectName(QString::fromUtf8("label_paypaloptions"));
        label_paypaloptions->setPixmap(QPixmap(QString::fromUtf8(":/app/don1")));
        label_paypaloptions->setScaledContents(true);

        horizontalLayout_don->addWidget(label_paypaloptions);

        label_don = new QLabel(tab);
        label_don->setObjectName(QString::fromUtf8("label_don"));
        label_don->setPixmap(QPixmap(QString::fromUtf8(":/app/heart")));

        horizontalLayout_don->addWidget(label_don);


        verticalLayout_2->addLayout(horizontalLayout_don);


        horizontalLayout_4->addLayout(verticalLayout_2);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        horizontalLayout_5 = new QHBoxLayout(tab_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textEditLicence = new QTextEdit(tab_3);
        textEditLicence->setObjectName(QString::fromUtf8("textEditLicence"));
        textEditLicence->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        textEditLicence->setReadOnly(true);

        verticalLayout_3->addWidget(textEditLicence);


        horizontalLayout_5->addLayout(verticalLayout_3);

        tabWidget->addTab(tab_3, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushBut_Close = new QPushButton(about);
        pushBut_Close->setObjectName(QString::fromUtf8("pushBut_Close"));

        horizontalLayout_3->addWidget(pushBut_Close);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(about);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QApplication::translate("about", "A propos", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">mcercle</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_ico->setText(QApplication::translate("about", "...", 0, QApplication::UnicodeUTF8));
        label_apropos->setText(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">...</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_don->setText(QApplication::translate("about", "Montant : 4,99 eur", 0, QApplication::UnicodeUTF8));
        pushButton_donFree->setText(QApplication::translate("about", "Montant : libre", 0, QApplication::UnicodeUTF8));
        pushButton_donmonthly->setText(QApplication::translate("about", "Soutien mensuel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_paypaloptions->setToolTip(QApplication::translate("about", "S\303\251curis\303\251 avec PAYPAL", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_paypaloptions->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_don->setToolTip(QApplication::translate("about", "Merci beaucoup !", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_don->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("about", "A propos", 0, QApplication::UnicodeUTF8));
        textEditLicence->setHtml(QApplication::translate("about", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:600;\">En utilisant ce logiciel vous acceptez la licence.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:600;\">L'auteur ne pourra pas \303\252tre tenue pour responsable d'\303\251ventuelles pertes de donn\303\251es ou d'erreurs de calcul.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-r"
                        "ight:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/logo\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt; text-decoration: underline;\">Guide rapide de la GPLv3:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://www.gnu.org/licenses/quick-guide-gplv3.html\"><span style=\" font-family:'Ubuntu'; font-size:9pt; text-decoration: underline; color:#0057ae;\">http://www.gnu.org/licenses/quick-guide-gplv3.html</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font"
                        "-family:'Ubuntu'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt; text-decoration: underline;\">GNU General Public License:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">This program is free software: you can redistribute it and/or modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">it under the terms of the GNU General Public License as published by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">the Free Software Foundation, either"
                        " version 3 of the License, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">(at your option) any later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">This program is distributed in the hope that it will be useful,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">but WITHOUT ANY WARRANTY; without even the implied warranty of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">GNU General Public License for more details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:9pt;\">You should have received a copy of the GNU General Public License</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Ubuntu'; font-size:9pt;\">along with this program. If not, see &lt;</span><a href=\"http://www.gnu.org/licenses/\"><span style=\" font-family:'Ubuntu'; font-size:9pt; text-decoration: underline; color:#0057ae;\">http://www.gnu.org/licenses/</span></a><span style=\" font-family:'Ubuntu'; font-size:9pt;\">&gt;.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:600; text-decoration: underline;\">Composants:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Ubuntu'; font-size:9pt; font-weight:600; text-decoration: underline;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; font-weight:600;\">QCustomPlot</span><span style=\" font-size:9pt;\"> is a Qt C++ widget for plotting and data visualization. It has no further dependencies and is </span><a href=\"http://www.qcustomplot.com/index.php/support/documentation\"><span style=\" font-size:9pt; text-decoration: underline; color:#0000ff;\">fully documented</span></a><span style=\" font-size:9pt;\">. This plotting library focuses on making good looking, publication quality 2D plots, graphs and charts, as well as offering high performance for realtime visualization applications. Have a look at the </span><a href=\"http://www.qcustomplot.com/index.php/tutorials/settingup\"><span style=\" font-size:9pt; text-decoration: underline; color:#0000ff;\">Setting Up</span></a><span style=\" font-size:9pt;\"> and the </span><a href=\"http://www.qcustomplot.com/index.php/tutorials/basicplotting\"><sp"
                        "an style=\" font-size:9pt; text-decoration: underline; color:#0000ff;\">Basic Plotting</span></a><span style=\" font-size:9pt;\"> tutorials to get started.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Licence : GPLV3</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">Site Internet: </span><a href=\"http://www.qcustomplot.com/\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">http://www.qcustomplot.com/</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt"
                        ";\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("about", "Licence", 0, QApplication::UnicodeUTF8));
        pushBut_Close->setText(QApplication::translate("about", "Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
