#include "ctrl.h"
#include "ui_ctrl.h"

ctrl::ctrl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ctrl)
{
    ui->setupUi(this);
}

ctrl::~ctrl()
{
    delete ui;
}

void ctrl::on_backBt_clicked()
{
    this -> close();    //关闭当前窗体
}
