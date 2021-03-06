#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QLocale>
#include <QTableWidgetItem>

#include "dbase.h"
#include "qcustomplot/qcustomplot.h"

namespace Ui {
	class board;
}



class board : public QWidget {
	Q_OBJECT
public:
	board(database *pdata, QLocale &lang, QWidget *parent = 0);
	~board();

	void listStockAlertToTable();
	void listInvoiceAlertToTable();
	void listProposalAlertToTable();
	void listRevenuesToTable();
	void listYear();
	void calculYear(QString year);

private:
	Ui::board *ui;
	QCustomPlot *m_plot;
	QCPBars *m_caBar;
	void setupBarChart();

	database *m_data;
	QLocale m_lang;

private slots:

	void on_comboBox_yearsList_currentIndexChanged(QString);
	void on_tableWidget_InvoiceAlert_itemDoubleClicked(QTableWidgetItem *item);
	void on_tableWidget_ProposalAlert_itemDoubleClicked(QTableWidgetItem *item);
};

#endif // BOARD_H
