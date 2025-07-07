#include "view1.h"
#include "ui_view1.h"

View1::View1(QVector<Student>& _stud,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::View1), stud(_stud)
{
    ui->setupUi(this);

    int max = stud.size();
    ui->tableWidget->setRowCount(max);
    for (int row = 0; row < max; row++)
    {
        QTableWidgetItem* Item = new QTableWidgetItem();
        Item->setText(QString::number(stud[row].num));
        ui->tableWidget->setItem(row,0,Item);

        QTableWidgetItem* ItemN = new QTableWidgetItem();
        ItemN->setText(stud[row].name);
        ui->tableWidget->setItem(row,1,ItemN);

        QTableWidgetItem* ItemG = new QTableWidgetItem();
        ItemG->setText(QString::number(stud[row].group));
        ui->tableWidget->setItem(row,2,ItemG);

        QTableWidgetItem* ItemA = new QTableWidgetItem();
        ItemA->setText(QString::number(stud[row].grade));
        ui->tableWidget->setItem(row,3,ItemA);
    }
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);







}

View1::~View1()
{
    delete ui;
}
