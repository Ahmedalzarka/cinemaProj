#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class Welcomewindow;
}

class Welcomewindow : public QDialog
{
    Q_OBJECT
public:
    explicit Welcomewindow(QString username, QWidget *parent = nullptr);
    ~Welcomewindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
