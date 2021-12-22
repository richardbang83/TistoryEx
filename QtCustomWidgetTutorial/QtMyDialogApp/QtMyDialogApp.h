#pragma once

#include <QtWidgets/QDialog>
#include "ui_QtMyDialogApp.h"

class QtMyDialogApp : public QDialog
{
    Q_OBJECT

public:
    QtMyDialogApp(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtMyDialogAppClass ui;
};
