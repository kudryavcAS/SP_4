#ifndef DIFF_H
#define DIFF_H

#include <QDialog>
#include "stud.h"

namespace Ui {
class Diff;
}

class Diff : public QDialog
{
    Q_OBJECT

public:
    explicit Diff(QVector<Student>&stud1, QVector<Student>& stud2, QWidget *parent = nullptr);
    ~Diff();

private:
    Ui::Diff *ui;
    QVector<Student> stud1;
    QVector<Student> stud2;
};

#endif // DIFF_H
