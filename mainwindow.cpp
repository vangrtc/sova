#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wopengl.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    WOpengl *opengl_window = new WOpengl;
    opengl_window->show();
    //opengl_window->showFullScreen();
}

void MainWindow::on_exitButton_clicked()
{
    qApp->quit();
}
