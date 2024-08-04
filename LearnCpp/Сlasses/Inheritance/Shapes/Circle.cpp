//
// Created by ok on 04.08.24.
//

#include "Circle.h"
#include <cmath>

double Circle::calcArea() {
    return M_PI * getRadius() * getRadius();
}

double Circle::getRadius() {
    return getWidth();
}