//
// Created by ok on 28.06.24.
//
#include <iostream>
#include "ClassWithPointer.h"
using namespace std;

/*
 * ClassWithPointer cl[2], *p;
    cl[0].set_num(10);
    cl[1].set_num(20);

    p = &cl[0];
    p->show_num();

    p++;
    p->show_num();

    p--;
    p->show_num();

    10
    20
    10
 * */

void ClassWithPointer::set_num(int val)
{
    num = val;
}

void ClassWithPointer::show_num() const
{
    cout << num << "\n";
}