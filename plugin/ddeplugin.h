#ifndef DDEPLUGIN_H
#define DDEPLUGIN_H

#include <QGenericPlugin>

class DdePlugin : public QGenericPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QGenericPluginFactoryInterface_iid FILE "plugin.json")

public:
    explicit DdePlugin(QObject *parent = nullptr);

private:
    QObject *create(const QString &name, const QString &spec) override;
};

#endif // DDEPLUGIN_H
