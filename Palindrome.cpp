#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num, reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return (reversed == originalNum);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    if (isPalindrome(num))
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;
    return 0;
}

