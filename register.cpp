#include "register.h"
#include "Users.h"
#include "ui_register.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    ui->AE->hide();
    ui->ALT1->hide();
    ui->MBC->hide();
}

Register::~Register()
{
    delete ui;
}



void Register::on_pushButton_clicked()
{
    //check for username and pass
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();
    bool exist = isExist(username);
    if(exist)
        ui->AE->show();
    //check for age
    QString choice = ui->year->currentText();
    int year = choice.toInt();
    if(2024 - year <= 12)
        ui->ALT1->show();
    //check if all fields are not checked
    if(username == "" || password == "")
        ui->MBC->show();
    QList<QRadioButton *> allRadios = ui->groupBox_2->findChildren<QRadioButton *>();
    bool flag= false;
    for (QRadioButton *radio : allRadios)
    {
        if(radio->isChecked())
            flag = true;
    }
    if(flag == false)
        ui->MBC->show();
    flag = false;
    QList<QRadioButton *> allRadios2 = ui->groupBox_3->findChildren<QRadioButton *>();
    for (QRadioButton *radio : allRadios2)
    {
        if(radio->isChecked())
            flag = true;
    }
    if(flag == false)
        ui->MBC->show();
    flag = false;
    QList<QRadioButton *> allRadios3 = ui->groupBox_4->findChildren<QRadioButton *>();
    for (QRadioButton *radio : allRadios3)
    {
        if(radio->isChecked())
            flag = true;
    }
    if(flag == false)
        ui->MBC->show();
    flag = false;
    usernames[++count] = username;
    passwords[count] = password;
    ages[count] = 2024-year;
    hide();
}

