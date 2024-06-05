#include <iostream>
#include <cstring>
//#include "payment_amount.h"
//#include "prime_numbers.h"
//#include "char_exercise.h"
#include "algorithms.h"
#include "string_revers.h"

using namespace std;

int main() {

    char str[] = "my test string";

    cout << "Origin string: " << str << "\n";

    reverse(str);

    cout << "Revers string: " << str << "\n";

    return 0;
}