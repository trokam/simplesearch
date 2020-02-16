#include "simplesearch.h"
#include "ui_simplesearch.h"

simplesearch::simplesearch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::simplesearch)
{
    ui->setupUi(this);
}

simplesearch::~simplesearch()
{
    delete ui;
}
