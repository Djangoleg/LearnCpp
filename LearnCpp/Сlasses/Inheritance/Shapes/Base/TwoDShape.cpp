//
// Created by ok on 04.08.24.
//

#include "TwoDShape.h"

/*
    Triangle tr = Triangle((char *) "right", 8.0, 12.0);
    Rectangle rt = Rectangle(8.0, 12.0);
    Rectangle rt2 = Rectangle(10.0);
    Circle ct = Circle(8.0);

    TwoDShape *shapes[] = {
        &tr,
        &rt,
        &rt2,
        &ct,
    };

    for (auto & shape : shapes) {
        cout << "object is " << shape->getName() << "\n";
        shape->showDim();
        cout << "aria is " << shape->calcArea() << "\n";
        cout << "\n";
    }
*/

void TwoDShape::showDim() {
    cout << "width: " << width << "; height: " << height << ";\n";
}

double TwoDShape::getWidth() {
    return width;
}

double TwoDShape::getHeight() {
    return height;
}

void TwoDShape::setWidth(double w) {
    width = w;
}

void TwoDShape::setHeight(double h) {
    height = h;
}
