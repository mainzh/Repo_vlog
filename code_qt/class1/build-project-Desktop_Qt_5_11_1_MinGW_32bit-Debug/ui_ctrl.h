/********************************************************************************
** Form generated from reading UI file 'ctrl.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRL_H
#define UI_CTRL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ctrl
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *backBt;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ctrl)
    {
        if (ctrl->objectName().isEmpty())
            ctrl->setObjectName(QStringLiteral("ctrl"));
        ctrl->resize(600, 400);
        gridLayout = new QGridLayout(ctrl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(85, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        pushButton = new QPushButton(ctrl);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 100));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/pic/deng.png);"));

        verticalLayout_3->addWidget(pushButton);

        label = new QLabel(ctrl);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_2 = new QPushButton(ctrl);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(100, 100));
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/pic/kaiguan.png);"));

        verticalLayout_2->addWidget(pushButton_2);

        label_2 = new QLabel(ctrl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        backBt = new QPushButton(ctrl);
        backBt->setObjectName(QStringLiteral("backBt"));
        backBt->setMinimumSize(QSize(100, 100));
        backBt->setStyleSheet(QStringLiteral("border-image: url(:/pic/shezhi.png);"));

        verticalLayout->addWidget(backBt);

        label_3 = new QLabel(ctrl);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(85, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 127, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(ctrl);

        QMetaObject::connectSlotsByName(ctrl);
    } // setupUi

    void retranslateUi(QWidget *ctrl)
    {
        ctrl->setWindowTitle(QApplication::translate("ctrl", "Form", nullptr));
        pushButton->setText(QString());
        label->setText(QApplication::translate("ctrl", "\347\224\265\347\201\257", nullptr));
        pushButton_2->setText(QString());
        label_2->setText(QApplication::translate("ctrl", "\345\274\200\345\205\263", nullptr));
        backBt->setText(QString());
        label_3->setText(QApplication::translate("ctrl", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ctrl: public Ui_ctrl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRL_H
