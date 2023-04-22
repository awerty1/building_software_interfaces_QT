#include "transparent_rectangles.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    TransparentRectangles window;

    window.resize(350, 200);
    window.setWindowTitle("TransparentRectangles");
    window.show();

    return app.exec();

}
