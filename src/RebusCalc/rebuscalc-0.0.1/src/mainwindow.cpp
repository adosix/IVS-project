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

void MainWindow::digit_pressed() {
   QPushButton * button = (QPushButton*)sender(); //returns pointer to qObject

   //double labelNumber;
   //QString nLabel;

   //labelNumber = (ui->temp_text->text() + button->text()); //reads text from button[digit] and displays it

   //nLabel = QString::number(labelNumber, 'g', 15);

   if(ui->temp_text->text() == "0"){
     ui->temp_text->setText(button->text());
   }
   else{
     ui->temp_text->setText(ui->temp_text->text() + button->text());
   }
}

void MainWindow::on_pushButton_comma_released() {
    ui->temp_text->setText(ui->temp_text->text() + ".");
}

void MainWindow::on_pushButton_br_left_released() {
    if(ui->temp_text->text() == "0"){
        ui->temp_text->setText("(");
    }
    else {
        ui->temp_text->setText(ui->temp_text->text() + "(");
    }
}

void MainWindow::on_pushButton_br_right_released() {
    if(ui->temp_text->text().contains("(")){
        ui->temp_text->setText(ui->temp_text->text() + ")");
    }
}

void MainWindow::on_pushButton_C_released(){
    ui->temp_text->setText("0");
}

void MainWindow::on_pushButton_fact_released() {
    if(ui->temp_text->text() == "0") {
        return;
    }
    ui->temp_text->setText(ui->temp_text->text() + "!");
}

void MainWindow::on_pushButton_mod_released() {
    if(ui->temp_text->text() == "0") {
        return;
    }
    ui->temp_text->setText(ui->temp_text->text() + "%");
}

void MainWindow::on_pushButton_div_released() {
    if(ui->temp_text->text() == "0") {
        return;
    }
    ui->temp_text->setText(ui->temp_text->text() + "/");
}

void MainWindow::on_pushButton_mul_released() {
    if(ui->temp_text->text() == "0") {
        return;
    }
    ui->temp_text->setText(ui->temp_text->text() + "*");
}

void MainWindow::on_pushButton_plus_released() {
    if(ui->temp_text->text() == "0") {
        return;
    }
    ui->temp_text->setText(ui->temp_text->text() + "+");
}

void MainWindow::on_pushButton_minus_released() {
    if(ui->temp_text->text() == "0") {
        ui->temp_text->setText("-");
    }
    else{
        ui->temp_text->setText(ui->temp_text->text() + "-");
    }
}

void MainWindow::on_pushButton_sin_released() {
    if(ui->temp_text->text() == "0") {
        ui->temp_text->setText("sin(");
    }
    else{
        ui->temp_text->setText(ui->temp_text->text() + "sin(");
    }
}

void MainWindow::on_pushButton_cos_released() {
    if(ui->temp_text->text() == "0") {
        ui->temp_text->setText("cos(");
    }
    else{
        ui->temp_text->setText(ui->temp_text->text() + "cos(");
    }
}
