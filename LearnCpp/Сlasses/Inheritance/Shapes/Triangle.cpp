//
// Created by ok on 04.08.24.
//

#include "Triangle.h"
#include "Base/TwoDShape.h"

double Triangle::calcArea() {
    return getWidth() * getHeight() / 2;
}

void Triangle::showStyle() {
    cout << "Triangle is " << style << "\n";
}

