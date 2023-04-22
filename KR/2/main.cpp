#include "myclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyClass w;

    w.resize(250,300);
    w.setWindowTitle("КР Вариант 2");
    w.show();
    
    return a.exec();
}

