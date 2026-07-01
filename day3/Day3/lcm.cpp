#include <bits/stdc++.h>
using namespace std;
int main () {
    int a,b;
    cout <<"Enter the two numbers to find their LCM";
    cin>>a>>b;
    int x = a;
    int y = b;
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    int gcd = x;
    int lcm = (a * b) / gcd;
    cout << "LCM of " << a << " and " << b << " is: " << lcm << endl;
    return 0;
}