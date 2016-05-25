/********************************************************************************
** Form generated from reading UI file 'board.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARD_H
#define UI_BOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_board
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_stock;
    QLabel *label;
    QLabel *label_proposal;
    QTableWidget *tableWidget_stock;
    QTableWidget *tableWidget_InvoiceAlert;
    QLabel *label_invoice;
    QVBoxLayout *verticalLayout_revenu;
    QHBoxLayout *horizontalLayout_revenu;
    QLabel *label_2;
    QComboBox *comboBox_yearsList;
    QLabel *label_totalYear;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_plot;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_revenue;
    QTableWidget *tableWidget_ProposalAlert;

    void setupUi(QWidget *board)
    {
        if (board->objectName().isEmpty())
            board->setObjectName(QString::fromUtf8("board"));
        board->setWindowModality(Qt::WindowModal);
        board->resize(641, 568);
        horizontalLayout = new QHBoxLayout(board);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_stock = new QLabel(board);
        label_stock->setObjectName(QString::fromUtf8("label_stock"));

        gridLayout->addWidget(label_stock, 3, 1, 1, 1);

        label = new QLabel(board);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_proposal = new QLabel(board);
        label_proposal->setObjectName(QString::fromUtf8("label_proposal"));

        gridLayout->addWidget(label_proposal, 1, 1, 1, 1);

        tableWidget_stock = new QTableWidget(board);
        tableWidget_stock->setObjectName(QString::fromUtf8("tableWidget_stock"));
        tableWidget_stock->setAlternatingRowColors(true);

        gridLayout->addWidget(tableWidget_stock, 4, 1, 1, 1);

        tableWidget_InvoiceAlert = new QTableWidget(board);
        tableWidget_InvoiceAlert->setObjectName(QString::fromUtf8("tableWidget_InvoiceAlert"));
        tableWidget_InvoiceAlert->setAlternatingRowColors(true);

        gridLayout->addWidget(tableWidget_InvoiceAlert, 2, 0, 1, 1);

        label_invoice = new QLabel(board);
        label_invoice->setObjectName(QString::fromUtf8("label_invoice"));

        gridLayout->addWidget(label_invoice, 1, 0, 1, 1);

        verticalLayout_revenu = new QVBoxLayout();
        verticalLayout_revenu->setObjectName(QString::fromUtf8("verticalLayout_revenu"));
        horizontalLayout_revenu = new QHBoxLayout();
        horizontalLayout_revenu->setObjectName(QString::fromUtf8("horizontalLayout_revenu"));
        label_2 = new QLabel(board);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_revenu->addWidget(label_2);

        comboBox_yearsList = new QComboBox(board);
        comboBox_yearsList->setObjectName(QString::fromUtf8("comboBox_yearsList"));

        horizontalLayout_revenu->addWidget(comboBox_yearsList);

        label_totalYear = new QLabel(board);
        label_totalYear->setObjectName(QString::fromUtf8("label_totalYear"));

        horizontalLayout_revenu->addWidget(label_totalYear);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_revenu->addItem(horizontalSpacer);


        verticalLayout_revenu->addLayout(horizontalLayout_revenu);

        tabWidget = new QTabWidget(board);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_plot = new QVBoxLayout();
        verticalLayout_plot->setObjectName(QString::fromUtf8("verticalLayout_plot"));

        verticalLayout_5->addLayout(verticalLayout_plot);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget_revenue = new QTableWidget(tab_2);
        tableWidget_revenue->setObjectName(QString::fromUtf8("tableWidget_revenue"));
        tableWidget_revenue->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(tableWidget_revenue);


        verticalLayout_3->addLayout(verticalLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_revenu->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout_revenu, 4, 0, 1, 1);

        tableWidget_ProposalAlert = new QTableWidget(board);
        tableWidget_ProposalAlert->setObjectName(QString::fromUtf8("tableWidget_ProposalAlert"));
        tableWidget_ProposalAlert->setAlternatingRowColors(true);

        gridLayout->addWidget(tableWidget_ProposalAlert, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(board);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(board);
    } // setupUi

    void retranslateUi(QWidget *board)
    {
        board->setWindowTitle(QApplication::translate("board", "Form", 0, QApplication::UnicodeUTF8));
        label_stock->setText(QApplication::translate("board", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/products\" width=\"16\" height=\"16\"/><span style=\" color:#0000ff;\">Alerte stock</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("board", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/revenue\" width=\"16\" height=\"16\" /><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; color:#0000ff;\">Chiffre d'affaires :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_proposal->setText(QApplication::translate("board", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/process\" width=\"16\" height=\"16\" /><span style=\" font-family:'Ubuntu'; font-size:9pt;\"> </span><span style=\" font-size:10pt; color:#0000ff;\">Devis/Proposition en \303\251criture :</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_invoice->setText(QApplication::translate("board", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/app/warning\" width=\"16\" height=\"16\" /><span style=\" font-family:'MS Shell Dlg 2'; font-size:8pt;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; color:#0000ff;\">Factures non r\303\251gl\303\251es:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("board", "Ann\303\251e :", 0, QApplication::UnicodeUTF8));
        label_totalYear->setText(QApplication::translate("board", "Total :", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("board", "Graphique", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("board", "D\303\251tails", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class board: public Ui_board {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARD_H
