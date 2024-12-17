#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_starStopButton_clicked()
{
    ui->starStopButton->setText("启动服务器");
    static bool started = false;
    if (started) {
        ui->starStopButton->setText("停止服务器");
    } else {
        ui->starStopButton->setText("启动服务器");
    }

    started = !started;

}

