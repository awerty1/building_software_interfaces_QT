//Icon
#include <QWidget>
#include <QIcon>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);
    // устанавливаем заголовок для окна
    window.setWindowTitle("Icon");
    // устанавливаем иконку
    window.setWindowIcon(QIcon(":/web.png"));
    // выводим на экран
    window.show();

    return app.exec();
}
