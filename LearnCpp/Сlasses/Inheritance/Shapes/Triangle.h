//
// Created by ok on 04.08.24.
//

#ifndef LEARNCPP_TRIANGLE_H
#define LEARNCPP_TRIANGLE_H
#include "Base/TwoDShape.h"

class Triangle : public TwoDShape{
    char style[20];
public:
    Triangle() {
        stpcpy(style, "unknown");
    }

    Triangle(char *str, double w, double h) : TwoDShape(w, h, (char*)"triangle") {
        strcpy(style, str);
    }

    Triangle(double x) : TwoDShape(x, (char*)"triangle") {
        strcpy(style, "isosceles");
    }

    double calcArea();

    void showStyle();
};


#endif //LEARNCPP_TRIANGLE_H
