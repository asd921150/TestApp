#ifndef WEATHER_H
#define WEATHER_H

#include <QObject>
#include <QTimer>
enum TempType{
    C_Type = 0,
    K_Type,
    F_Type
};


class Weather : public QObject
{
    Q_OBJECT
public:
    explicit Weather(QObject *parent = 0);


    void SetRefreshInterval(int val);
    void SetTemperatureType(TempType type);
    float Temperature();
    QPixmap* Icon();

private:
    TempType _type;
    float _temperature;
    QString _icon_name;
    QPixmap* _icon;
    QTimer* _timer;


signals:
    void WeatherDataChanged();
private slots:
    void UpdateWeatherInfo();

public slots:
};

#endif // WEATHER_H
