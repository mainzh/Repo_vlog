/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QPlainTextEdit *recvEdit;
    QGroupBox *groupBox_2;
    QLineEdit *sendEdit;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *localPort;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *aimPort;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *aimIP;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sendBt;
    QPushButton *openBt;
    QPushButton *closeBt;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(455, 423);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout_3->addWidget(groupBox);

        recvEdit = new QPlainTextEdit(Widget);
        recvEdit->setObjectName(QStringLiteral("recvEdit"));
        recvEdit->setReadOnly(true);

        verticalLayout_3->addWidget(recvEdit);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        verticalLayout_3->addWidget(groupBox_2);

        sendEdit = new QLineEdit(Widget);
        sendEdit->setObjectName(QStringLiteral("sendEdit"));
        sendEdit->setMinimumSize(QSize(0, 35));

        verticalLayout_3->addWidget(sendEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        localPort = new QLineEdit(Widget);
        localPort->setObjectName(QStringLiteral("localPort"));

        horizontalLayout_3->addWidget(localPort);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        aimPort = new QLineEdit(Widget);
        aimPort->setObjectName(QStringLiteral("aimPort"));

        horizontalLayout_2->addWidget(aimPort);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        aimIP = new QLineEdit(Widget);
        aimIP->setObjectName(QStringLiteral("aimIP"));
        aimIP->setMinimumSize(QSize(131, 0));

        horizontalLayout->addWidget(aimIP);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_4->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        sendBt = new QPushButton(Widget);
        sendBt->setObjectName(QStringLiteral("sendBt"));

        verticalLayout_2->addWidget(sendBt);

        openBt = new QPushButton(Widget);
        openBt->setObjectName(QStringLiteral("openBt"));

        verticalLayout_2->addWidget(openBt);

        closeBt = new QPushButton(Widget);
        closeBt->setObjectName(QStringLiteral("closeBt"));

        verticalLayout_2->addWidget(closeBt);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        groupBox->raise();
        groupBox_2->raise();
        localPort->raise();
        label->raise();
        openBt->raise();
        closeBt->raise();
        aimPort->raise();
        label_2->raise();
        recvEdit->raise();
        sendEdit->raise();
        label_3->raise();
        aimIP->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\346\216\245\346\224\266\346\241\206", nullptr));
        groupBox_2->setTitle(QApplication::translate("Widget", "\345\217\221\351\200\201\346\241\206", nullptr));
        label->setText(QApplication::translate("Widget", "\346\234\254\345\234\260\347\253\257\345\217\243", nullptr));
        label_2->setText(QApplication::translate("Widget", "\347\233\256\346\240\207\347\253\257\345\217\243", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\233\256\346\240\207ip", nullptr));
        aimIP->setText(QString());
        sendBt->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        openBt->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
        closeBt->setText(QApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
