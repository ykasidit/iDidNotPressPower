/********************************************************************************
** Form generated from reading ui file 'iDidNotPressPower.ui'
**
** Created: Sun Sep 6 07:00:34 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_IDIDNOTPRESSPOWER_H
#define UI_IDIDNOTPRESSPOWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
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
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *AutoShutdownClass)
    {
        if (AutoShutdownClass->objectName().isEmpty())
            AutoShutdownClass->setObjectName(QString::fromUtf8("AutoShutdownClass"));
        AutoShutdownClass->setWindowModality(Qt::WindowModal);
        AutoShutdownClass->resize(438, 170);
        AutoShutdownClass->setFocusPolicy(Qt::StrongFocus);
        AutoShutdownClass->setAutoFillBackground(true);
        verticalLayoutWidget = new QWidget(AutoShutdownClass);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 437, 171));
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
        label_2->setTextFormat(Qt::RichText);
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, -1, 20, -1);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AutoShutdownClass);
        QObject::connect(pushButton, SIGNAL(clicked()), AutoShutdownClass, SLOT(OnCancel()));

        QMetaObject::connectSlotsByName(AutoShutdownClass);
    } // setupUi

    void retranslateUi(QWidget *AutoShutdownClass)
    {
        AutoShutdownClass->setWindowTitle(QApplication::translate("AutoShutdownClass", "iDidNotPressPower", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AutoShutdownClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; font-style:italic;\">Did you press power?</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AutoShutdownClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">If not accidental notebook boot:</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Move Mouse to Cancel.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AutoShutdownClass", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AutoShutdownClass);
    } // retranslateUi

};

namespace Ui {
    class AutoShutdownClass: public Ui_AutoShutdownClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDIDNOTPRESSPOWER_H
