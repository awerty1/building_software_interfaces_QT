#include "skeleton.h"
#include <QToolBar>
#include <QIcon>
#include <QACtion>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>

Skeleton::Skeleton(QWidget *parent)
    :QMainWindow(parent)
{

    QPixmap newpix("://new.png");
    QPixmap openpix("://open.svg");
    QPixmap quitpix("://quit.png");

    QAction *quit = new QAction("&Quit", this);

    QMenu *file;
    file = menuBar()->addMenu("&File");
    file->addAction(quit);

   //connect(quit, &QAction::triggered, qApp, &QApplication::quit);
    connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));

    QToolBar *toolbar = addToolBar("main toolbar");
    toolbar->addAction(QIcon(newpix), "New File");
    toolbar->addAction(QIcon(openpix), "Open File");
    toolbar->addSeparator();

    QAction *quit2 = toolbar->addAction(QIcon(quitpix), "Quit Application");
    connect(quit2, SIGNAL(triggered()), qApp, SLOT(quit()));
    //connect(quit2, &QAction::triggered, qApp, &QApplication::quit);


    // создаем виджет QTextEdit
    QTextEdit *edit = new QTextEdit(this);
    // помещаем созданный виджет в центр виджета QMainWindow
    setCentralWidget(edit);

    // показываем в нижней панели приложения сообщение "Ready"
    statusBar()->showMessage("Ready");

}
