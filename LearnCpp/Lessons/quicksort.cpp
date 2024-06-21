//
// Created by ok on 11.06.24.
//

#include "quicksort.h"

/*
char str[] = "fgljkgvbnxmjljdsfiusd";
cout << "Original: " << str << "\n";
quicksort(str, strlen(str));
cout << "Sorted: " << str << "\n";
*/

void quicksort(char *item, int len)
{
    qs(item, 0, len - 1);
}

void qs(char *item, int left, int right)
{
    int i, j;
    char x, y;

    i = left;
    j = right;

    x = item[ (left + right) / 2 ];

    do
    {
        while ((item[i] < x) && (i < right)) i++;
        while ((x < item[j]) && (j > left)) j--;

        if (i < j)
        {
            y = item[i];
            item[i] = item[j];
            item[j] = y;
            i++;
            j--;
        }

    } while (i <= j);

    if (left < j)
    {
        qs(item, left, j);
    }

    if (i < left)
    {
        qs(item, i, right);
    }
}