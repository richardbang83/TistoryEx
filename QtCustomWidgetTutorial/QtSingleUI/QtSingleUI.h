#pragma once

#include <QtWidgets/QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

namespace Ui { class QtSingleUI; };

class QDESIGNER_WIDGET_EXPORT QtSingleUI : public QWidget
{
    Q_OBJECT

public:
    QtSingleUI(QWidget *parent = Q_NULLPTR);

public:
    const Ui::QtSingleUI* GetUi() { return ui; }

private:
    Ui::QtSingleUI* ui;

};
