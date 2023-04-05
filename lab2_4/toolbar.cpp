#include "toolbar.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

Toolbar::Toolbar(QWidget *parent)
    :QMainWindow(parent)
{

    QPixmap newpix("://new.png");
    QPixmap openpix("://open.svg");
    QPixmap quitpix("://quit.png");

    // Устанавливаем указатель на созданную панель инструментов
    QToolBar *toolbar = addToolBar("main toolbar");

    // Добавляем действие "New File" на панель инструментов
    toolbar->addAction(QIcon(newpix), "New File");
    // добавляем действие "Open File" на панель инструментов
    toolbar->addAction(QIcon(openpix), "Open File");
    // добавляем разделитель на панель инструментов
    toolbar->addSeparator();
    // добавляем действие "Quit" на панель инструментов
    QAction *quit = toolbar->addAction(QIcon(quitpix), "Quit Application");

    //connect(quit, &QAction::triggered, qApp, &QApplication::quit);
    connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));

}
