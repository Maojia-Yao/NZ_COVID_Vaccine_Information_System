#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap img(":/resource/images/image1.png");
    ui->label_image1->setPixmap(img);
    QPixmap img1(":/resource/images/image2.png");
    ui->label_image2->setPixmap(img1.scaled(400,400,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    this->hide();
    ul = new UserLogin(this);
    ul->show();
}


void MainWindow::on_pushButton_SignUp_clicked()
{
    this->hide();
    us = new UserSignup(this);
    us->show();
}


void MainWindow::on_actionAdmin_Login_triggered()
{
    this->hide();
    al = new AdminLogin(this);
    al->show();
}

