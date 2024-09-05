#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Sum of the digits is " << sumOfDigits(num) << endl;
    return 0;
}

