/********************************************************************************
** Form generated from reading UI file 'faceattence.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACEATTENCE_H
#define UI_FACEATTENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaceAttence
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *headpicLb;
    QLabel *vdieoLb;
    QWidget *widget_3;
    QLabel *tital_Lb;
    QLabel *head_Lb;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit;
    QWidget *widget_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_2;
    QWidget *widget_6;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_3;
    QWidget *widget_7;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_4;

    void setupUi(QMainWindow *FaceAttence)
    {
        if (FaceAttence->objectName().isEmpty())
            FaceAttence->setObjectName("FaceAttence");
        FaceAttence->resize(800, 480);
        centralwidget = new QWidget(FaceAttence);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 480, 480));
        widget->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(80, 390, 261, 58));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgba(49, 50, 54,69);\n"
"border-radius:10px;"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setMinimumSize(QSize(31, 21));
        label->setMaximumSize(QSize(31, 21));
        label->setStyleSheet(QString::fromUtf8("image: url(:/true.png);"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 25 24pt \"mry_KacstQurn\";\n"
"border:none;\n"
"background-color: rgba(49, 50, 54,0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        headpicLb = new QLabel(widget);
        headpicLb->setObjectName("headpicLb");
        headpicLb->setGeometry(QRect(90, 60, 266, 266));
        headpicLb->setStyleSheet(QString::fromUtf8("image: url(:/Circle.png);"));
        vdieoLb = new QLabel(widget);
        vdieoLb->setObjectName("vdieoLb");
        vdieoLb->setGeometry(QRect(0, 0, 480, 480));
        vdieoLb->raise();
        widget_2->raise();
        headpicLb->raise();
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(480, 0, 320, 480));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		border:1px solid #313236;\n"
"		border-radius:4px;	\n"
"		background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QWidget#tital_Lb{\n"
"		font: 24pt;\n"
"		color:rgb(255,255,255)\n"
"}\n"
"\n"
"QWidget#head_Lb{\n"
"		border-radius:75px;\n"
"}"));
        tital_Lb = new QLabel(widget_3);
        tital_Lb->setObjectName("tital_Lb");
        tital_Lb->setGeometry(QRect(0, 0, 320, 51));
        tital_Lb->setAlignment(Qt::AlignCenter);
        head_Lb = new QLabel(widget_3);
        head_Lb->setObjectName("head_Lb");
        head_Lb->setGeometry(QRect(90, 60, 150, 150));
        widget1 = new QWidget(widget_3);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(10, 210, 301, 241));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget1);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		border:1px solid #313236;\n"
"		border-radius:4px;	\n"
"		background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"		border:none;\n"
"		color: rgb(125,100,127);\n"
"	font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"		color: rgb(255,255,255);\n"
"		font: 16pt \"Sans Serif\";\n"
"}"));
        widget2 = new QWidget(widget_4);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(1, 6, 261, 41));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lineEdit = new QLineEdit(widget2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget1);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		border:1px solid #313236;\n"
"		border-radius:4px;	\n"
"		background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"		border:none;\n"
"		color: rgb(125,100,127);\n"
"	font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"		color: rgb(255,255,255);\n"
"		font: 16pt \"Sans Serif\";\n"
"}"));
        layoutWidget = new QWidget(widget_5);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 6, 261, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(widget1);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		border:1px solid #313236;\n"
"		border-radius:4px;	\n"
"		background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"		border:none;\n"
"		color: rgb(125,100,127);\n"
"	font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"		color: rgb(255,255,255);\n"
"		font: 16pt \"Sans Serif\";\n"
"}"));
        layoutWidget_2 = new QWidget(widget_6);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(1, 6, 261, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_5 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_3->sizePolicy().hasHeightForWidth());
        lineEdit_3->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(widget1);
        widget_7->setObjectName("widget_7");
        widget_7->setStyleSheet(QString::fromUtf8("QWidget{\n"
"		border:1px solid #313236;\n"
"		border-radius:4px;	\n"
"		background-color: rgba(37, 40, 49,0.9);\n"
"}\n"
"\n"
"QLabel{\n"
"		border:none;\n"
"		color: rgb(125,100,127);\n"
"	font: 16pt \"Sans Serif\";\n"
"}\n"
"\n"
"QLineEdit{\n"
"		color: rgb(255,255,255);\n"
"		font: 16pt \"Sans Serif\";\n"
"}"));
        layoutWidget_3 = new QWidget(widget_7);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(1, 6, 261, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_6 = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);

        lineEdit_4 = new QLineEdit(layoutWidget_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit_4->sizePolicy().hasHeightForWidth());
        lineEdit_4->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addWidget(widget_7);

        FaceAttence->setCentralWidget(centralwidget);

        retranslateUi(FaceAttence);

        QMetaObject::connectSlotsByName(FaceAttence);
    } // setupUi

    void retranslateUi(QMainWindow *FaceAttence)
    {
        FaceAttence->setWindowTitle(QCoreApplication::translate("FaceAttence", "FaceAttence", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("FaceAttence", "sucess", nullptr));
        headpicLb->setText(QString());
        vdieoLb->setText(QString());
        tital_Lb->setText(QCoreApplication::translate("FaceAttence", "Face Systen", nullptr));
        head_Lb->setText(QString());
        label_6->setText(QCoreApplication::translate("FaceAttence", "gonghao", nullptr));
        lineEdit->setText(QCoreApplication::translate("FaceAttence", "0001", nullptr));
        label_7->setText(QCoreApplication::translate("FaceAttence", "gonghao", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("FaceAttence", "0001", nullptr));
        label_8->setText(QCoreApplication::translate("FaceAttence", "gonghao", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("FaceAttence", "0001", nullptr));
        label_9->setText(QCoreApplication::translate("FaceAttence", "gonghao", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("FaceAttence", "0001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FaceAttence: public Ui_FaceAttence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACEATTENCE_H
