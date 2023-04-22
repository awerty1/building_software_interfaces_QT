#include "click.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Click window;

    window.resize(350, 200);
    window.setWindowTitle("Click");
    window.show();

    return app.exec();

}
