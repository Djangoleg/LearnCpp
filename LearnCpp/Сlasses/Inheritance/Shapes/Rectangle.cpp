//
// Created by ok on 04.08.24.
//

#include "Rectangle.h"

bool Rectangle::isSquare() {
    if (getWidth() == getHeight()) {
        return true;
    }
    return false;
}

double Rectangle::calcArea() {
    return getWidth() * getHeight();
}
