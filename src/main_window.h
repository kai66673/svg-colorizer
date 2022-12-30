#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <DockManager.h>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    ads::CDockManager* m_DockManager;
};
#endif // MAINWINDOW_H
