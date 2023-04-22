#include "calculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);
    Calculator window;

    window.move(300, 300);
    window.resize(200, 150);
    window.setWindowTitle("Calculator");
    window.show();

    return app.exec();

}
