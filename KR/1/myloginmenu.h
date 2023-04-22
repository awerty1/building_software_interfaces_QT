#pragma once

#include <QLabel>
#include <QLineEdit>

class MyLoginMenu : public QWidget {

public:
    MyLoginMenu(QWidget *parent = 0);

private:
  QLabel *labelLogin;
  QLineEdit *lineEditUsername;
  QLabel *labelForgot;

};
