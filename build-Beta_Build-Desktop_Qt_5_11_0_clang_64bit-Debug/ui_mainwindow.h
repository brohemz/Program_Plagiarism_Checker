/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *side1_b1;
    QTextEdit *textEdit;
    QPushButton *side1_b2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *side2_b1;
    QPushButton *side2_b2;
    QTextEdit *textEdit_2;
    QPushButton *side2_b3;
    QSpacerItem *verticalSpacer_5;
    QPushButton *side1_confirm;
    QPushButton *side2_confirm;
    QPushButton *compare;
    QWidget *page_2;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_6;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QTextBrowser *textBrowser_2;
    QWidget *page_3;
    QFrame *frame_3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_4;
    QFrame *frame_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(861, 608);
        MainWindow->setStyleSheet(QStringLiteral("QWidget {background-color: #919191}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 861, 591));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 841, 491));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 420, 521));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_3);

        side1_b1 = new QPushButton(horizontalLayoutWidget_2);
        side1_b1->setObjectName(QStringLiteral("side1_b1"));

        horizontalLayout_2->addWidget(side1_b1);

        textEdit = new QTextEdit(horizontalLayoutWidget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        side1_b2 = new QPushButton(horizontalLayoutWidget_2);
        side1_b2->setObjectName(QStringLiteral("side1_b2"));

        horizontalLayout_2->addWidget(side1_b2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        frame_2 = new QFrame(horizontalLayoutWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_3 = new QWidget(frame_2);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 404, 521));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_4);

        side2_b1 = new QPushButton(horizontalLayoutWidget_3);
        side2_b1->setObjectName(QStringLiteral("side2_b1"));

        horizontalLayout_3->addWidget(side2_b1);

        side2_b2 = new QPushButton(horizontalLayoutWidget_3);
        side2_b2->setObjectName(QStringLiteral("side2_b2"));

        horizontalLayout_3->addWidget(side2_b2);

        textEdit_2 = new QTextEdit(horizontalLayoutWidget_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_3->addWidget(textEdit_2);

        side2_b3 = new QPushButton(horizontalLayoutWidget_3);
        side2_b3->setObjectName(QStringLiteral("side2_b3"));

        horizontalLayout_3->addWidget(side2_b3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout->addWidget(frame_2);

        side1_confirm = new QPushButton(page);
        side1_confirm->setObjectName(QStringLiteral("side1_confirm"));
        side1_confirm->setGeometry(QRect(150, 530, 114, 32));
        side2_confirm = new QPushButton(page);
        side2_confirm->setObjectName(QStringLiteral("side2_confirm"));
        side2_confirm->setGeometry(QRect(600, 530, 114, 32));
        compare = new QPushButton(page);
        compare->setObjectName(QStringLiteral("compare"));
        compare->setGeometry(QRect(370, 0, 114, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(13);
        sizePolicy1.setHeightForWidth(compare->sizePolicy().hasHeightForWidth());
        compare->setSizePolicy(sizePolicy1);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QLatin1String("QTextBrowser {background-color: #C8C8C8; color: black}\n"
"QTextBrowser b {color:yellow;}\n"
""));
        horizontalLayoutWidget_4 = new QWidget(page_2);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 30, 841, 541));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(horizontalLayoutWidget_4);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 537));
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 401, 541));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setStyleSheet(QStringLiteral(""));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_6);

        scrollArea_2 = new QScrollArea(horizontalLayoutWidget_4);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 397, 537));
        textBrowser_2 = new QTextBrowser(scrollAreaWidgetContents_3);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(0, 0, 401, 541));
        sizePolicy2.setHeightForWidth(textBrowser_2->sizePolicy().hasHeightForWidth());
        textBrowser_2->setSizePolicy(sizePolicy2);
        textBrowser_2->setStyleSheet(QStringLiteral("b {color:lightblue}"));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_4->addWidget(scrollArea_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(20, 20, 821, 561));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_5 = new QWidget(frame_3);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 0, 821, 561));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        textBrowser_4 = new QTextBrowser(horizontalLayoutWidget_5);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));

        horizontalLayout_5->addWidget(textBrowser_4);

        frame_4 = new QFrame(horizontalLayoutWidget_5);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_4);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 401, 561));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        horizontalLayout_5->addWidget(frame_4);

        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        side1_b1->setText(QString());
        side1_b2->setText(QString());
        side2_b1->setText(QString());
        side2_b2->setText(QString());
        side2_b3->setText(QString());
        side1_confirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
        side2_confirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
        compare->setText(QApplication::translate("MainWindow", "<- Compare ->", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
