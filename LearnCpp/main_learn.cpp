#include <iostream>
#include <cstring>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
#include "bubblesort.h"
#include "string_revers.h"
#include "quicksort.h"

using namespace std;

int main() {

    char str[] = "fgljkgvbnxmjljdsfiusd";
    cout << "Original: " << str << "\n";
    quicksort(str, strlen(str));
    cout << "Sorted: " << str << "\n";
}
