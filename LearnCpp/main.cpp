#include <iostream>
#include <cstring>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
#include "Lessons/bubblesort.h"
#include "Lessons/string_revers.h"
#include "Lessons/quicksort.h"
#include "Lessons/byte_shift.h"

using namespace std;

int my_avg(int i);

int main()
{
    char msg[] = "This is a test.";
    char *key = "xanadu";
    int key_len = strlen(key);
    int rotnum;

    cout << "Original message:" << msg << "\n";

    for (int i = 0; i < strlen(msg); i++)
    {
        rotnum = key[i % key_len] % 8;
        msg[i] = left_rotate(msg[i], rotnum);
    }

    cout << "Encoded message: " << msg << "\n";

    for (int i = 0; i < strlen(msg); i++)
    {
        rotnum = key[i % key_len] % 8;
        msg[i] = right_rotate(msg[i], rotnum);
    }

    cout << "Decoded message: " << msg << "\n";
}

