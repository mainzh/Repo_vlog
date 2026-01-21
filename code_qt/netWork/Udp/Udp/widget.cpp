#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    udpSocket = new QUdpSocket(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_sendBt_clicked()
{
    quint16 port;
    QString sendbuf;
    QHostAddress address;

    address.setAddress(ui->aimIP->text());

    sendbuf = ui->sendEdit->text();

    port = ui->aimPort->text().toUInt();

    udpSocket->writeDatagram(sendbuf.toLocal8Bit().data(),sendbuf.length(),address,port);
}

void Widget::on_openBt_clicked()
{
    if(udpSocket->bind(ui->localPort->text().toUInt()) == true)
    {
        QMessageBox::information(this,"提示","连接成功");
    }else{
        QMessageBox::information(this,"提示","连接失败");
    }

    connect(udpSocket, SIGNAL(readyRead()),this, SLOT(readyRead_slot()));
}

void Widget::readyRead_slot()
{
    while(udpSocket->hasPendingDatagrams())
    {
        QByteArray array;
        array.resize(udpSocket->pendingDatagramSize());

        udpSocket->readDatagram(array.data(),array.size());

        QString buf;
        buf = array.data();

        ui->recvEdit->appendPlainText(buf);
    }
}

void Widget::on_closeBt_clicked()
{
    udpSocket->close();
}
