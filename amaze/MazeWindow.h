#ifndef MAZEWINDOW_H
#define MAZEWINDOW_H

#include <QMainWindow>

namespace Ui {
class MazeWindow;
}

class MazeWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MazeWindow(QWidget *parent = 0);
    ~MazeWindow();
    
private:
    Ui::MazeWindow *ui;
};

#endif // MAZEWINDOW_H
