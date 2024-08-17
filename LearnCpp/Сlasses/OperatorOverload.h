//
// Created by ok on 28.06.24.
//

#ifndef LEARNCPP_OPERATOROVERLOAD_H
#define LEARNCPP_OPERATOROVERLOAD_H
#include <iostream>
using namespace std;

class ThreeD {
    int x,y,z;
public:
    ThreeD() { x = y = z = 0; }
    ThreeD(int i, int j, int k) { x = i; y = j; z = k; }

    ThreeD operator+(ThreeD op);
    ThreeD operator-(ThreeD op);
    ThreeD operator++();
    ThreeD operator--();
    ThreeD operator++(int notused);
    ThreeD operator--(int notused);
    ThreeD& operator=(ThreeD op);
    friend ostream &operator<<(ostream &stream, ThreeD op);
    friend istream &operator>>(istream &stream, ThreeD &op);

    void show();

};


#endif //LEARNCPP_OPERATOROVERLOAD_H
