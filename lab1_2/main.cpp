// * 1.2 Всплывающая подсказка
#include <QWidget>
#include <QApplication>

int main(int argc, char * argv[])
{
    QApplication app(argc, argv);

    QWidget window;

    window.resize(250, 150);
    window.move(300, 300);
    // устанавливаем заголовок для окна
    window.setWindowTitle("ToolTip");
    // устанавливаем сплывающую подсказку для виджета
    window.setToolTip("QWidget");
    // выводим на экран
    window.show();

    return app.exec();
}
