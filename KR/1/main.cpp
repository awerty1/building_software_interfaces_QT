#include "MyLoginMenu.h"
#include <QApplication>
#include <QIcon>



int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MyLoginMenu window;


    window.resize(300, 200);
    window.setWindowTitle("Login");
    window.setWindowIcon(QIcon(":/Twitch.ico"));
    window.show();



    return app.exec();
}


