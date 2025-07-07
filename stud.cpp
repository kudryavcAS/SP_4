#include "stud.h"

#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QVector>
#include <QDebug>
#include <algorithm>


Student::Student(qint64 _num, QString _name, int _group, double _grade):
    num(_num), name (_name), group(_group), grade (_grade){}

Student::Student(){}

bool Student::operator==(const Student &other) const {
        return num == other.num &&
               name == other.name &&
               group == other.group &&
               grade == other.grade;
}


QVector<Student> BinRead(const QString &filename) {
    QVector<Student> students;

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "File opening error: " << filename;
        return students;
    }

    QDataStream in(&file);

    while (!file.atEnd()) {
        Student s;
        in >> s.num >> s.name >> s.group >> s.grade;
        students.append(s);
    }

    file.close();
    return students;
}
