#include "linear_gradients.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    LinearGradients window;

    window.resize(350, 260);
    window.setWindowTitle("LinearGradients");
    window.show();

    return app.exec();

}
