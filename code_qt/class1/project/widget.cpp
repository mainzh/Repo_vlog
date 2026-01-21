#include "widget.h"
#include "ui_widget.h"
#include "ctrl.h"
#include <QString>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->registerBt,SIGNAL(clicked()),this,SLOT(u_registerBt_clicked()));    //手动关联信号和槽
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_logoBt_clicked()
{
    //qDebug("logoBt_clicked");    //打印

    /* 获取账号和密码 */
    QString userName = ui -> userEdit -> text();
    QString passwd = ui -> passwdEdit -> text();

    /* 判断账号和密码 */
    if(userName == "123" && passwd == "123")
    {
        /* 切换界面 */
        ctrl *ct = new ctrl;    //新建对象
        ct -> setGeometry(this -> geometry());    //获取当前窗体的几何参数
        ct -> show();    //显示新的窗体
    }
}

void Widget::u_registerBt_clicked()
{
    qDebug("registerBt_clicked");    //打印
}
