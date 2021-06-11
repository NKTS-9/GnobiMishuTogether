#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "math.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lineEditB->text().toDouble();
    double c = a + b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);


}

void MainWindow::on_pushButton_2_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lineEditB->text().toDouble();
    double c = a - b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_3_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lineEditB->text().toDouble();
    double c = a / b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_4_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lineEditB->text().toDouble();
    double c = a * b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_5_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double c = -a;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_6_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double c = tan(a);
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_7_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lineEditB->text().toDouble();
    double c = pow(a, 1/b);
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_8_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double c = 10*log10(a);
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_01_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+1;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}


void MainWindow::on_pushButton_02_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+2;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_03_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+3;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_04_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+4;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_05_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+5;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_06_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+6;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_07_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+7;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_08_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+8;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_09_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10+9;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}

void MainWindow::on_pushButton_00_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    a = a*10;
    QString A;
    A.setNum(a);
    ui->lineEditA->setText(A);
}


void MainWindow::on_pushButton_11_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+1;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_12_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+2;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_13_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+3;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_14_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+4;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);;
}

void MainWindow::on_pushButton_15_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+5;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_16_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+6;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_17_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+7;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_18_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+8;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_19_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10+9;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_pushButton_10_clicked()
{
    double a;
    a = ui->lineEditB->text().toDouble();
    a = a*10;
    QString A;
    A.setNum(a);
    ui->lineEditB->setText(A);
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->lcdNumber->display(value);
}

void MainWindow::on_pushButton_plus_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lcdNumber->value();
    double c = a + b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_delit_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lcdNumber->value();
    double c = a / b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_minus_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lcdNumber->value();
    double c = a - b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}

void MainWindow::on_pushButton_umnoj_clicked()
{
    double a;
    a = ui->lineEditA->text().toDouble();
    double b;
    b = ui->lcdNumber->value();
    double c = a * b;
    QString ccc;
    ccc.setNum(c);
    ui->lineEditC->setText(ccc);
}
