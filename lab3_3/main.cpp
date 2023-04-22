#include "buttons.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Buttons window;

    window.resize(350, 200);
    window.setWindowTitle("Buttons");
    window.show();

    return app.exec();

}
