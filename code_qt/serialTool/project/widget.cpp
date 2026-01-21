#include "widget.h"
#include "ui_widget.h"
#include <QSerialPortInfo>    //包含串口信息类
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* 获取并显示串口号 */
    QStringList serialNamePort;
    //其中 QSerialPortInfo::availablePorts() 自动搜索可用的串口，返回值是一个数组，数组的元素是 QSerialPortInfo 类型，用变量 serialNamePort 来接这些数组
    foreach (const QSerialPortInfo &info , QSerialPortInfo::availablePorts() ) {
        serialNamePort << info.portName();
    }
    ui -> serialCb -> addItems(serialNamePort);

    /* 定义串口 */
    serialPort = new QSerialPort(this);

    /* 定义串口接收的信号和槽
       当串口助手有可读的内容时，发出 SIGNAL(readyRead()) 信号，触发 serialPortReadRead_Slot() 槽函数 */
    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_Slot()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_openBt_clicked()
{
    /* 串口初始化 */
    /* 定义变量 */
    QSerialPort::BaudRate baudRate;    //波特率
    QSerialPort::DataBits dataBits;    //数据位
    QSerialPort::StopBits stopBits;    //停止位
    QSerialPort::Parity checkBits;    //校验位

    /* 赋值 */
    if(ui-> baudrateCb -> currentText() == "4800"){
        baudRate = QSerialPort::Baud4800;
    }else if(ui-> baudrateCb -> currentText() == "9600"){
        baudRate = QSerialPort::Baud9600;
    }else if(ui-> baudrateCb -> currentText() == "115200"){
        baudRate = QSerialPort::Baud115200;
    }

    if(ui->dataCb->currentText() == "5"){
        dataBits = QSerialPort::Data5;
    }else if(ui->dataCb->currentText() == "6"){
        dataBits = QSerialPort::Data6;
    }else if(ui->dataCb->currentText() == "7"){
        dataBits = QSerialPort::Data7;
    }else if(ui->dataCb->currentText() == "8"){
        dataBits = QSerialPort::Data8;
    }

    if(ui->stopCb->currentText() == "1"){
        stopBits = QSerialPort::OneStop;
    }else if(ui->stopCb->currentText() == "1.5"){
        stopBits = QSerialPort::OneAndHalfStop;
    }else if(ui->stopCb->currentText() == "2"){
        stopBits = QSerialPort::TwoStop;
    }

    if(ui->checkCb->currentText() == "none"){
        checkBits = QSerialPort::NoParity;
    }

    /* 给串口设置属性值 */
    serialPort->setPortName(ui->serialCb->currentText());
    serialPort->setBaudRate(baudRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    /* 判断串口是否打开成功 */
    if(serialPort->open(QIODevice::ReadWrite) == true){
        QMessageBox::information(this,"提示","串口打开成功");
    }else {
        QMessageBox::critical(this,"提示","串口打开失败");
    }

}

void Widget::on_closeBt_clicked()
{
    serialPort->close();
}

void Widget::serialPortReadyRead_Slot()
{
    QByteArray buf;
    buf = serialPort->readAll();    //接收读到的内容

    QString str = QString::fromLocal8Bit(buf);

    if(!buf.isEmpty())    //判断确实接收到数据
    {
        ui->recvEdit->appendPlainText(str);    //发送到 recvEdit 组件中
    }
}

void Widget::on_sendBt_clicked()
{
    serialPort->write(ui->sendEdit->text().toLocal8Bit().data());    //当点击sendBt发送按钮时，将sendEdit 发送编辑区的内容发送出去，将数据类型转换为char型
}

void Widget::on_clearBt_clicked()
{
    ui->recvEdit->clear();
}
