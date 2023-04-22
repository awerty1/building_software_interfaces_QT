#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

class PlusMinus : public QWidget {

    //этот макрос должен включаться в классы, которые объявляют свои собственные сигналы с лоты
    Q_OBJECT

    public:
        PlusMinus(QWidget *parent = 0);

    private slots:
        void OnPlus();
        void OnMinus();

    private:
        QLabel *lbl;

};
