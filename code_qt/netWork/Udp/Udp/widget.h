#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>
#include <QString>
#include <QHostAddress>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QUdpSocket *udpSocket;

private slots:
    void on_sendBt_clicked();

    void on_openBt_clicked();

    void on_closeBt_clicked();

    void readyRead_slot();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
