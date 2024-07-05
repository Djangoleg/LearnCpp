#include <iostream>
#include <cstring>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
//#include "Lessons/bubblesort.h"
//#include "Lessons/string_revers.h"
//#include "Lessons/quicksort.h"
//#include "Lessons/byte_shift.h"
//#include "Сlasses/Queue.cpp"
//#include "Сlasses/ClassWithPointer.h"
//#include "Сlasses/OperatorOverload.h"
#include "Сlasses/CharSet.h"

using namespace std;


int main()
{
    CharSet s1,s2,s3;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';

    cout << "s1 After adding A B C: ";
    s1.showset();

    cout << "\n";

    cout << "Membership \n";

    if (s1.isMember('B'))
    {
        cout << "B is a member of s1.\n";
    }
    else
    {
        cout << "B is not a member of s1.\n";
    }

    if (s1.isMember('T'))
    {
        cout << "T is a member of s1.\n";
    }
    else
    {
        cout << "T is not a member of s1.\n";
    }

    cout << "\n";

    s1 = s1 - 'B';
    cout << "s1 After s1 = s1 - B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 + 'B';
    cout << "s1 After s1 = s1 + B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'A';
    cout << "s1 After s1 = s1 - A: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'B';
    cout << "s1 After s1 = s1 - B: ";
    s1.showset();

    cout << "\n";

    s1 = s1 - 'C';
    cout << "s1 After s1 = s1 - C: ";
    s1.showset();

    cout << "\n";

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';

    cout << "s1 After adding A B C: ";
    s1.showset();

    s2 = s2 + 'A';
    s2 = s2 + 'X';
    s2 = s2 + 'W';

    cout << "s2 After adding A X W: ";
    s2.showset();

    cout << "\n";

    s3 = s1 + s2;
    cout << "s3 After adding s3 = s1 + s2: ";
    s3.showset();

    cout << "\n";

    s3 = s3 - s1;
    cout << "s3 After adding s3 = s3 - s1: ";
    s3.showset();

    cout << "\n";

    s2 = s2 - s2;
    cout << "s2 After adding s2 = s2 - s2: ";
    s2.showset();

    cout << "\n";

    s2 = s2 + 'C';
    s2 = s2 + 'B';
    s2 = s2 + 'A';

    cout << "s2 After adding C B A: ";
    s2.showset();

    return 0;
}

