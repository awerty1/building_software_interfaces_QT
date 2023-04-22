//1.1 Простой пример
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    //Каждое Qt5-приложение (за исключением консольных) должно включать следующую строку
    QApplication app(argc, argv);

    //Главный виджет, который представляет окно нашей программы
    QWidget window;

    //изменяем размер виджета в пикселях
    window.resize(250, 150);
    // устанавливаем заголовок для главного онка
    window.setWindowTitle("Simple example");
    // выводим виджет на экран
    window.show();

    // С помощью метода exec() запускаем основной цикл нашей программы
    return app.exec();
}
