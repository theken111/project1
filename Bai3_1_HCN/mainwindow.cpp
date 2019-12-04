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
       painter.setBrush(Qt::white);
       painter.drawRect(10.0, 20.0, 80.0, 60.0);

       painter.setBrush(Qt::green);
       painter.drawRect(140,20,80,60);
}
