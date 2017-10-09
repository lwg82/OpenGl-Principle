#include "formdrawpoints.h"
#include "ui_formdrawpoints.h"

FormDrawPoints::FormDrawPoints(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDrawPoints)
{
    ui->setupUi(this);
}

FormDrawPoints::~FormDrawPoints()
{
    delete ui;
}
