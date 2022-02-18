#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "task.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setVisible(false);
    ui->homeBtn->setVisible(false);
    ui->actionSave_Todo->setEnabled(false);
    ui->actionHome->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_ToDo_triggered()
{
    ui->newNoteBtn->setVisible(false);
    ui->oldNoteBtn->setVisible(false);
    ui->editNoteBtn->setVisible(false);
    ui->textEdit->setVisible(true);
    ui->homeBtn->setVisible(true);
    ui->actionSave_Todo->setEnabled(true);
    ui->actionHome->setEnabled(true);
    task = Task();
}


void MainWindow::on_actionHome_triggered()
{
    ui->newNoteBtn->setVisible(true);
    ui->oldNoteBtn->setVisible(true);
    ui->editNoteBtn->setVisible(true);
    ui->textEdit->setVisible(false);
    ui->homeBtn->setVisible(false);
    ui->actionSave_Todo->setEnabled(false);
    ui->actionHome->setEnabled(false);
}


void MainWindow::on_newNoteBtn_clicked()
{
    this->on_actionNew_ToDo_triggered();
}


void MainWindow::on_homeBtn_clicked()
{
    this->on_actionHome_triggered();
}

void MainWindow::on_actionSave_Todo_triggered()
{
    task.save("ui->textEdit");
}

