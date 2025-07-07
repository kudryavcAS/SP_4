/********************************************************************************
** Form generated from reading UI file 'view1.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW1_H
#define UI_VIEW1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_View1
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *View1)
    {
        if (View1->objectName().isEmpty())
            View1->setObjectName("View1");
        View1->resize(627, 391);
        verticalLayout = new QVBoxLayout(View1);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(View1);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        pushButton = new QPushButton(View1);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        retranslateUi(View1);
        QObject::connect(pushButton, &QPushButton::clicked, View1, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(View1);
    } // setupUi

    void retranslateUi(QDialog *View1)
    {
        View1->setWindowTitle(QCoreApplication::translate("View1", "\320\244\320\260\320\271\320\273 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("View1", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\207\321\221\321\202\320\272\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("View1", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("View1", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("View1", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273", nullptr));
        pushButton->setText(QCoreApplication::translate("View1", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class View1: public Ui_View1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW1_H
