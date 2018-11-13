#include "comparisonwindow.h"
#include "ui_comparisonwindow.h"

ComparisonWindow::ComparisonWindow(QWidget *parent) :
    QComparisonWindow(parent),
    ui(new Ui::ComparisonWindow)
{
    ui->setupUi(this);
}

bool ComparisonWindow::setButtonIcons(){

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


    ui->side2_b3->setIcon(side2_b2_icon);
    ui->side2_b3->setFixedSize(clipboard.rect().size());
    ui->side2_b3->setIconSize(clipboard.rect().size());



    return true;
}

ComparisonWindow::~ComparisonWindow()
{
    delete ui;
}
