#include "diff.h"
#include "ui_diff.h"

Diff::Diff(QVector<Student>& _stud1, QVector<Student>& _stud2, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Diff),  stud1(_stud1), stud2 (_stud2)
{
    ui->setupUi(this);

    QVector<Student> result;

    for(int i=0;i<stud1.size();i++){
        if(!stud2.contains(stud1[i]))
            result.append(stud1[i]);
    }
    int max = result.size();
    ui->tableWidget->setRowCount(max);
    for (int row = 0; row < max; row++)
    {
        QTableWidgetItem* Item = new QTableWidgetItem();
        Item->setText(QString::number(result[row].num));
        ui->tableWidget->setItem(row,0,Item);

        QTableWidgetItem* ItemN = new QTableWidgetItem();
        ItemN->setText(result[row].name);
        ui->tableWidget->setItem(row,1,ItemN);

        QTableWidgetItem* ItemG = new QTableWidgetItem();
        ItemG->setText(QString::number(result[row].group));
        ui->tableWidget->setItem(row,2,ItemG);

        QTableWidgetItem* ItemA = new QTableWidgetItem();
        ItemA->setText(QString::number(result[row].grade));
        ui->tableWidget->setItem(row,3,ItemA);
    }
    ui->tableWidget->resizeRowsToContents();
    ui->tableWidget->resizeColumnsToContents();
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2, QHeaderView::Stretch);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3, QHeaderView::Stretch);





}

Diff::~Diff()
{
    delete ui;
}
