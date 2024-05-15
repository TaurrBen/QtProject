#include "QtAutoFocus.h"
#include "ui_QtAutoFocus.h"

QtAutoFocus::QtAutoFocus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QtAutoFocus)
{
    ui->setupUi(this);
}

QtAutoFocus::~QtAutoFocus()
{
    delete ui;
}
