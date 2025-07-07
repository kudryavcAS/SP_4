/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2_1;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *file1_line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *file2_line;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *view_1;
    QPushButton *view_2;
    QPushButton *intersection_but;
    QPushButton *union_but;
    QPushButton *dif1_2;
    QPushButton *dif2_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *number_line;
    QLineEdit *name_line;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *group_line;
    QLineEdit *average_line;
    QPushButton *add_1_button;
    QPushButton *deletr_1_button;
    QPushButton *add_2_button;
    QPushButton *delete_1_button;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(802, 519);
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        action_2_1 = new QAction(MainWindow);
        action_2_1->setObjectName("action_2_1");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2, 0, Qt::AlignmentFlag::AlignTop);

        file1_line = new QLineEdit(centralwidget);
        file1_line->setObjectName("file1_line");
        file1_line->setFont(font);

        horizontalLayout_2->addWidget(file1_line, 0, Qt::AlignmentFlag::AlignTop);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3, 0, Qt::AlignmentFlag::AlignTop);

        file2_line = new QLineEdit(centralwidget);
        file2_line->setObjectName("file2_line");
        file2_line->setFont(font);

        horizontalLayout->addWidget(file2_line, 0, Qt::AlignmentFlag::AlignTop);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(275, 29));

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        view_1 = new QPushButton(centralwidget);
        view_1->setObjectName("view_1");

        verticalLayout->addWidget(view_1);

        view_2 = new QPushButton(centralwidget);
        view_2->setObjectName("view_2");

        verticalLayout->addWidget(view_2);

        intersection_but = new QPushButton(centralwidget);
        intersection_but->setObjectName("intersection_but");

        verticalLayout->addWidget(intersection_but);

        union_but = new QPushButton(centralwidget);
        union_but->setObjectName("union_but");

        verticalLayout->addWidget(union_but);

        dif1_2 = new QPushButton(centralwidget);
        dif1_2->setObjectName("dif1_2");

        verticalLayout->addWidget(dif1_2);

        dif2_1 = new QPushButton(centralwidget);
        dif2_1->setObjectName("dif2_1");

        verticalLayout->addWidget(dif2_1);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setMaximumSize(QSize(492, 27));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        label_4->setFont(font1);

        verticalLayout_2->addWidget(label_4, 0, Qt::AlignmentFlag::AlignHCenter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        number_line = new QLineEdit(centralwidget);
        number_line->setObjectName("number_line");

        horizontalLayout_4->addWidget(number_line);

        name_line = new QLineEdit(centralwidget);
        name_line->setObjectName("name_line");

        horizontalLayout_4->addWidget(name_line);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        group_line = new QLineEdit(centralwidget);
        group_line->setObjectName("group_line");

        horizontalLayout_3->addWidget(group_line);

        average_line = new QLineEdit(centralwidget);
        average_line->setObjectName("average_line");

        horizontalLayout_3->addWidget(average_line);


        verticalLayout_2->addLayout(horizontalLayout_3);

        add_1_button = new QPushButton(centralwidget);
        add_1_button->setObjectName("add_1_button");

        verticalLayout_2->addWidget(add_1_button);

        deletr_1_button = new QPushButton(centralwidget);
        deletr_1_button->setObjectName("deletr_1_button");

        verticalLayout_2->addWidget(deletr_1_button);

        add_2_button = new QPushButton(centralwidget);
        add_2_button->setObjectName("add_2_button");

        verticalLayout_2->addWidget(add_2_button);

        delete_1_button = new QPushButton(centralwidget);
        delete_1_button->setObjectName("delete_1_button");

        verticalLayout_2->addWidget(delete_1_button);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
        action_2_1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\275\320\276\321\201\321\202\321\214 2-1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        file1_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "file1.bin", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\262\321\202\320\276\321\200\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        file2_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "file2.bin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \321\201 \321\204\320\260\320\271\320\273\320\260\320\274\320\270:", nullptr));
        view_1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 1 ", nullptr));
        view_2->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 2", nullptr));
        intersection_but->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\277\320\265\321\200\320\265\321\201\320\265\321\207\320\265\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\276\320\262", nullptr));
        union_but->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\276\320\261\321\212\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265 \321\201\320\277\320\270\321\201\320\272\320\276\320\262", nullptr));
        dif1_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\321\214 1-2", nullptr));
        dif2_1->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\321\214 2-1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265/\321\203\320\264\320\260\320\273\320\265\320\275\320\270\320\265:", nullptr));
        number_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\321\207\321\221\321\202\320\272\320\270", nullptr));
        name_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        group_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        average_line->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271 \320\261\320\260\320\273\320\273", nullptr));
        add_1_button->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273 1", nullptr));
        deletr_1_button->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 1", nullptr));
        add_2_button->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273 2", nullptr));
        delete_1_button->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
