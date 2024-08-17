//
// Created by ok on 28.06.24.
//
#include <iostream>
#include "OperatorOverload.h"
using namespace std;

/*
    ThreeD a(1,2,3), b(10, 10, 10), c;

    cout << "Original value of a: ";
    a.show();

    cout << "Original value of b: ";
    b.show();

    cout << "\n";

    c = a + b;

    cout << "Value c after c = a + b: ";
    c.show();

    c = a + b + c;

    cout << "Value c after c = a + b + c: ";
    c.show();

    cout << "\n";

    cout << "Value a: ";
    a.show();

    c = b = a;
    cout << "Value c after c = b = a: ";
    c.show();

    cout << "Value b after c = b = a: ";
    b.show();

    cout << "Value a after ++a: ";
    ++a;
    a.show();

    cout << "Value a after a++: ";
    a++;
    a.show();

    cout << "Value a after --a: ";
    --a;
    a.show();

    cout << "Value a after a--: ";
    a--;
    a.show();

    c = a - b;

    cout << "Value c after c = a - b: ";
    c.show();

    ThreeD x(1,2,3);
    cout << x;
    cin >> x;
    cout << x;

 */

ThreeD ThreeD::operator+(ThreeD op)
{
    ThreeD t;
    t.x = x + op.x;
    t.y = y + op.y;
    t.z = z + op.z;
    return t;
}

ThreeD ThreeD::operator-(ThreeD op)
{
    ThreeD t;
    t.x = x - op.x;
    t.y = y - op.y;
    t.z = z - op.z;
    return t;
}

ThreeD ThreeD::operator++()
{
    ThreeD t = *this;

    x++;
    y++;
    z++;

    return t;
}

ThreeD ThreeD::operator++(int notused)
{
    x++;
    y++;
    z++;

    return *this;
}

ThreeD ThreeD::operator--()
{
    ThreeD t = *this;

    x--;
    y--;
    z--;

    return t;
}

ThreeD ThreeD::operator--(int notused)
{
    x--;
    y--;
    z--;

    return *this;
}

ThreeD& ThreeD::operator=(ThreeD op)
{
    x = op.x;
    y = op.y;
    z = op.z;

    return *this;
}

void ThreeD::show()
{
    cout << x << ", " << y << ", " << z << ";\n";
}

ostream &operator<<(ostream &stream, ThreeD op)
{
    stream << op.x << ", ";
    stream << op.y << ", ";
    stream << op.z << "\n";
    return stream;
}

istream &operator>>(istream &stream, ThreeD &op)
{
    cout << "Enter X,Y,Z values: ";
    stream >> op.x >> op.y >> op.z;
    return  stream;
}