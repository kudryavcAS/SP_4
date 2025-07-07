#ifndef INTERSECTION_H
#define INTERSECTION_H

#include <QDialog>
#include "stud.h"

namespace Ui {
class Intersection;
}

class Intersection : public QDialog
{
    Q_OBJECT

public:
    explicit Intersection(QVector<Student>&stud1, QVector<Student>& stud2, bool x, QWidget *parent = nullptr);
    ~Intersection();

private:
    Ui::Intersection *ui;
    QVector<Student>& stud1;
    QVector<Student>& stud2;
    bool x;
};

#endif // INTERSECTION_H
