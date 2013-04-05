#include "MazeWindow.h"
#include "ui_MazeWindow.h"

MazeWindow::MazeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MazeWindow)
{
    ui->setupUi(this);
}

MazeWindow::~MazeWindow()
{
    delete ui;
}
