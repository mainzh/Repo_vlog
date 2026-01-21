#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;


private slots:
    void newConnection_Slot();
    void readyRead_Slot();

    void on_openBt_clicked();

    void on_clossBt_clicked();

    void on_sendBt_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
