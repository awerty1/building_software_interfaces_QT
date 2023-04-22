#include "checkbox.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CheckBox window;

    window.resize(250, 150);
    window.setWindowTitle("QCheckBox");
    window.show();
    
    return app.exec();
}
