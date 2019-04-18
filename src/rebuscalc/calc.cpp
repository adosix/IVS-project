#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::setlocale(LC_ALL, "en_US.UTF-8");
    MainWindow w;
    w.show();
    return a.exec();
}
