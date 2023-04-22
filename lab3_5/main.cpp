#include "form.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    FormEx window;

    window.resize(250, 150);
    window.setWindowTitle("Form example");
    window.show();

    return app.exec();

}
