#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qFileDialog"
#include "time.h"
#include <sys/stat.h>

#include "data.hpp"
#include "file.hpp"
#include "comparison.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);
    mDataObj = new Data();
    mFileNames = new std::vector<std::string>();
    ui->textEdit->hide();
    ui->textEdit_2->hide();
    ui->side1_confirm->hide();
    ui->side2_confirm->hide();
    addButtonActions();
    setButtonIcons();
    ui->stackedWidget->setWindowTitle("Code Plagiarism Checker - CPC");
    ui->textBrowser->setFontPointSize(18);
    ui->textBrowser_2->setFontPointSize(18);
    ui->textBrowser_4->setFontPointSize(18);
    this->setWindowIcon(QIcon(":/files/appicon.icns"));
}

void MainWindow::setPage(int page){
    ui->stackedWidget->setCurrentIndex(page);
}


void MainWindow::addButtonActions(){
    connect ( ui->side1_b1, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side1_b2, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side2_b1, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side2_b2, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side2_b3, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side1_confirm, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->side2_confirm, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
    connect ( ui->compare, SIGNAL( clicked() ), this, SLOT( buttonClicked() ) );
}
void MainWindow::buttonClicked(){
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    std::string dir = std::string(getenv("HOME")) + "/Desktop/";

    if(button){
        if(button->objectName() == "side1_b1"){
            QString filename = QFileDialog::getOpenFileName(this, tr("Choose your main file for comparison."), QString().fromStdString(dir), "All Files (*.*)");
            mDataObj->newFile(filename.toStdString());
            ui->side1_b1->hide();
            ui->side1_b2->hide();

        }

        if(button->objectName() == "side1_b2")
            copyPaste(1);


        if(button->objectName() == "side2_b1"){
            QString filename = QFileDialog::getOpenFileName(this, tr("Choose your main file for comparison."), QString().fromStdString(dir), "All Files (*.*)");
            mDataObj->newFile(filename.toStdString());
            ui->side2_b1->hide();
            ui->side2_b2->hide();
            ui->side2_b3->hide();
        }

        if(button->objectName() == "side2_b2"){
            mDataObj->getHistory();
            hasHistory = true;
            ui->side2_b1->hide();
            ui->side2_b2->hide();
            ui->side2_b3->hide();

        }

        if(button->objectName() == "side2_b3"){
            copyPaste(2);
        }


        if(button->objectName() == "side1_confirm"){

           time_t date = time(NULL);

           tm *timeinfo = localtime(&date);

           mDataObj->newFile(ui->textEdit->toPlainText().toStdString(), asctime(timeinfo));


        }

        if(button->objectName() == "side2_confirm"){
            struct tm *timeinfo;
            time_t date;
            timeinfo = localtime(&date);
            mDataObj->newFile(ui->textEdit_2->toPlainText().toStdString(), asctime(timeinfo));
        }

        if(button->objectName() == "compare"){
            if(!hasHistory)
                run();
            else
                runHistoryCheck();
        }


    }
}

void MainWindow::copyPaste(int side){
    if(side == 1){
        ui->side1_b1->hide();
        ui->side1_b2->hide();
        ui->textEdit->show();
        ui->side1_confirm->show();
    }
    if(side == 2){
        ui->side2_b1->hide();
        ui->side2_b2->hide();
        ui->side2_b3->hide();
        ui->textEdit_2->show();
        ui->side2_confirm->show();
    }


}

void MainWindow::run(){
    Comparison comp;

    std::vector<File*> files = mDataObj->getAllFiles();

    comp.compare(files[0], files[1]);


    QString temp = "";
    for(int i = 0; i < files[0]->getWordCount(); i++){
        std::pair<std::string, bool> *pair = files[0]->getPair(i);


        if(pair->second){
            temp += "<style> b {color:#FFF979}</style><b>" + QString().fromStdString(pair->first) + "</b>";
        }else{
            temp += QString().fromStdString(pair->first);
        }


    }
    ui->textBrowser->setHtml(ui->textBrowser->toHtml() + temp);

    temp = "";
    for(int i = 0; i < files[1]->getWordCount(); i++){
        std::pair<std::string, bool> *pair = files[1]->getPair(i);

        if(pair->second){
            temp += "<style> b {color:#FFF979}</style><b>" + QString().fromStdString(pair->first) + "</b>";
        }else{
            temp += QString().fromStdString(pair->first);
        }

    }
    ui->textBrowser_2->setHtml(ui->textBrowser_2->toHtml() + temp);


    setPage(1);

    mDataObj->saveFiles();

}

bool MainWindow::runHistoryCheck(){

    Comparison comp;

    comp.compare(mDataObj);

    std::vector<File*> files = mDataObj->getAllFiles();
    setPage(2);
    for(int i = 1; i < files.size(); i++){
        QString name = QString().fromStdString("button_history_" + std::to_string(i));
        QPushButton *button = new QPushButton(name);
        button->setText(QString().fromStdString("File: " + files[i]->getFileName()));
        ui->gridLayout_2->addWidget(button);

        QString words = "";
        for(int i = 0; i < files[0]->getWordCount(); i++){
            words += QString().fromStdString((*files[0])[i]);
        }
        ui->textBrowser_4->setHtml(words);
    }


    mDataObj->saveFiles();
}


void MainWindow::setButtonIcons(){

    QPixmap clipboard (":/files/icon_clipboard.png");
    QPixmap history (":/files/icon_history.png");
    QPixmap plus (":/files/icon_plus.png");

    QIcon side1_b1_icon(plus);
    QIcon side1_b2_icon(clipboard);
    QIcon side2_b1_icon(plus);
    QIcon side2_b2_icon(history);
    QIcon side2_b3_icon(clipboard);

    ui->side1_b1->setIcon(side1_b1_icon);
    ui->side1_b1->setFixedSize(plus.rect().size());
    ui->side1_b1->setIconSize(plus.rect().size());

    ui->side1_b2->setIcon(side1_b2_icon);
    ui->side1_b2->setFixedSize(clipboard.rect().size());
    ui->side1_b2->setIconSize(clipboard.rect().size());


    ui->side2_b1->setIcon(side2_b1_icon);
    ui->side2_b1->setFixedSize(plus.rect().size());
    ui->side2_b1->setIconSize(plus.rect().size());


    ui->side2_b2->setIcon(side2_b2_icon);
    ui->side2_b2->setFixedSize(history.rect().size());
    ui->side2_b2->setIconSize(history.rect().size());


    ui->side2_b3->setIcon(side2_b3_icon);
    ui->side2_b3->setFixedSize(clipboard.rect().size());
    ui->side2_b3->setIconSize(clipboard.rect().size());

}

MainWindow::~MainWindow()
{
    delete mDataObj;
    delete ui;
}
