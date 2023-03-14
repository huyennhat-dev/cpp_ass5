#include "Circle.h"

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(double r) {
    radius = r;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getRadius() {
    return radius;
}



double Circle::getArea() {
    return pi * radius * radius;
}

double Circle::getDiameter() {
    return radius * 2;
}

double Circle::getCircumference() {
    return 2 * pi * radius;
}

void Circle::display() {
    cout << "Area: " << this->getArea() << endl;
    cout << "Diameter: " << this->getDiameter() << endl;
    cout << "Circumference: " << this->getCircumference() << endl;
}
