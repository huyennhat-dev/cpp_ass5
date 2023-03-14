#ifndef CIRCLE_H
#define CIRCLE_H


#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double pi = 3.14159;
public:
    Circle();
    Circle(double r);
    void setRadius(double r);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();

    void display();
};

#endif