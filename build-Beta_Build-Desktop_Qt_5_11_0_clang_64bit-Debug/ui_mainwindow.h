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
#include <QtWidgets/QLabel>
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
    QFrame *frame_5;
    QLabel *label;
    QWidget *page_3;
    QFrame *frame_3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QTextBrowser *textBrowser_4;
    QFrame *frame_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QWidget *page_4;
    QFrame *frame_11;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_11;
    QHBoxLayout *horizontalLayout_11;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_5;
    QTextBrowser *textBrowser_7;
    QSpacerItem *verticalSpacer_13;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QTextBrowser *textBrowser_8;

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
        side1_b1->setToolTipDuration(5000);

        horizontalLayout_2->addWidget(side1_b1);

        textEdit = new QTextEdit(horizontalLayoutWidget_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        side1_b2 = new QPushButton(horizontalLayoutWidget_2);
        side1_b2->setObjectName(QStringLiteral("side1_b2"));
        side1_b2->setToolTipDuration(5000);

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
        side2_b1->setToolTipDuration(5000);

        horizontalLayout_3->addWidget(side2_b1);

        side2_b2 = new QPushButton(horizontalLayoutWidget_3);
        side2_b2->setObjectName(QStringLiteral("side2_b2"));
        side2_b2->setToolTipDuration(5000);

        horizontalLayout_3->addWidget(side2_b2);

        textEdit_2 = new QTextEdit(horizontalLayoutWidget_3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_3->addWidget(textEdit_2);

        side2_b3 = new QPushButton(horizontalLayoutWidget_3);
        side2_b3->setObjectName(QStringLiteral("side2_b3"));
        side2_b3->setToolTipDuration(5000);

        horizontalLayout_3->addWidget(side2_b3);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_5);


        horizontalLayout->addWidget(frame_2);

        side1_confirm = new QPushButton(page);
        side1_confirm->setObjectName(QStringLiteral("side1_confirm"));
        side1_confirm->setGeometry(QRect(150, 530, 114, 32));
        side1_confirm->setToolTipDuration(5000);
        side2_confirm = new QPushButton(page);
        side2_confirm->setObjectName(QStringLiteral("side2_confirm"));
        side2_confirm->setGeometry(QRect(600, 530, 114, 32));
        side2_confirm->setToolTipDuration(5000);
        compare = new QPushButton(page);
        compare->setObjectName(QStringLiteral("compare"));
        compare->setGeometry(QRect(370, 0, 114, 32));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(13);
        sizePolicy1.setHeightForWidth(compare->sizePolicy().hasHeightForWidth());
        compare->setSizePolicy(sizePolicy1);
        compare->setToolTipDuration(5000);
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

        frame_5 = new QFrame(page_2);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setGeometry(QRect(10, 570, 841, 20));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_5);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 411, 16));
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
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        frame_11 = new QFrame(page_4);
        frame_11->setObjectName(QStringLiteral("frame_11"));
        frame_11->setGeometry(QRect(10, 560, 841, 20));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_11);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 411, 16));
        horizontalLayoutWidget_11 = new QWidget(page_4);
        horizontalLayoutWidget_11->setObjectName(QStringLiteral("horizontalLayoutWidget_11"));
        horizontalLayoutWidget_11->setGeometry(QRect(10, 20, 841, 541));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_11);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(horizontalLayoutWidget_11);
        scrollArea_5->setObjectName(QStringLiteral("scrollArea_5"));
        scrollArea_5->setStyleSheet(QStringLiteral(""));
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QStringLiteral("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 398, 537));
        textBrowser_7 = new QTextBrowser(scrollAreaWidgetContents_5);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(0, 0, 401, 541));
        sizePolicy2.setHeightForWidth(textBrowser_7->sizePolicy().hasHeightForWidth());
        textBrowser_7->setSizePolicy(sizePolicy2);
        textBrowser_7->setStyleSheet(QStringLiteral(""));
        scrollArea_5->setWidget(scrollAreaWidgetContents_5);

        horizontalLayout_11->addWidget(scrollArea_5);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_11->addItem(verticalSpacer_13);

        scrollArea_6 = new QScrollArea(horizontalLayoutWidget_11);
        scrollArea_6->setObjectName(QStringLiteral("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QStringLiteral("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 397, 537));
        textBrowser_8 = new QTextBrowser(scrollAreaWidgetContents_6);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(0, 0, 401, 541));
        sizePolicy2.setHeightForWidth(textBrowser_8->sizePolicy().hasHeightForWidth());
        textBrowser_8->setSizePolicy(sizePolicy2);
        textBrowser_8->setStyleSheet(QStringLiteral("b {color:lightblue}"));
        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        horizontalLayout_11->addWidget(scrollArea_6);

        stackedWidget->addWidget(page_4);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Code Plagiarism Checker - CPC (BETA)", nullptr));
#ifndef QT_NO_TOOLTIP
        side1_b1->setToolTip(QApplication::translate("MainWindow", "Add File", nullptr));
#endif // QT_NO_TOOLTIP
        side1_b1->setText(QString());
#ifndef QT_NO_TOOLTIP
        side1_b2->setToolTip(QApplication::translate("MainWindow", "Copy and Paste a Code Selection", nullptr));
#endif // QT_NO_TOOLTIP
        side1_b2->setText(QString());
#ifndef QT_NO_TOOLTIP
        side2_b1->setToolTip(QApplication::translate("MainWindow", "Add File", nullptr));
#endif // QT_NO_TOOLTIP
        side2_b1->setText(QString());
#ifndef QT_NO_TOOLTIP
        side2_b2->setToolTip(QApplication::translate("MainWindow", "Compare to Previously Checked Code", nullptr));
#endif // QT_NO_TOOLTIP
        side2_b2->setText(QString());
#ifndef QT_NO_TOOLTIP
        side2_b3->setToolTip(QApplication::translate("MainWindow", "Copy and Paste a Code Selection", nullptr));
#endif // QT_NO_TOOLTIP
        side2_b3->setText(QString());
#ifndef QT_NO_TOOLTIP
        side1_confirm->setToolTip(QApplication::translate("MainWindow", "Confirm Code Selection", nullptr));
#endif // QT_NO_TOOLTIP
        side1_confirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
#ifndef QT_NO_TOOLTIP
        side2_confirm->setToolTip(QApplication::translate("MainWindow", "Confirm Code Selection", nullptr));
#endif // QT_NO_TOOLTIP
        side2_confirm->setText(QApplication::translate("MainWindow", "Confirm", nullptr));
#ifndef QT_NO_TOOLTIP
        compare->setToolTip(QApplication::translate("MainWindow", "Click to Compare", nullptr));
#endif // QT_NO_TOOLTIP
        compare->setText(QApplication::translate("MainWindow", "<- Compare ->", nullptr));
        label->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
