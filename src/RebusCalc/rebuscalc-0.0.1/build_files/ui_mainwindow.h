/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *temp_text;
    QPushButton *pushButton_C;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_div;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_0;
    QPushButton *pushButton_comma;
    QPushButton *pushButton_equals;
    QLabel *result;
    QLabel *eq;
    QPushButton *pushButton_br_left;
    QPushButton *pushButton_br_right;
    QPushButton *pushButton_fact;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_pow;
    QPushButton *pushButton_del;
    QPushButton *pushButton_ans;
    QCheckBox *checkBox;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(361, 456);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        temp_text = new QLabel(centralWidget);
        temp_text->setObjectName(QStringLiteral("temp_text"));
        temp_text->setGeometry(QRect(0, 70, 361, 91));
        QFont font;
        font.setPointSize(19);
        temp_text->setFont(font);
        temp_text->setCursor(QCursor(Qt::ArrowCursor));
        temp_text->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}\n"
"\n"
"QLabel[light_theme=true] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color: white;\n"
"color:#07575b;\n"
"}\n"
"\n"
"QLabel[light_theme=false] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}"));
        temp_text->setScaledContents(false);
        pushButton_C = new QPushButton(centralWidget);
        pushButton_C->setObjectName(QStringLiteral("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 157, 61, 61));
        pushButton_C->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_C->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_cos = new QPushButton(centralWidget);
        pushButton_cos->setObjectName(QStringLiteral("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(241, 339, 61, 61));
        pushButton_cos->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cos->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_mod = new QPushButton(centralWidget);
        pushButton_mod->setObjectName(QStringLiteral("pushButton_mod"));
        pushButton_mod->setGeometry(QRect(119, 157, 61, 61));
        pushButton_mod->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_mod->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(180, 157, 61, 61));
        pushButton_div->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_div->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #E6EEEE;\n"
"	color: #83abad;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(-3, 218, 61, 61));
        QFont font1;
        font1.setPointSize(13);
        pushButton_7->setFont(font1);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(58, 218, 61, 61));
        pushButton_8->setFont(font1);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(119, 218, 61, 61));
        pushButton_9->setFont(font1);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_mul = new QPushButton(centralWidget);
        pushButton_mul->setObjectName(QStringLiteral("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(180, 218, 61, 61));
        pushButton_mul->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_mul->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #E6EEEE;\n"
"	color: #83abad;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(-3, 279, 61, 61));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(58, 279, 61, 61));
        pushButton_5->setFont(font1);
        pushButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(119, 278, 61, 61));
        pushButton_6->setFont(font1);
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 278, 61, 61));
        pushButton_minus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_minus->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #E6EEEE;\n"
"	color: #83abad;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(-3, 339, 61, 61));
        pushButton_1->setFont(font1);
        pushButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_1->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(58, 339, 61, 61));
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(119, 339, 61, 61));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QStringLiteral("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 339, 61, 61));
        pushButton_plus->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_plus->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #E6EEEE;\n"
"	color: #83abad;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(-3, 400, 122, 61));
        pushButton_0->setFont(font1);
        pushButton_0->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_0->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #83abad;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        pushButton_comma = new QPushButton(centralWidget);
        pushButton_comma->setObjectName(QStringLiteral("pushButton_comma"));
        pushButton_comma->setGeometry(QRect(241, 400, 61, 61));
        pushButton_comma->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_comma->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QStringLiteral("pushButton_equals"));
        pushButton_equals->setGeometry(QRect(119, 400, 122, 61));
        pushButton_equals->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_equals->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: #E6EEEE;\n"
"	color: #83abad;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"color: #07575b;\n"
"} "));
        result = new QLabel(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(60, 20, 301, 51));
        QFont font2;
        font2.setPointSize(14);
        result->setFont(font2);
        result->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}\n"
"\n"
"QLabel[light_theme=true] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: white;\n"
"color:#07575b;\n"
"}\n"
"\n"
"QLabel[light_theme=false] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}"));
        eq = new QLabel(centralWidget);
        eq->setObjectName(QStringLiteral("eq"));
        eq->setGeometry(QRect(0, 20, 61, 51));
        QFont font3;
        font3.setPointSize(18);
        eq->setFont(font3);
        eq->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"  background-color: #07575b;\n"
