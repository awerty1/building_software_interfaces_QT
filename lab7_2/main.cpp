#include "colours.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Colours window;

    window.resize(360, 280);
    window.setWindowTitle("Colours");
    window.show();

    return app.exec();

}
