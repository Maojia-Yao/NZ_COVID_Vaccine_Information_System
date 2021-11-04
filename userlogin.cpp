#include "userlogin.h"
#include "ui_userlogin.h"

#include <QPixmap>
#include "usersignup.h"

UserLogin::UserLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    QPixmap img(":/resource/images/image1.png");
    ui->label_image1->setPixmap(img);
    QPixmap img1(":/resource/images/image3.png");
    ui->label_image3->setPixmap(img1.scaled(600,800,Qt::KeepAspectRatio));
}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::on_pushButton_SignUp_clicked()
{
    this->hide();
    UserSignup us;
    us.setModal(true);
    us.exec();
}

