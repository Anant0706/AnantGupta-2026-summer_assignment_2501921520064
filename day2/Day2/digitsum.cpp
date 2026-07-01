#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,digitsum=0,rem;
    cout << "enter the no";
    cin>>n;
    while (n>0) {
        rem=n%10;
        digitsum=digitsum+rem;
        n=n/10;

    }
cout<<"Sum of digits=" << digitsum;
return 0;
}