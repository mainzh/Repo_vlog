#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    tcpSocket->connectToHost(ui->ipEdit->text(),ui->portEdit->text().toUInt());

    connect(tcpSocket,SIGNAL(connected()),this,SLOT(connected_Slot()));
}

void Widget::connected_Slot()
{
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()
{
    ui->recvEdit->appendPlainText(tcpSocket->readAll());
}

void Widget::on_closeBt_clicked()
{
    tcpSocket->close();
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());
}
