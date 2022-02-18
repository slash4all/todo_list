#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "task.h"
#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_newNoteBtn_clicked();

    void on_actionHome_triggered();

    void on_homeBtn_clicked();

    void on_actionNew_ToDo_triggered();

    void on_actionSave_Todo_triggered();

private:
    Ui::MainWindow *ui;
    Task task;
};

#endif // MAINWINDOW_H
