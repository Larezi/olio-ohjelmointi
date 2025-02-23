/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N4;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N7;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *N0;
    QPushButton *mul;
    QPushButton *add;
    QPushButton *div;
    QPushButton *sub;
    QLineEdit *number1;
    QLineEdit *number2;
    QLineEdit *result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(130, 250, 75, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(220, 250, 75, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(310, 250, 75, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(220, 280, 75, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(310, 280, 75, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(130, 280, 75, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(220, 310, 75, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(310, 310, 75, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(130, 310, 75, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(220, 340, 75, 24));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(310, 340, 75, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(130, 340, 75, 24));
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(400, 310, 75, 24));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(400, 250, 75, 24));
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(400, 340, 75, 24));
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(400, 280, 75, 24));
        number1 = new QLineEdit(centralwidget);
        number1->setObjectName("number1");
        number1->setGeometry(QRect(140, 190, 113, 22));
        number2 = new QLineEdit(centralwidget);
        number2->setObjectName("number2");
        number2->setGeometry(QRect(270, 190, 113, 22));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(410, 190, 113, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
