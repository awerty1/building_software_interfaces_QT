#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QIcon>
#include <QPaintDevice>
#include <QApplication>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QHBoxLayout>
#include "myloginmenu.h"


MyLoginMenu::MyLoginMenu(QWidget *parent) : QWidget(parent) {
    QLabel *labelLogin = new QLabel("login", this);
    QLineEdit *lineEditUsername = new QLineEdit(this);
    QLineEdit *lineEditPassword = new QLineEdit(this);
    QCheckBox *checkBoxRememberMe = new QCheckBox("Check me", this);
    QLabel *labelForgot = new QLabel("forget", this);
    QPushButton *pushButtonLogin = new QPushButton("Нажмите", this);

    QHBoxLayout* layoutLogin = new QHBoxLayout;
    layoutLogin->addStretch(1);
    layoutLogin->addWidget(labelLogin);
    layoutLogin->addStretch(1);

    QHBoxLayout* layoutRememberForgot = new QHBoxLayout;
    layoutRememberForgot->addWidget(checkBoxRememberMe);
    layoutRememberForgot->addStretch(1);
    layoutRememberForgot->addWidget(labelForgot);


    QVBoxLayout* layoutMain = new QVBoxLayout;
    layoutMain->addLayout(layoutLogin);
    layoutMain->addWidget(lineEditUsername);
    layoutMain->addWidget(lineEditPassword);
    layoutMain->addLayout(layoutRememberForgot);
    layoutMain->addWidget(pushButtonLogin);

    setLayout(layoutMain);
}
