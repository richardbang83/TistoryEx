#pragma once

#include <QtWidgets/QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

namespace Ui { class FirstUIWidget; };

class QDESIGNER_WIDGET_EXPORT FirstUIWidget : public QWidget
{
    Q_OBJECT

public:
    FirstUIWidget(QWidget* parent = Q_NULLPTR);

public:
    const Ui::FirstUIWidget* GetUi() { return ui; }

private:
    Ui::FirstUIWidget* ui;

};
