#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>
#include <QHBoxLayout>
#include <QPixmap>
#include <QLabel>
#include <QSplitter>
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QFont>
#include "mainwindow.h"

Layouts::Layouts(QWidget *parent):QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QPixmap originalPixmap("://HKPJAnuGKGg.jpg");

    int newWidth = 700; // Новая ширина изображения
    int newHeight = 500; // Новая высота изображения

    QPixmap pixmap = originalPixmap.scaled(newWidth, newHeight, Qt::KeepAspectRatio); // Изменение размера


    QLabel *label = new QLabel(this);
    label->setPixmap(pixmap);

    hbox->addWidget(label, 0, Qt::AlignTop);

    //QPushButton *add = new QPushButton("Add", this);
    QPushButton *signin = new QPushButton("Sign in", this);
    //QPushButton *remove = new QPushButton("Remove", this);
    //QPushButton *removeall = new QPushButton("Remove All", this);
    //QLineEdit *nameEdit = new QLineEdit(this);
    label = new QLabel("Account Login", this);
    QLineEdit *edit1 = new QLineEdit("Name", this);
    QLineEdit *edit2 = new QLineEdit("Pass", this);

    vbox->setSpacing(3);
    vbox->addStretch(1);
    //vbox->addWidget(add);
    vbox->addWidget(label, 1, Qt::AlignCenter);
    vbox->addWidget(signin);
    vbox->addWidget(edit1);
    vbox->addWidget(edit2);
    // vbox->addWidget(remove);
    //vbox->addWidget(removeall);
    //vbox->addWidget(nameEdit);
    vbox->addStretch(1);

    //hbox->addWidget(lw);

    hbox->addSpacing(15);
    hbox->addLayout(vbox);

    setLayout(hbox);
}
