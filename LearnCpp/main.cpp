#include <iostream>
#include <cstring>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
#include "Lessons/bubblesort.h"
#include "Lessons/string_revers.h"
#include "Lessons/quicksort.h"
#include "Lessons/byte_shift.h"
#include "Сlasses/Queue.cpp"
#include "Сlasses/ClassWithPointer.h"
#include "Сlasses/OperatorOverload.h"

using namespace std;


int main()
{
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

    return 0;
}

