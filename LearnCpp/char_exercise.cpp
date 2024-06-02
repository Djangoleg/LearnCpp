//
// Created by ok on 01.06.24.
//
#include <iostream>

using namespace std;

/*
Use ansii extended:

    setlocale(LC_ALL, "");

    wchar_t a[] = L"а";
    wchar_t z[] = L"я";

    int start = (int) a[0];
    int end = (int) z[0];

    for (int i = start; i <= end; i++)
    {
        wcout << (wchar_t) i << "\n";
    }
*/

void char_task()
{
    char ch;
    int number_conversions = 0;

    do
    {
        cout << "Enter char: ";
        cin >> ch;

        if (ch >= 'a' && ch <= 'z')
        {
            number_conversions += 1;

            // cout << (int) ch << "\n";

            cout << char ((int) ch - 32) << "\n";

            continue;
        }

        if (ch >= 'A' && ch <= 'Z')
        {
            number_conversions += 1;

            // cout << (int) ch << "\n";

            cout << char ((int) ch + 32) << "\n";

            continue;
        }

        if (number_conversions == 0)
        {
            cout << "You enter: " << ch << "\n";
        }

    }
    while(ch != '.');

    cout << "number_conversions: " << number_conversions << ";";
}