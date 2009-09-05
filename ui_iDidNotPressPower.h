/********************************************************************************
** Form generated from reading ui file 'iDidNotPressPower.ui'
**
** Created: Sat Sep 5 15:05:40 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_IDIDNOTPRESSPOWER_H
#define UI_IDIDNOTPRESSPOWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AutoShutdownClass
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *AutoShutdownClass)
    {
        if (AutoShutdownClass->objectName().isEmpty())
            AutoShutdownClass->setObjectName(QString::fromUtf8("AutoShutdownClass"));
        AutoShutdownClass->setWindowModality(Qt::WindowModal);
        AutoShutdownClass->resize(300, 170);
        AutoShutdownClass->setFocusPolicy(Qt::StrongFocus);
        AutoShutdownClass->setAutoFillBackground(true);
        verticalLayoutWidget = new QWidget(AutoShutdownClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 301, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(AutoShutdownClass);
        QObject::connect(pushButton, SIGNAL(clicked()), AutoShutdownClass, SLOT(OnCancel()));

        QMetaObject::connectSlotsByName(AutoShutdownClass);
    } // setupUi

    void retranslateUi(QWidget *AutoShutdownClass)
    {
        AutoShutdownClass->setWindowTitle(QApplication::translate("AutoShutdownClass", "iDidNotPressPower", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AutoShutdownClass", "Shutting down...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AutoShutdownClass", "(In case of accidental notebook boot)", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AutoShutdownClass", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AutoShutdownClass);
    } // retranslateUi

};

namespace Ui {
    class AutoShutdownClass: public Ui_AutoShutdownClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDIDNOTPRESSPOWER_H
