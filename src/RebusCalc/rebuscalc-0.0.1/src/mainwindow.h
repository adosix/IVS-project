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
     const char* on_pushButton_equals_released();

private:
    Ui::MainWindow *ui;

private slots:
    void digit_pressed();
    void on_pushButton_comma_released();
    void on_pushButton_br_left_released();
    void on_pushButton_br_right_released();
    void on_pushButton_C_released();
    void on_pushButton_fact_released();
    void on_pushButton_mod_released();
    void on_pushButton_div_released();
    void on_pushButton_mul_released();
    void on_pushButton_plus_released();
    void on_pushButton_minus_released();
    void on_pushButton_sin_released();
    void on_pushButton_cos_released();
    void on_pushButton_sqrt_released();
    void on_pushButton_del_released();
    void on_pushButton_pow_released();
};

#endif // MAINWINDOW_H
