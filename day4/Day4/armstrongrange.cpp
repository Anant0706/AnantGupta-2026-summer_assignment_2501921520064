#include <bits/stdc++.h>
using namespace std;
int main () {
    int n, sum=0, temp;
    cin >> n;
    
    for (int i=1;i<=n;i++){
        temp = i;
        sum=0;
        while (temp > 0) {
            int r = temp % 10;
            sum += r * r * r;
            temp /= 10;
        }
        if (sum == i) cout << i << " ";

    }
    return 0;
}