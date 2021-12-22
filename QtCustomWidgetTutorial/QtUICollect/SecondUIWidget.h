#pragma once

#include <QtWidgets/QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

namespace Ui { class SecondUIWidget; };

class QDESIGNER_WIDGET_EXPORT SecondUIWidget : public QWidget
{
    Q_OBJECT

public:
    SecondUIWidget(QWidget* parent = Q_NULLPTR);

public:
    const Ui::SecondUIWidget* GetUi() { return ui; }

private:
    Ui::SecondUIWidget* ui;

};
