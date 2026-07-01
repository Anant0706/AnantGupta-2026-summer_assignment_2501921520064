#include <bits/stdc++.h>
using namespace std;
int main () {
    int a=0, b=1, n;
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}