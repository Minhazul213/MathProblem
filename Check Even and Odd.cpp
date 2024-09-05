#include <iostream>
using namespace std;

bool isEven(int num) {
    return (num % 2 == 0);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (isEven(num))
        cout << num << " is an even number." << endl;
    else
        cout << num << " is an odd number." << endl;
    return 0;
}

