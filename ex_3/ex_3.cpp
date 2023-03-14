#include <iostream>
#include "temperature.h"

using namespace std;

int main() {
    double temp;
    cout << "Enter a temperature: ";
    cin >> temp;

    Temperature t(temp);

    cout << "At " << t.getTemperature() << " degrees Fahrenheit, the following substances ";
    cout << "will freeze or boil:\n";

    if (t.isEthylFreezing()) {
        cout << "Ethyl alcohol will freeze.\n";
    }

    if (t.isEthylBoiling()) {
        cout << "Ethyl alcohol will boil.\n";
    }

    if (t.isOxygenFreezing()) {
        cout << "Oxygen will freeze.\n";
    }

    if (t.isOxygenBoiling()) {
        cout << "Oxygen will boil.\n";
    }

    if (t.isWaterFreezing()) {
        cout << "Water will freeze.\n";
    }

    if (t.isWaterBoiling()) {
        cout << "Water will boil.\n";
    }

    return 0;
}
