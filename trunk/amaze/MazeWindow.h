#ifndef MAZEWINDOW_H
#define MAZEWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_MazeWindow.h"

class MazeWindow : public QMainWindow
{
	Q_OBJECT

public:
	MazeWindow(QWidget *parent = 0);
	~MazeWindow();

private:
	Ui::MazeWindowClass ui;
};

#endif // MAZEWINDOW_H
