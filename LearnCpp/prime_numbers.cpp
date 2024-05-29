//
// Created by ok on 29.05.24.
//
#include <vector>

using namespace std;

/*
Use:
int mim_number = 0;
int max_number = 105;

vector<int> primes = generatePrimes(mim_number, max_number);

cout << "Primes between " << mim_number << " and " << max_number << ";\n";

for (int prime: primes)
{
    cout << prime << ";\n";
}
*/

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

vector<int> generatePrimes(int mim_number, int max_number) {
    vector<int> primes;

    for (int num = mim_number; num <= max_number; num++) {
        if (isPrime(num)) {
            primes.push_back(num);
        }
    }

    return primes;
}