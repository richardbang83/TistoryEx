#include "QtSingleUI.h"
#include "ui_QtSingleUI.h"

QtSingleUI::QtSingleUI(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::QtSingleUI)
{
    ui->setupUi(this);
}
