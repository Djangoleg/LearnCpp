#include <iostream>
#include <vector>
#include "payment_amount.h"
#include "prime_numbers.h"

using namespace std;



int main() {
    int mim_number = 0;
    int max_number = 105;

    vector<int> primes = generatePrimes(mim_number, max_number);

    cout << "Primes between " << mim_number << " and " << max_number << ";\n";

    for (int prime: primes)
    {
        cout << prime << ";\n";
    }

    return 0;
}