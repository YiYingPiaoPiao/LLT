#include "launch.h"
#include "ui_launch.h"

launch::launch(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::launch)
{
    ui->setupUi(this);
}

launch::~launch()
{
    delete ui;
}

