#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_01_clicked();

    void on_pushButton_02_clicked();

    void on_pushButton_03_clicked();

    void on_pushButton_04_clicked();

    void on_pushButton_05_clicked();

    void on_pushButton_06_clicked();

    void on_pushButton_07_clicked();

    void on_pushButton_08_clicked();

    void on_pushButton_09_clicked();

    void on_pushButton_00_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_10_clicked();
    void on_dial_valueChanged(int value);

    void on_pushButton_plus_clicked();

    void on_pushButton_delit_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_umnoj_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
