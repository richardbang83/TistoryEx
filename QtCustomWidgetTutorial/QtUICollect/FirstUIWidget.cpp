#include "FirstUIWidget.h"
#include "ui_FirstUIWidget.h"

FirstUIWidget::FirstUIWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::FirstUIWidget)
{
    ui->setupUi(this);
}
