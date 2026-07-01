#include <bits/stdc++.h>
using namespace std;
int main () {
    int a=0, b=1, n;
    cin >> n;
    for (int i=0; i<n-1; i++) {
        int c = a + b;
        a = b;
        b = c;
    }
    cout << a << endl;
    return 0;
}