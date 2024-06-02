//
// Created by ok on 02.06.24.
//
#include <iostream>
#include "algorithms.h"

using namespace std;

/*
    How use:
    int arr[] = {9, 5, 7, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size: " << size << ";\n";

    printArray(arr, size);

    bubbleSortOne(arr, size);

    printArray(arr, size);

    int arr2[] = {9, 5, 7, 0 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "size2: " << size2 << ";\n";

    printArray(arr2, size2);

    bubbleSortTwo(arr2, size2);

    printArray(arr2, size2);
*/

void bubbleSortOne(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = size - 1; j > i; j--)
        {
            if (arr[j - 1] > arr[j])
            {
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void bubbleSortTwo(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << "\n";
}

