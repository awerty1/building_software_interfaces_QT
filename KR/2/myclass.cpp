#include "myclass.h"
//#include <QString>
//#include <QPushButton>
//#include <QVBoxLayout>
//#include <QLineEdit>
#include <QLineEdit>
#include <QLabel>
#include <QtWidgets>




//выход на ESC
void MyClass::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        qApp->quit();
    }
}

MyClass::MyClass(QWidget *parent) :QWidget(parent)
{
    // Устанавливаем тег жирного выделения Welcome
    top_text = "<b>Welcome<b>";


    label1 = new QLabel(top_text,this);
    label1->setFont(QFont("Purisa",15));
    vbox = new QVBoxLayout();

    //подгружаем картинку в pixmap1
    pixmap1 = QPixmap(":/icon2.png");
    //меняем размер картинки и сохраняем в pixmap2
    pixmap1 = pixmap1.scaled(QSize(50, 50));


    //создаем 2 инпута для login / pass
    Edit1 = new QLineEdit(this);
    Edit2 = new QLineEdit(this);

    //Добавление плейсхолдера для кнопок
    Edit1->setPlaceholderText("Email");
    Edit2->setPlaceholderText("Password");
    //Для скрытия пароля
    Edit2->setEchoMode(QLineEdit::Password);

    //Устанавливаем изображение в Qlabel
    img = new QLabel(this);
    img->setPixmap(pixmap1);

    //Cоздаем кнопку с названием LOGIN
    qBtn = new QPushButton("LOGIN",this);
    //Выход по клику на кнопку
    connect(qBtn, SIGNAL(clicked()), qApp, SLOT(quit()));

    // Установка цвета
    QLinearGradient gradient(0, 0, 0, qBtn->height());
    gradient.setColorAt(0, QColor(0, 0, 255)); // синий цвет в начале
    gradient.setColorAt(1, QColor(238, 130, 238)); // фиолетовый цвет в конце

    //Настройки фона кнопки
    QBrush brush(gradient);
    palette = qBtn->palette();
    palette.setBrush(QPalette::Button, brush);
    qBtn->setPalette(palette);
    qBtn->setAutoFillBackground(true);

    //qBtn->setGeometry(10000, 44440, 74445, 34440);



    // добавляем текст в низ с линком на vogu по клику на Sign Up
    bot_text = "Dont have an account? <a href=\"https://vogu35.ru\">Sign Up</a>";
    label2 = new QLabel(bot_text, this);
    label2->setOpenExternalLinks(true);
    label2->setFont(QFont("Purisa",7));

    vbox->setSpacing(20);
    vbox->addWidget(label1, 0 , Qt::AlignTop|Qt::AlignCenter);
    vbox->addWidget(img, 1, Qt::AlignTop|Qt::AlignCenter);
    vbox->addWidget(Edit1, 2, Qt::AlignTop|Qt::AlignCenter);
    vbox->addWidget(Edit2, 3, Qt::AlignTop|Qt::AlignCenter);
    vbox->addWidget(qBtn, 4, Qt::AlignTop|Qt::AlignCenter);
    vbox->addWidget(label2, 5 , Qt::AlignBottom|Qt::AlignCenter);
    vbox->setMargin(5);
    setLayout(vbox);

}
