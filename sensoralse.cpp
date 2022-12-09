#include "sensorprecipitacion.h"

#include <QRandomGenerator>

SensorPrecipitacion::SensorPrecipitacion(QObject *parent)
    : Sensor(parent)
{
    // aquí nada
}

SensorPrecipitacion::~SensorPrecipitacion()
{
    // aquí nada
}

void SensorPrecipitacion::generaValorAleatorio()
{
    // 0mm, 50mm
    const int entero = QRandomGenerator::global()->bounded(0, 49 + 1);
    const int decimal = QRandomGenerator::global()->bounded(0, 999 + 1);
    m_valor = entero + decimal / 1000.0;
}
