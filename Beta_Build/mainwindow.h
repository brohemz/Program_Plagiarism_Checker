#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>


class Data;

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setPage(int page);
    void run();
    void copyPaste(int side);

public slots:
    void buttonClicked();

private:
    Ui::MainWindow *ui;
    void addButtonActions();
    void setButtonIcons();
    std::vector<std::string> *mFileNames;
    Data *mDataObj;
    bool hasHistory;
    bool runHistoryCheck();


};

#endif // MAINWINDOW_H
