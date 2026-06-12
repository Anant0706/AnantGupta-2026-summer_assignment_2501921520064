#include <iostream>
using namespace std;

bool isPalindromeNumber(int num) {
    if (num < 0) return false; // Negative numbers are not palindromes
    int original = num;
    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindromeNumber(num))
        cout << num << " is a palindrome." << endl;
    else
        cout << num << " is not a palindrome." << endl;
    return 0;
}   