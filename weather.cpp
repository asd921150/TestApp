#include "weather.h"
#include "def.h"

#define DEFAULT_WEATHER_REFRESH_INTERVAL 60000 // 60 sec.

Weather::Weather(QObject *parent) : QObject(parent)
{
//default value
    _type = C_Type;
    _temperature = 10000;
    _icon = NULL;
    _timer = new QTimer();
    _timer->setInterval(DEFAULT_WEATHER_REFRESH_INTERVAL);
    _timer->start();
    UpdateWeatherInfo();
}

void Weather::SetRefreshInterval(int val){
    _timer->setInterval(val);
}

void Weather::SetTemperatureType(TempType type){
    _type = type;
}

float Weather::Temperature(){
    return _temperature;
}
QPixmap Weather::Icon(){
    return _icon;
}

// SLOTS ##############################################################
void Weather::UpdateWeatherInfo(){
float lat = 120, lon = 23;
QString URL = QString(WEATHER_API_URL).append(QString().sprintf("lat=%02f&lon=%02f&")).append(WEATHER_API_KEY);

qDebug()<<"URL:"<<URL;
}
