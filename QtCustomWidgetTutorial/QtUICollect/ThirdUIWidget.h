#pragma once

#include <QtWidgets/QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

namespace Ui { class ThirdUIWidget; };

class QDESIGNER_WIDGET_EXPORT ThirdUIWidget : public QWidget
{
    Q_OBJECT

public:
    ThirdUIWidget(QWidget* parent = Q_NULLPTR);

public:
    const Ui::ThirdUIWidget* GetUi() { return ui; }

private:
    Ui::ThirdUIWidget* ui;

};
