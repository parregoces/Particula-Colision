#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyGraphicsView.h"
#include <QDebug>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonTest, &QPushButton::clicked, this, &MainWindow::on_pushButtonTest_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonTest_clicked()
{
    qDebug() << "Button clicked!";
    ui->graphicsView->startParticleMovement();

}




