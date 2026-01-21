#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpServer = new QTcpServer(this);
    tcpSocket = new QTcpSocket(this);

    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::newConnection_Slot()
{
    tcpSocket = tcpServer->nextPendingConnection();    //获取已经连接的客户端的 socket

    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));
}

void Widget::readyRead_Slot()
{
    QString buf;
    buf = tcpSocket->readAll();

    ui->recvEdit->appendPlainText(buf);
}

void Widget::on_openBt_clicked()
{
    tcpServer->listen(QHostAddress::Any,ui->portEdit->text().toUInt());    //监听来自所有客户端的连接
}

void Widget::on_clossBt_clicked()
{
    tcpServer->close();
}

void Widget::on_sendBt_clicked()
{
    tcpSocket->write(ui->sendEdit->text().toLocal8Bit().data());
}
