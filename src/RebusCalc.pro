#-------------------------------------------------
#
# Project created by QtCreator 2019-03-25T17:18:25
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RebusCalc
TEMPLATE = app
VPATH = rebuscalc/
CONFIG += release


# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        calc.cpp \
        math_lib.cpp \
        mainwindow.cpp
  
HEADERS += \
        math_lib.h \
        mainwindow.h

FORMS += \
      mainwindow.ui 

QMAKE_CLEAN = moc* \
						*.o \
						$(TARGET) \
						runTests \
						profile \
						-r doc \
						*.pro.user \
						*gmon* \
						.qmake.stash \	

DESTDIR = .
OBJECTS_DIR = ./rebuscalc/build_files
MOC_DIR = ./rebuscalc/build_files
UI_DIR = ./rebuscalc/build_files

# install
target.path = $$PREFIX/bin
INSTALLS += target

QMAKE_EXTRA_INCLUDES += makefile.mk

#QMAKE_EXTRA_TARGETS += run doc profile pack test tests
#run.commands = test -f $(TARGET) || make $(TARGET) && ./$(TARGET)
#doc.commands = doxygen
#test.commands = test -f runTests || make tests && ./runTests 
#tests.commands = echo compile tests first
#profile.commands = echo profiling
