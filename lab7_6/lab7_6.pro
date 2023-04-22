#-------------------------------------------------
#
# Project created by QtCreator 2023-04-04T23:05:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = lab7_6
TEMPLATE = app


SOURCES += main.cpp \
    shapes.cpp

HEADERS  += \
    shapes.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11
