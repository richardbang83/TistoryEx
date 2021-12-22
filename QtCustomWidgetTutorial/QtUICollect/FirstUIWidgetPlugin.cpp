#include <QtCore/QtPlugin>

#include "FirstUIWidgetPlugin.h"
#include "FirstUIWidget.h"

FirstUIWidgetPlugin::FirstUIWidgetPlugin(QObject* parent)
    : QObject(parent)
{
    initialized = false;
}

void FirstUIWidgetPlugin::initialize(QDesignerFormEditorInterface* /*core*/)
{
    if (initialized)
        return;

    initialized = true;
}

bool FirstUIWidgetPlugin::isInitialized() const
{
    return initialized;
}

QWidget* FirstUIWidgetPlugin::createWidget(QWidget* parent)
{
    return new FirstUIWidget(parent);
}

QString FirstUIWidgetPlugin::name() const
{
    return "FirstUIWidget";
}

QString FirstUIWidgetPlugin::group() const
{
    return "My Plugins";
}

QIcon FirstUIWidgetPlugin::icon() const
{
    return QIcon();
}

QString FirstUIWidgetPlugin::toolTip() const
{
    return QString();
}

QString FirstUIWidgetPlugin::whatsThis() const
{
    return QString();
}

bool FirstUIWidgetPlugin::isContainer() const
{
    return false;
}

QString FirstUIWidgetPlugin::domXml() const
{
    return "<widget class=\"FirstUIWidget\" name=\"uiFirstUIWidget\">\n"
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

QString FirstUIWidgetPlugin::includeFile() const
{
    return "FirstUIWidget.h";
}
