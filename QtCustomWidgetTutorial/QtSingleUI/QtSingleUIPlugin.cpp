#include "QtSingleUI.h"
#include "QtSingleUIPlugin.h"

#include <QtCore/QtPlugin>

QtSingleUIPlugin::QtSingleUIPlugin(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void QtSingleUIPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
    if (initialized)
        return;

    initialized = true;
}

bool QtSingleUIPlugin::isInitialized() const
{
    return initialized;
}

QWidget * QtSingleUIPlugin::createWidget(QWidget *parent)
{
    return new QtSingleUI(parent);
}

QString QtSingleUIPlugin::name() const
{
    return "QtSingleUI";
}

QString QtSingleUIPlugin::group() const
{
    return "My Plugins";
}

QIcon QtSingleUIPlugin::icon() const
{
    return QIcon();
}

QString QtSingleUIPlugin::toolTip() const
{
    return QString();
}

QString QtSingleUIPlugin::whatsThis() const
{
    return QString();
}

bool QtSingleUIPlugin::isContainer() const
{
    return false;
}

QString QtSingleUIPlugin::domXml() const
{
    return "<widget class=\"QtSingleUI\" name=\"uiQtSingleUI\">\n"
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

QString QtSingleUIPlugin::includeFile() const
{
    return "QtSingleUI.h";
}
