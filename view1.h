#ifndef VIEW1_H
#define VIEW1_H

#include <QDialog>
#include "stud.h"

namespace Ui {
class View1;
}

class View1 : public QDialog
{
    Q_OBJECT

public:
    explicit View1(QVector<Student>& stud, QWidget *parent = nullptr);
    ~View1();

private:
    Ui::View1 *ui;
    QVector<Student>& stud;

};

#endif // VIEW1_H
