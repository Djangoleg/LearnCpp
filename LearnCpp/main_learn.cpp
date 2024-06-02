#include <iostream>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
#include "algorithms.h"

using namespace std;

int main() {

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

    return 0;
}