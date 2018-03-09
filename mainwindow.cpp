#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "weather.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Weather we;
}

MainWindow::~MainWindow()
{
    delete ui;
}

