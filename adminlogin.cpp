#include "adminlogin.h"
#include "ui_adminlogin.h"

#include <QPixmap>

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
    QPixmap img(":/resource/images/image1.png");
    ui->label_image1->setPixmap(img);
}

AdminLogin::~AdminLogin()
{
    delete ui;
}
