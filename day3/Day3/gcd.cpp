#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    long long x = a;
    long long y = b;
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }

    if (x < 0) x = -x;
    cout << "GCD(" << a << ", " << b << ") = " << x << "\n";
    return 0;
}
