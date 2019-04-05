#include "mainwindow.h"
#include "math_lib.cpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int aca = isValidInput(w.on_pushButton_equals_released());
    printf("%s", w.on_pushButton_equals_released());
    return a.exec();
}
