#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_view_1_clicked();

    void on_view_2_clicked();

    void on_intersection_but_clicked();

    void on_union_but_clicked();

    void on_dif1_2_clicked();

    void on_dif2_1_clicked();

    void on_add_1_button_clicked();

    void on_add_2_button_clicked();

    void on_delete_1_button_clicked();

    void on_delete_2_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
