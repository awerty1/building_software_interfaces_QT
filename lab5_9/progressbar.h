#pragma once

#include <QtWidgets>
#include <QProgressBar>
#include <QPushButton>

class ProgressBarEx : public QWidget
{
    Q_OBJECT

public:
    ProgressBarEx(QWidget *parent = 0);

private:
        int progress;
        QTimer *timer;
        QProgressBar *pBar;
        QPushButton *startBtn;
        QPushButton *stopBtn;
        static const int DELAY = 200;
        static const int MAX_VALUE = 100;

        void updateBar();
        void srartMyTimer();
        void stopMyTimer();
};
