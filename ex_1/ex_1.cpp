#include <iostream>
#include "circle.h"

int main()
{
    double radius = 10.0;
    cout << "The circle's radius: " <<radius<<"\n";
    Circle c1;

    c1.setRadius(radius);
    c1.display();

    double r;
    cout << "Enter the circle's radius: ";
    cin >> r;
    Circle c2(r);
    c2.display();


    return 0;
}