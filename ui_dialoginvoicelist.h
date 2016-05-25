/********************************************************************************
** Form generated from reading UI file 'dialoginvoicelist.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINVOICELIST_H
#define UI_DIALOGINVOICELIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogInvoiceList
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_selAll;
    QToolButton *toolButton_unSel;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *pushButton_printAll;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget_Invoices;
    QLabel *label_Information;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_print;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *DialogInvoiceList)
    {
        if (DialogInvoiceList->objectName().isEmpty())
            DialogInvoiceList->setObjectName(QString::fromUtf8("DialogInvoiceList"));
        DialogInvoiceList->resize(693, 553);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app/logo"), QSize(), QIcon::Normal, QIcon::Off);
        DialogInvoiceList->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(DialogInvoiceList);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(DialogInvoiceList);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        line = new QFrame(DialogInvoiceList);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_selAll = new QToolButton(DialogInvoiceList);
        toolButton_selAll->setObjectName(QString::fromUtf8("toolButton_selAll"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/app/ok"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_selAll->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_selAll);

        toolButton_unSel = new QToolButton(DialogInvoiceList);
        toolButton_unSel->setObjectName(QString::fromUtf8("toolButton_unSel"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/app/quit"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_unSel->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_unSel);

        label_2 = new QLabel(DialogInvoiceList);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(DialogInvoiceList);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setMinimumSize(QSize(120, 0));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);

        pushButton_printAll = new QPushButton(DialogInvoiceList);
        pushButton_printAll->setObjectName(QString::fromUtf8("pushButton_printAll"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/app/print"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_printAll->setIcon(icon3);

        horizontalLayout->addWidget(pushButton_printAll);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget_Invoices = new QTableWidget(DialogInvoiceList);
        tableWidget_Invoices->setObjectName(QString::fromUtf8("tableWidget_Invoices"));

        verticalLayout->addWidget(tableWidget_Invoices);


        verticalLayout_2->addLayout(verticalLayout);

        label_Information = new QLabel(DialogInvoiceList);
        label_Information->setObjectName(QString::fromUtf8("label_Information"));

        verticalLayout_2->addWidget(label_Information);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_print = new QPushButton(DialogInvoiceList);
        pushButton_print->setObjectName(QString::fromUtf8("pushButton_print"));
        pushButton_print->setIcon(icon3);

        horizontalLayout_2->addWidget(pushButton_print);

        pushButton_ok = new QPushButton(DialogInvoiceList);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setDefault(true);

        horizontalLayout_2->addWidget(pushButton_ok);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(DialogInvoiceList);

        QMetaObject::connectSlotsByName(DialogInvoiceList);
    } // setupUi

    void retranslateUi(QDialog *DialogInvoiceList)
    {
        DialogInvoiceList->setWindowTitle(QApplication::translate("DialogInvoiceList", "Livre des recettes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogInvoiceList", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Livre des recettes</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_selAll->setToolTip(QApplication::translate("DialogInvoiceList", "Selectionner tout", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_selAll->setText(QApplication::translate("DialogInvoiceList", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_unSel->setToolTip(QApplication::translate("DialogInvoiceList", "Deselectionner tout", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_unSel->setText(QApplication::translate("DialogInvoiceList", "...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogInvoiceList", "<html><head/><body><p>Choix du mois pour la liste des factures :</p></body></html>", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("DialogInvoiceList", "MM/yyyy", 0, QApplication::UnicodeUTF8));
        pushButton_printAll->setText(QApplication::translate("DialogInvoiceList", "Imprimer la selection", 0, QApplication::UnicodeUTF8));
        label_Information->setText(QApplication::translate("DialogInvoiceList", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/help\" width=\"24\" height=\"24\" /> <span style=\" font-size:9pt;\">Seulement les factures qui ont le status &quot;Reglee&quot; sont listees ici !</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_print->setText(QApplication::translate("DialogInvoiceList", "Imprimer la liste", 0, QApplication::UnicodeUTF8));
        pushButton_ok->setText(QApplication::translate("DialogInvoiceList", "Fermer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogInvoiceList: public Ui_DialogInvoiceList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINVOICELIST_H
