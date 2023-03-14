#include "temperature.h"

Temperature::Temperature() {
    temperature = 0;
}

Temperature::Temperature(double temp) {
    temperature = temp;
}

double Temperature::getTemperature() const {
    return temperature;
}

void Temperature::setTemperature(double temp) {
    temperature = temp;
}

bool Temperature::isEthylFreezing() const {
    return (temperature <= -173);
}

bool Temperature::isEthylBoiling() const {
    return (temperature >= 172);
}

bool Temperature::isOxygenFreezing() const {
    return (temperature <= -362);
}

bool Temperature::isOxygenBoiling() const {
    return (temperature >= -306);
}

bool Temperature::isWaterFreezing() const {
    return (temperature <= 32);
}

bool Temperature::isWaterBoiling() const {
    return (temperature >= 212);
}
