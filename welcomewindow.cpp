#include "welcomewindow.h"
#include <QPixmap>
#include "loginwindow.h"
#include "ui_welcomewindow.h"

Welcomewindow::Welcomewindow(QString username, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcomewindow)
{
    ui->setupUi(this);
    QPixmap pix(":/popcorm.png");
    int w = ui->img->width();
    int h = ui->img->height();
    ui->img->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));
    ui->name->setText(username);
}

Welcomewindow::~Welcomewindow()
{
    delete ui;
}

void Welcomewindow::on_pushButton_clicked()
{
    hide();
    LoginWindow *loginWindow = new LoginWindow(this);
    loginWindow->show();
}
