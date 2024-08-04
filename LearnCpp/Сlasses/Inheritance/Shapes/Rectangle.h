//
// Created by ok on 04.08.24.
//

#ifndef LEARNCPP_RECTANGLE_H
#define LEARNCPP_RECTANGLE_H
#include "Base/TwoDShape.h"


class Rectangle : public TwoDShape {
public:
    Rectangle(double w, double h) : TwoDShape(w, h, (char*)"rectangle") { }

    Rectangle(double x) : TwoDShape(x, (char*)"rectangle") { }

    bool isSquare();

    double calcArea();

};


#endif //LEARNCPP_RECTANGLE_H
