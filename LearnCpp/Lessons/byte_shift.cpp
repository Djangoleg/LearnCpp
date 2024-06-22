//
// Created by ok on 19.06.24.
//
#include <iostream>
#include "byte_shift.h"
using namespace std;

/*
Use:

1) Decode encode string:
    char msg[] = "This is a test.";
    char *key = "proverka321";
    int key_len = strlen(key);
    int rotnum;

    cout << "Original message:" << msg << "\n";

    for (int i = 0; i < strlen(msg); i++)
    {
        rotnum = i == 0 ? key[3 % key_len] % 8 : key[i % key_len] % 8;
        msg[i] = left_rotate(msg[i], rotnum);
    }

    cout << "Encoded message: " << msg << "\n";

    for (int i = 0; i < strlen(msg); i++)
    {
        rotnum = i == 0 ? key[3 % key_len] % 8 : key[i % key_len] % 8;
        msg[i] = right_rotate(msg[i], rotnum);
    }

    cout << "Decoded message: " << msg << "\n";

2) For char. Use ANSI table.
    char ch = 'T';
    cout << "Original value in binary:\n";
    show_binary(ch);
    cout << "\n";

    cout << "Rotating right 8 times:\n";
    for (int i = 0; i < 8; i++)
    {
        ch = right_rotate(ch, 1);
        show_binary(ch);
    }

    cout << "\n";
    cout << "Original value in binary:\n";
    show_binary(ch);
    cout << "\n";

    cout << "Rotating left 8 times:\n";
    for (int i = 0; i < 8; i++)
    {
        ch = left_rotate(ch, 1);
        show_binary(ch);
    }
*/

unsigned char left_rotate(unsigned char val, int n)
{
    unsigned int t;
    t = val;

    for (int i = 0; i < n; i++)
    {
        t = t << 1;
        if (t & 256)
        {
            t = t | 1; // Set 1 on right.
        }
    }

    return t;
}

unsigned char right_rotate(unsigned char val, int n)
{
    unsigned int t;
    t = val;

    t = t << 8;

    for (int i = 0; i < n; i++)
    {
        t = t >> 1;
        if (t & 128)
        {
            t = t | 32768; // Set 1 on left.
        }
    }

    t = t >> 8;

    return t;
}

void show_binary(unsigned int u)
{
    int count = 0;

    for (int t = 128; t > 0; t = t / 2)
    {
        if (count % 4 == 0)
        {
            cout << " ";
        }

        if (u & t)
        {
            cout <<  "1 ";
        }
        else
        {
            cout << "0 ";
        }

        count++;
    }

    cout << "\n";
}

void show_binary16(unsigned int u)
{
    int count = 0;

    for (int t = 32768; t > 0; t = t / 2)
    {
        if (count % 4 == 0)
        {
            cout << " ";
        }

        if (u & t)
        {
            cout <<  "1 ";
        }
        else
        {
            cout << "0 ";
        }

        count++;
    }

    cout << "\n";
}

/*
'T' = 84 -> 01010100

128, 64, 32, 16, 8, 4, 2, 1

&
01010100
10000000
--------
00000000
0

01010100
01000000
--------
01000000
1

01010100
00100000
--------
00000000
0

01010100
00010000
--------
00010000
1

01010100
00001000
--------
00000000
0

01010100
00000100
--------
00000100
1

01010100
00000010
--------
00000000
0


01010100
00000001
--------
00000000
0

0 1 0 1 0 1 0 0
*/