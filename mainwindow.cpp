#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stud.cpp"
#include <QMessageBox>
#include "view1.h"
#include "diff.h"
#include "intersection.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_view_1_clicked()
{
    QString name = ui->file1_line->text();
    QFile file(name);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name);
    View1* view1 = new View1(stud1, this);
    view1->setAttribute(Qt::WA_DeleteOnClose);
    view1->show();


}

void MainWindow::on_view_2_clicked()
{
    QString name = ui->file2_line->text();
    QFile file(name);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name);
    View1* view1 = new View1(stud1, this);
    view1->setAttribute(Qt::WA_DeleteOnClose);
    view1->show();

}

void MainWindow::on_intersection_but_clicked()
{
    QString name1 = ui->file1_line->text();
    QString name2 = ui->file2_line->text();
    QFile file1(name1);
    if (!file1.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name1);
    QFile file2(name2);
    if (!file2.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud2 = BinRead(name2);

    Intersection* inter = new Intersection(stud1, stud2,1);
    inter->windowTitleChanged("Пересечение");
    inter->setAttribute(Qt::WA_DeleteOnClose);
    inter->show();


}

void MainWindow::on_union_but_clicked()
{
    QString name1 = ui->file1_line->text();
    QString name2 = ui->file2_line->text();
    QFile file1(name1);
    if (!file1.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name1);
    QFile file2(name2);
    if (!file2.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud2 = BinRead(name2);

    Intersection* inter = new Intersection(stud1, stud2,0);
    inter->setAttribute(Qt::WA_DeleteOnClose);
    inter->windowTitleChanged("Объединение");
    inter->show();
}

void MainWindow::on_dif1_2_clicked()
{
    QString name1 = ui->file1_line->text();
    QString name2 = ui->file2_line->text();
    QFile file1(name1);
    if (!file1.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name1);
    QFile file2(name2);
    if (!file2.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud2 = BinRead(name2);
    Diff* dif = new Diff(stud1, stud2);
    dif->setAttribute(Qt::WA_DeleteOnClose);
    dif->show();

}

void MainWindow::on_dif2_1_clicked()
{
    QString name1 = ui->file1_line->text();
    QString name2 = ui->file2_line->text();
    QFile file1(name1);
    if (!file1.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(name1);
    QFile file2(name2);
    if (!file2.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud2 = BinRead(name2);
    Diff* dif = new Diff(stud2, stud1);
    dif->setAttribute(Qt::WA_DeleteOnClose);
    dif->show();
}

void MainWindow::on_add_1_button_clicked()
{
    QString fname = ui->file1_line->text();
    QFile rfile(fname);
    if (!rfile.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(fname);
    QString name = ui->name_line->text();
    int number = ui->number_line->text().toInt();
    int group = ui->group_line->text().toInt();
    double average = ui->average_line->text().toDouble();

    Student stud(number, name, group, average);
    stud1.append(stud);

    QFile wfile(fname);
    if (!wfile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QDataStream out(&wfile);
    for(int i = 0; i<stud1.size();i++){
        out<<stud1[i].num << stud1[i].name << stud1[i].group << stud1[i].grade;

    }
    wfile.close();
}

void MainWindow::on_add_2_button_clicked()
{
    QString fname = ui->file2_line->text();
    QFile rfile(fname);
    if (!rfile.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(fname);
    QString name = ui->name_line->text();
    int number = ui->number_line->text().toInt();
    int group = ui->group_line->text().toInt();
    double average = ui->average_line->text().toDouble();

    Student stud(number, name, group, average);
    stud1.append(stud);

    QFile wfile(fname);
    if (!wfile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QDataStream out(&wfile);
    for(int i = 0; i<stud1.size();i++){
        out<<stud1[i].num << stud1[i].name << stud1[i].group << stud1[i].grade;

    }
    wfile.close();
}

void MainWindow::on_deletr_1_button_clicked()
{
    QString fname = ui->file1_line->text();
    QFile rfile(fname);
    if (!rfile.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(fname);
    QString name = ui->name_line->text();
    int number = ui->number_line->text().toInt();
    int group = ui->group_line->text().toInt();
    double average = ui->average_line->text().toDouble();

    Student stud(number, name, group, average);
    if(stud1.contains(stud)) stud1.removeAll(stud);
    else{QMessageBox::information(this, "Удаление", "Студент не найден");}

    QFile wfile(fname);
    if (!wfile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QDataStream out(&wfile);
    for(int i = 0; i<stud1.size();i++){
        out<<stud1[i].num << stud1[i].name << stud1[i].group << stud1[i].grade;

    }
    wfile.close();
}


void MainWindow::on_delete_1_button_clicked()
{
    QString fname = ui->file2_line->text();
    QFile rfile(fname);
    if (!rfile.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QVector<Student> stud1 = BinRead(fname);
    QString name = ui->name_line->text();
    int number = ui->number_line->text().toInt();
    int group = ui->group_line->text().toInt();
    double average = ui->average_line->text().toDouble();

    Student stud(number, name, group, average);
    if(stud1.contains(stud)) stud1.removeAll(stud);
    else{QMessageBox::information(this, "Удаление", "Студент не найден");}

    QFile wfile(fname);
    if (!wfile.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, "Файл", "Ошибка: файл не найден");
        return;
    }
    QDataStream out(&wfile);
    for(int i = 0; i<stud1.size();i++){
        out<<stud1[i].num << stud1[i].name << stud1[i].group << stud1[i].grade;

    }
    wfile.close();
}

