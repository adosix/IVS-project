GOOGLETEST_DIR = googletest-master
include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt
DESTDIR = ../
TARGET = runTests
INCLUDEPATH += ../RebusCalc/rebuscalc-0.0.1/src/ \
                 ../

VPATH = ../RebusCalc/rebuscalc-0.0.1/src/ \
        ../

SOURCES +=  tests.cpp\
    math_lib.cpp \
    math_lib_tests.cpp

QMAKE_CLEAN += *.o
QMAKE_POST_LINK = make clean