"  color: white;\n"
"}\n"
"\n"
"QLabel[light_theme=true] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"  background-color: white;\n"
"  color: #07575b;\n"
"}\n"
"\n"
"QLabel[light_theme=false] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"  background-color: #07575b;\n"
"  color: white;\n"
"}"));
        pushButton_br_left = new QPushButton(centralWidget);
        pushButton_br_left->setObjectName(QStringLiteral("pushButton_br_left"));
        pushButton_br_left->setGeometry(QRect(241, 157, 61, 61));
        pushButton_br_left->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_br_left->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_br_right = new QPushButton(centralWidget);
        pushButton_br_right->setObjectName(QStringLiteral("pushButton_br_right"));
        pushButton_br_right->setGeometry(QRect(241, 218, 61, 61));
        pushButton_br_right->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_br_right->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_fact = new QPushButton(centralWidget);
        pushButton_fact->setObjectName(QStringLiteral("pushButton_fact"));
        pushButton_fact->setGeometry(QRect(300, 279, 61, 61));
        pushButton_fact->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_fact->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_sin = new QPushButton(centralWidget);
        pushButton_sin->setObjectName(QStringLiteral("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(241, 279, 61, 61));
        pushButton_sin->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_sin->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QStringLiteral("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(300, 157, 61, 61));
        pushButton_sqrt->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_sqrt->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_pow = new QPushButton(centralWidget);
        pushButton_pow->setObjectName(QStringLiteral("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(300, 218, 61, 61));
        pushButton_pow->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_pow->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_del = new QPushButton(centralWidget);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setGeometry(QRect(61, 157, 61, 61));
        pushButton_del->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_del->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        pushButton_ans = new QPushButton(centralWidget);
        pushButton_ans->setObjectName(QStringLiteral("pushButton_ans"));
        pushButton_ans->setGeometry(QRect(300, 340, 61, 121));
        pushButton_ans->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_ans->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=true] {\n"
"   border: 0px solid gray;\n"
"	background-color: white;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton[light_theme=false] {\n"
"   border: 0px solid gray;\n"
"	background-color: #003B46;\n"
"	color: #07575b;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"} "));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 0, 341, 20));
        checkBox->setAutoFillBackground(false);
        checkBox->setStyleSheet(QStringLiteral("color:white;"));
        checkBox->setTristate(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 361, 20));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}\n"
"\n"
"QLabel[light_theme=true] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"background-color: white;\n"
"color:#07575b;\n"
"}\n"
"\n"
"QLabel[light_theme=false] {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: none;\n"
"background-color: #07575b;\n"
"color:white;\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        temp_text->raise();
        pushButton_C->raise();
        pushButton_cos->raise();
        pushButton_mod->raise();
        pushButton_div->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        pushButton_mul->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_minus->raise();
        pushButton_1->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_plus->raise();
        pushButton_0->raise();
        pushButton_comma->raise();
        pushButton_equals->raise();
        result->raise();
        eq->raise();
        pushButton_br_left->raise();
        pushButton_br_right->raise();
        pushButton_fact->raise();
        pushButton_sin->raise();
        pushButton_sqrt->raise();
        pushButton_pow->raise();
        pushButton_del->raise();
        pushButton_ans->raise();
        checkBox->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "RebusCalc", Q_NULLPTR));
        temp_text->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_C->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", Q_NULLPTR));
        pushButton_mod->setText(QApplication::translate("MainWindow", "%", Q_NULLPTR));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        pushButton_mul->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        pushButton_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton_comma->setText(QApplication::translate("MainWindow", ",", Q_NULLPTR));
        pushButton_equals->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        result->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        eq->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        pushButton_br_left->setText(QApplication::translate("MainWindow", "(", Q_NULLPTR));
        pushButton_br_right->setText(QApplication::translate("MainWindow", ")", Q_NULLPTR));
        pushButton_fact->setText(QApplication::translate("MainWindow", "!", Q_NULLPTR));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", Q_NULLPTR));
        pushButton_sqrt->setText(QApplication::translate("MainWindow", "\342\210\232", Q_NULLPTR));
        pushButton_pow->setText(QApplication::translate("MainWindow", "^", Q_NULLPTR));
        pushButton_del->setText(QApplication::translate("MainWindow", "DEL", Q_NULLPTR));
        pushButton_ans->setText(QApplication::translate("MainWindow", "A\n"
"N\n"
"S", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "NEW! Try switching between light/dark theme", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
