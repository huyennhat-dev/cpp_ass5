#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
private:
    double temperature;

public:
    Temperature();
    Temperature(double temp);

    double getTemperature() const;
    void setTemperature(double temp);

    bool isEthylFreezing() const;
    bool isEthylBoiling() const;
    bool isOxygenFreezing() const;
    bool isOxygenBoiling() const;
    bool isWaterFreezing() const;
    bool isWaterBoiling() const;
};

#endif