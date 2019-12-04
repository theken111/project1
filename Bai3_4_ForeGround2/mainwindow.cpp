#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QColorDialog>
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
    QColorDialog *dialog = new QColorDialog(this);
    QColor color=  dialog->getColor();
    QVariant variant= color;
    QString colcode = variant.toString();


    ui->label->setStyleSheet("QLabel { background-color :"+colcode+" ; color : blue; }");

    QPainter painter(this);
    painter.setBackground(QColor(0, 0, 0));
    painter.setBrush(Qt::red);
    QRectF circle1(10.0, 20.0, 80.0, 80.0);
    painter.drawEllipse(circle1);


}

