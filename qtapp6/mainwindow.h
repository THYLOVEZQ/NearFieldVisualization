#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_action_4_triggered();

    void on_action_changed();

    void on_action_1_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
