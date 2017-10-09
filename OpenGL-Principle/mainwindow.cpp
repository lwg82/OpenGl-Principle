#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //
    _tabWidget = new QTabWidget(this);

    _formDrawPoints = new FormDrawPoints(this);
    _tabWidget->addTab(_formDrawPoints, QString::fromLocal8Bit("绘制点"));

    setCentralWidget(_tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
