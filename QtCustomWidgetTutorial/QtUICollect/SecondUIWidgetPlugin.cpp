#include <QtCore/QtPlugin>

#include "SecondUIWidgetPlugin.h"
#include "SecondUIWidget.h"

SecondUIWidgetPlugin::SecondUIWidgetPlugin(QObject* parent)
    : QObject(parent)
{
    initialized = false;
}

void SecondUIWidgetPlugin::initialize(QDesignerFormEditorInterface* /*core*/)
{
    if (initialized)
        return;

    initialized = true;
}

bool SecondUIWidgetPlugin::isInitialized() const
{
    return initialized;
}

QWidget* SecondUIWidgetPlugin::createWidget(QWidget* parent)
{
    return new SecondUIWidget(parent);
}

QString SecondUIWidgetPlugin::name() const
{
    return "SecondUIWidget";
}

QString SecondUIWidgetPlugin::group() const
{
    return "My Plugins";
}

QIcon SecondUIWidgetPlugin::icon() const
{
    return QIcon();
}

QString SecondUIWidgetPlugin::toolTip() const
{
    return QString();
}

QString SecondUIWidgetPlugin::whatsThis() const
{
    return QString();
}

bool SecondUIWidgetPlugin::isContainer() const
{
    return false;
}

QString SecondUIWidgetPlugin::domXml() const
{
    return "<widget class=\"SecondUIWidget\" name=\"uiSecondUIWidget\">\n"
        " <property name=\"geometry\">\n"
        "  <rect>\n"
        "   <x>0</x>\n"
        "   <y>0</y>\n"
        "   <width>100</width>\n"
        "   <height>100</height>\n"
        "  </rect>\n"
        " </property>\n"
        "</widget>\n";
}

QString SecondUIWidgetPlugin::includeFile() const
{
    return "SecondUIWidget.h";
}
