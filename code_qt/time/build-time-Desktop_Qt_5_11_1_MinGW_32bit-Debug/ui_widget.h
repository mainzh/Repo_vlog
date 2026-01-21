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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *showTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBt;
    QSpacerItem *horizontalSpacer;
    QPushButton *endBt;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetBt;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bitBt;
    QTextBrowser *biTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(459, 300);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        showTime = new QLabel(Widget);
        showTime->setObjectName(QStringLiteral("showTime"));
        QFont font;
        font.setPointSize(36);
        showTime->setFont(font);
        showTime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(showTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startBt = new QPushButton(Widget);
        startBt->setObjectName(QStringLiteral("startBt"));

        horizontalLayout->addWidget(startBt);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        endBt = new QPushButton(Widget);
        endBt->setObjectName(QStringLiteral("endBt"));

        horizontalLayout->addWidget(endBt);

        horizontalSpacer_2 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        resetBt = new QPushButton(Widget);
        resetBt->setObjectName(QStringLiteral("resetBt"));

        horizontalLayout->addWidget(resetBt);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bitBt = new QPushButton(Widget);
        bitBt->setObjectName(QStringLiteral("bitBt"));

        horizontalLayout->addWidget(bitBt);


        verticalLayout->addLayout(horizontalLayout);

        biTime = new QTextBrowser(Widget);
        biTime->setObjectName(QStringLiteral("biTime"));

        verticalLayout->addWidget(biTime);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        showTime->setText(QString());
        startBt->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        endBt->setText(QApplication::translate("Widget", "\347\273\223\346\235\237", nullptr));
        resetBt->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        bitBt->setText(QApplication::translate("Widget", "\346\211\223\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
