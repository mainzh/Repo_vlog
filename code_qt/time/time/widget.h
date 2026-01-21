#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTime>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTime time;
    QTimer timer;

private slots:
    void on_startBt_clicked();

    void on_endBt_clicked();

    void on_resetBt_clicked();

    void on_bitBt_clicked();

    void timeout_slot();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
