#include "mainwindow.h"
#include <QDebug>
#include <QElapsedTimer>
#include <QApplication>

int main(int argc, char *argv[])
{   QElapsedTimer timer;
    timer.start();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << timer.elapsed();
    return a.exec();
}
