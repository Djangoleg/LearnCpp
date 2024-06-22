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

using namespace std;


int main()
{
    Queue bigQueue(100);
    for (int i = 0; i < 26; i++)
    {
        bigQueue.set('A' + i);
    }

    for (int i = 0; i < 26; i++)
    {
        cout << bigQueue.get() << ",";
    }

    cout << "\n\n";

    Queue smallQueue(10);

    for (int i = 0; i < 26; i++)
    {
        if (!smallQueue.is_full())
        {
            smallQueue.set('Z' - i);
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (!smallQueue.is_empty())
        {
            cout << smallQueue.get() << ",";
        }
    }

    cout << "\n\n";
}

