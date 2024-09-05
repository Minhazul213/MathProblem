#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; ++i) {
        if (i <= 1) c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}

