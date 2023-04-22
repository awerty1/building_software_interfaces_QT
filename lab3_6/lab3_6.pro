#-------------------------------------------------
#
# Project created by QtCreator 2023-04-01T20:29:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab3_6
TEMPLATE = app


SOURCES += main.cpp \
    calculator.cpp

HEADERS  += \
    calculator.h

FORMS    += mainwindow.ui

# add c++11
QMAKE_CXXFLAGS += -std=c++11
