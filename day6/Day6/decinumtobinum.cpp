#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,binum=0;
    cout <<"enter the decimal no.";
    cin>>n;
    int i=1;
    while(n!=0){
        int rem=n%2;
        binum+=rem*i;
        n/=2;
        i*=10;
    }
    cout <<"the binary no. is "<<binum;
    return 0;
}