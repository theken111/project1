#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFontDialog>
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


void MainWindow::on_pushButton_clicked()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok, QFont("Times", 12), this);
    if (ok) {
              ui->label->setFont(font);
              ui->textEdit->setFont(font);

    } else {
             ui ->label->setText("o noooo ");
    }
}
