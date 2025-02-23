#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , state(1)
    , result(0)
    , operand(-1)
{
    ui->setupUi(this);
    connect(ui->N0, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);
    connect(ui->add, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->sub, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->mul, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->div, &QPushButton::clicked, this, &MainWindow::addSubMulDivClickHandler);
    connect(ui->clear, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
    connect(ui->enter, &QPushButton::clicked, this, &MainWindow::clearAndEnterClickHandler);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{

    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    QString clickedNumber = button->text();

    if (state == 1) {
        number1 += clickedNumber;
        ui->number1->setText(number1);
    } else if (state == 2) {
        number2 += clickedNumber;
        ui->number2->setText(number2);
    }

}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    if (button->text() == "clear") {
        resetLineEdits();
        state = 1;
        operand = -1;

    } else if (button->text() == "enter") {
        if (!number1.isEmpty() && !number2.isEmpty() && operand != -1) {
            float num1 = number1.toFloat();
            float num2 = number2.toFloat();

            switch (operand) {
            case 0: result = num1 + num2; break;
            case 1: result = num1 - num2; break;
            case 2: result = num1 * num2; break;
            case 3: result = (num2 != 0) ? num1 / num2 : 0; break;
            }

            ui->result->setText(QString::number(result));
        }
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    QString operatorSymbol = button->text();

    if (operatorSymbol == "+") operand = 0, state = 2;
    else if (operatorSymbol == "-") operand = 1, state = 2;
    else if (operatorSymbol == "*") operand = 2, state = 2;
    else if (operatorSymbol == "/") operand = 3, state = 2;
}

void MainWindow::resetLineEdits()
{
    number1.clear();
    number2.clear();
    result = 0;

    ui->number1->clear();
    ui->number2->clear();
    ui->result->clear();
}
