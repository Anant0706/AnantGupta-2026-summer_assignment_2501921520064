#include <bits/stdc++.h>
using namespace std;
int reverse(int n) {
    static int rev = 0;
    if (n == 0) {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverse(n / 10);
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Reverse of " << n << " is " << reverse(n) << endl;
    return 0;
}