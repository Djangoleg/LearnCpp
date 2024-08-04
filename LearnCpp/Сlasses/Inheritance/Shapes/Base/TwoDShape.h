//
// Created by ok on 04.08.24.
//

#ifndef LEARNCPP_TWODSHAPE_H
#define LEARNCPP_TWODSHAPE_H
#include "cstring"
#include <iostream>
using namespace std;


class TwoDShape {

    double width;
    double height;
    char name[20];

public:
    TwoDShape() {
        width = height = 0.0;
        stpcpy(name, "unknown");
    }

    TwoDShape(double w, double h, char *n) {
        width = w;
        height = h;
        strcpy(name, n);
    }

    TwoDShape(double x, char *n) {
        width = height = x;
        stpcpy(name, n);
    }

    void showDim();

    double getWidth();

    double getHeight();

    void setWidth(double w);

    void setHeight(double h);

    char *getName(){
        return name;
    }

    virtual double calcArea() = 0;
};

#endif //LEARNCPP_TWODSHAPE_H
