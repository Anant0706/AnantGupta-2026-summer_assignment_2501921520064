#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    int facto=1;
    if (n==0) {
        return 1;
    }
    for (int i=1;i<=n;i++) {
        facto=facto*i;
    }
    return facto;
}
int main () {
    int a,sum=0;
    cout <<"Enter the no";
    cin>>a;
    if (a==0) {
        cout<<"Not a strong number"; 
        return 0;
    }
    int temp=a;
    while (a>0) {
        int rem=a%10;
        sum=sum+fact(rem);
        a=a/10;
    }
    if (sum==temp){
        cout <<"number is strong";
    }
    else {
        cout <<"number isn't strong";
    }
    return 0;

}