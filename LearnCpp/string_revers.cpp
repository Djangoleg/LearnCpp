//
// Created by ok on 05.06.24.
//
#include <iostream>
#include <cstring>

using namespace std;

/*
Use:

char str[] = "my test string";
cout << "Origin string: " << str << "\n";
reverse(str);
cout << "Revers string: " << str << "\n";
 */

void reverse(char str[])
{
    char *str_pointer, *start, *end;
    int len;
    char temp;

    str_pointer = str;

    //len = strlen(str);

    // Count element numbers.
    len = 0;
    while(*str_pointer)
    {
        len++;
        str_pointer++;
    }

    start = str;
    end = &str[len - 1];

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}