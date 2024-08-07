#include <iostream>
#include <cstring>
#include "Сlasses/Inheritance/Shapes/Triangle.h"
#include "Сlasses/Inheritance/Shapes/Circle.h"
#include "Сlasses/Inheritance/Shapes/Rectangle.h"
#include "Сlasses/Inheritance/Shapes/Base/TwoDShape.h"

using namespace std;


int main()
{
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

    return 0;
}

