#include <iostream>
using namespace std;

// Function to check if a number is perfect
bool isPerfect(int n) {
    if (n <= 1) return false;
    
    int sum = 0;
    // Iterate from 1 to n/2 to find all divisors
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    // Return true if sum of divisors equals the number
    return sum == n;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPerfect(num)) {
        cout << num << " is a Perfect Number." << endl;
    } else {
        cout << num << " is not a Perfect Number." << endl;
    }

    return 0;
}   