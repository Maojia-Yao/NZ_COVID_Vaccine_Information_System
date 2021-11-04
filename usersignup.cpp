#include "usersignup.h"
#include "ui_usersignup.h"

#include <QPixmap>
#include "userlogin.h"

UserSignup::UserSignup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserSignup)
{
    ui->setupUi(this);
    QPixmap img(":/resource/images/image1.png");
    ui->label_image1->setPixmap(img);
}

UserSignup::~UserSignup()
{
    delete ui;
}

void UserSignup::on_pushButton_Login_clicked()
{
    this->hide();
    UserLogin ul;
    ul.setModal(true);
    ul.exec();
}

