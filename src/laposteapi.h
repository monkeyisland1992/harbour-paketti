#ifndef LAPOSTEAPI_H
#define LAPOSTEAPI_H
#include <QObject>

class LaPosteAPI : public QObject {
    Q_OBJECT
public:
    explicit LaPosteAPI();
    Q_INVOKABLE QString requestResponse(QString url);
private:
    QString getApiKey();
    // Authorization key for the API
    // Generate an API key at https://developer.laposte.fr/products/suivi/latest
    QString apiKey = "";
};

#endif // LAPOSTEAPI_H
