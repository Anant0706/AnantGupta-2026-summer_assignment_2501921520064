#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, sum=0, temp;
    cin >> n;
    temp = n;
    while (temp > 0) {
        int r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if (sum == n) cout << "Armstrong Number" << endl;
    else cout << "Not an Armstrong Number" << endl;
    return 0;
}