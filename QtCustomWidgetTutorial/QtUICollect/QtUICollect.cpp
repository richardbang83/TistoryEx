#include "QtUICollect.h"

#include "FirstUIWidgetPlugin.h"
#include "SecondUIWidgetPlugin.h"
#include "ThirdUIWidgetPlugin.h"

//Add Widget Interface's plugin header file
//#include "FirstWidgetPlugin.h"

QtUICollect::QtUICollect(QObject* parent)
    : QObject(parent)
{
    // Append widget interface plugin
    widgets.append(new FirstUIWidgetPlugin(this));
    widgets.append(new SecondUIWidgetPlugin(this));
    widgets.append(new ThirdUIWidgetPlugin(this));
}

QList<QDesignerCustomWidgetInterface*> QtUICollect::customWidgets() const
{
    return widgets;
}
