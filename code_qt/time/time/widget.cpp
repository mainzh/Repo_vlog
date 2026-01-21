#include "widget.h"
#include "ui_widget.h"

static int i;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(&timer,SIGNAL(timeout()),this,SLOT(timeout_slot()));

    time.setHMS(0,0,0,0);
    ui->showTime->setText("00:00:00:000");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startBt_clicked()
{
    timer.start(30);
}

void Widget::timeout_slot()
{
    time = time.addMSecs(40);

    ui->showTime->setText(time.toString("hh:mm:ss.zzz"));
}

void Widget::on_endBt_clicked()
{
    timer.stop();
}

void Widget::on_resetBt_clicked()
{
    timer.stop();

    time.setHMS(0,0,0,0);
    ui->showTime->setText("00:00:00:000");

    ui->biTime->clear();
    i = 0;
}

void Widget::on_bitBt_clicked()
{
    QString temp;
    i++;
    temp.sprintf("%d:",i);
    ui->biTime->append(temp);

    ui->biTime->append(time.toString("hh:mm:ss.zzz"));
}
