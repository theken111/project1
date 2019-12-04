#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){

    QPainter painter(this);

    QRectF circle1(10.0, 20.0, 80.0, 80.0);
    QRectF circle2(100.0,20,100.0,100.0);
    painter.drawEllipse(circle1);
    painter.drawEllipse(circle2);
    painter.setBackgroundMode(Qt::black );
}
