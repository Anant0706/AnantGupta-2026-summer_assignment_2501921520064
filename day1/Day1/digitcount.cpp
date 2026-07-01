#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,digitcount=0;
    cout << "enter the no.";
    cin>>n;
    while (n>0) {
        digitcount+=1;
        n=n/10;
    }
    cout <<"digit count=" << digitcount;
    return 0;
}