#include "radial_gradient.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    RadialGradient window;

    window.resize(350, 200);
    window.setWindowTitle("RadialGradient");
    window.show();

    return app.exec();

}
