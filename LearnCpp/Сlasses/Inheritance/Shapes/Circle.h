//
// Created by ok on 04.08.24.
//

#ifndef LEARNCPP_CIRCLE_H
#define LEARNCPP_CIRCLE_H
#include "Base/TwoDShape.h"


class Circle : public TwoDShape {
public:
    Circle(double radius) : TwoDShape(radius, (char*)"circle") { }

    double getRadius();

    double calcArea();
};


#endif //LEARNCPP_CIRCLE_H
