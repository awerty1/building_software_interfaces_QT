//#include <QApplication>
//#include <QDesktopWidget>
//#include <QTextEdit>

//class Absolute : public QWidget
//{

//public:
//    Absolute(QWidget *parent = 0);

//};

//Absolute::Absolute(QWidget *parent):QWidget(parent)
//{

//    QTextEdit *ledit = new QTextEdit(this);
//    ledit->setGeometry(5, 5, 200, 150);

//}




#include <QApplication>
#include <QDesktopWidget>
#include <QTextEdit>

class Absolute : public QWidget
{

public:
    Absolute(QWidget *parent = 0);

};

Absolute::Absolute(QWidget *parent):QWidget(parent)
{

    QTextEdit *ledit = new QTextEdit(this);
    ledit->setGeometry(5, 5, 200, 150);
    //ledit->setGeometry(5, 5, 300, 250);

}

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Absolute window;

    //window.resize(350, 200);
    window.setWindowTitle("Absolute");
    window.show();

    return app.exec();

}
