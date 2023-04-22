#include <QApplication>
#include "keypress.h"

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    KeyPress window;

    window.resize(350, 200);
    window.setWindowTitle("Key Press");
    window.show();

    return app.exec();

}
