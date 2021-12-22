#include <QtCore/QtPlugin>

#include "ThirdUIWidgetPlugin.h"
#include "ThirdUIWidget.h"

ThirdUIWidgetPlugin::ThirdUIWidgetPlugin(QObject* parent)
    : QObject(parent)
{
    initialized = false;
}

void ThirdUIWidgetPlugin::initialize(QDesignerFormEditorInterface* /*core*/)
{
    if (initialized)
        return;

    initialized = true;
}

bool ThirdUIWidgetPlugin::isInitialized() const
{
    return initialized;
}

QWidget* ThirdUIWidgetPlugin::createWidget(QWidget* parent)
{
    return new ThirdUIWidget(parent);
}

QString ThirdUIWidgetPlugin::name() const
{
    return "ThirdUIWidget";
}

QString ThirdUIWidgetPlugin::group() const
{
    return "My Plugins";
}

QIcon ThirdUIWidgetPlugin::icon() const
{
    return QIcon();
}

QString ThirdUIWidgetPlugin::toolTip() const
{
    return QString();
}

QString ThirdUIWidgetPlugin::whatsThis() const
{
    return QString();
}

bool ThirdUIWidgetPlugin::isContainer() const
{
    return false;
}

QString ThirdUIWidgetPlugin::domXml() const
{
    return "<widget class=\"ThirdUIWidget\" name=\"uiThirdUIWidget\">\n"
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

QString ThirdUIWidgetPlugin::includeFile() const
{
    return "ThirdUIWidget.h";
}
