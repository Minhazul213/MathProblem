#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfPrimes(int limit) {
    int sum = 0;
    for (int num = 2; num <= limit; ++num) {
        if (isPrime(num))
            sum += num;
    }
    return sum;
}

int main() {
    int limit;
    cout << "Enter the upper limit: ";
    cin >> limit;
    cout << "Sum of prime numbers up to " << limit << " is " << sumOfPrimes(limit) << endl;
    return 0;
}

