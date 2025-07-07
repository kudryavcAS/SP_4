#ifndef STUD_H
#define STUD_H
#include <QString>
#include <QVector>

struct Student {
    qint64 num;
    QString name;
    int group;
    double grade;
    Student();
    Student(qint64 _num, QString _name, int _group, double _grade);

    bool operator==(const Student &other) const;
};

QVector<Student> BinRead(const QString &filename);

#endif // STUD_H
