#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,loc=0;
    cout<<"Enter the no";
    cin>>n;
    if (n==1||n==0) {
        cout<<"Number is neither prime nor composite";
        return 0;
    }
    for (int i=2;i<=n/2;i++) {
        if (n%i==0) {
            loc=1;
            break;
        }
    }
if (loc==1) {
    cout <<"Number is not prime";
}
else {
    cout <<"Number is prime";
}
return 0;
}