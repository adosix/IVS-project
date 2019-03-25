#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::MainWindow)
{
   ui->setupUi(this);

   connect(ui->pushButton_0, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_1, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_2, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_3, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_4, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_5, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_6, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_7, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_8, SIGNAL(released()), this, SLOT(digit_pressed()));
   connect(ui->pushButton_9, SIGNAL(released()), this, SLOT(digit_pressed()));
}

MainWindow::~MainWindow()
{
   delete ui;
}

void MainWindow::digit_pressed(){
   QPushButton * button = (QPushButton*)sender(); //returns pointer to qObject

   double labelNumber;
   QString nLabel;

   labelNumber = (ui->temp_text->text() + button->text()).toDouble(); //reads text from button[digit] and displays it

   nLabel = QString::number(labelNumber, 'g', 15);

   ui->temp_text->setText(nLabel);
}

void MainWindow::on_pushButton_comma_released()
{

}
