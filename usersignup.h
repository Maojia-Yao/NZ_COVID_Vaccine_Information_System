#ifndef USERSIGNUP_H
#define USERSIGNUP_H

#include <QDialog>

namespace Ui {
class UserSignup;
}

class UserSignup : public QDialog
{
    Q_OBJECT

public:
    explicit UserSignup(QWidget *parent = nullptr);
    ~UserSignup();

private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::UserSignup *ui;
};

#endif // USERSIGNUP_H
