#include "shapes.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    Shapes window;

    window.resize(350, 280);
    window.setWindowTitle("Shapes");
    window.show();

    return app.exec();

}
