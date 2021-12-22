#include "ThirdUIWidget.h"
#include "ui_ThirdUIWidget.h"

ThirdUIWidget::ThirdUIWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::ThirdUIWidget)
{
    ui->setupUi(this);
}
