#include "SecondUIWidget.h"
#include "ui_SecondUIWidget.h"

SecondUIWidget::SecondUIWidget(QWidget* parent)
    : QWidget(parent)
    , ui(new Ui::SecondUIWidget)
{
    ui->setupUi(this);
}
