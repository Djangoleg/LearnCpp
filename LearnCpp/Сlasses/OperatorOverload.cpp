//
// Created by ok on 28.06.24.
//
#include <iostream>
#include "OperatorOverload.h"
using namespace std;


ThreeD ThreeD::operator+(ThreeD op)
{
    ThreeD t;
    t.x = x + op.x;
    t.y = y + op.y;
    t.z = z + op.z;
    return t;
}

ThreeD ThreeD::operator++()
{
    x++;
    y++;
    z++;

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