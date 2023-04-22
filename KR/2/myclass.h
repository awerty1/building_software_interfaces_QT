#pragma once

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>


class MyClass : public QWidget
{

public:
    MyClass(QWidget *parent = 0);

private:
    QLabel *label1;
    QLabel *label2;
    QLabel *img;
    QPushButton *qBtn;
    QString top_text;
    QString bot_text;
    QPalette palette;
    QVBoxLayout *vbox;
    QLineEdit *Edit1;
    QLineEdit *Edit2;
    QPixmap pixmap1;
    QPixmap pixmap2;
protected:
     void keyPressEvent(QKeyEvent *e);
};
