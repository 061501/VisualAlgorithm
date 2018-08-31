#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    srand(time(NULL));

    draw = new drawWidget;
    setCentralWidget(draw);

    statusLabel[0] = new QLabel(this);
    statusLabel[0]->setText("画板");
    statusBar()->addWidget(statusLabel[0]);

    statusLabel[1] = new QLabel(this);
    statusLabel[1]->setText("顶点");
    statusBar()->addWidget(statusLabel[1]);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setStatusBar()
{
    delete statusLabel[0];
    delete statusLabel[1];

    statusLabel[0] = new QLabel(this);
    statusLabel[0]->setText("画板");
    statusBar()->addWidget(statusLabel[0]);

    statusLabel[1] = new QLabel(this);
    statusLabel[1]->setText("顶点");
    statusBar()->addWidget(statusLabel[1]);
}

void MainWindow::on_createVertex_triggered()
{
    mode = 0;
}

void MainWindow::on_createEdge_triggered()
{
    mode = 1;
}
