#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,decinum=0;
    cout <<"enter the binary number";
    cin>>n;
    int i=1;
    while (n>0){
        int rem=n%10;
        decinum=decinum+(rem*i);
        n=n/10;
        i=i*2;

    }
    cout<<"The decimal equivalent="<<decinum;
    return 0;
}