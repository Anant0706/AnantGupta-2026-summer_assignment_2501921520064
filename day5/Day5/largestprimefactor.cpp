#include <bits/stdc++.h>
using namespace std;
int primo (int b) {
    int flag=0;
    if (b==1){
        return 0;

    }
    for (int i=2;i<=b/2;i++) {
        if (b%i==0) {
            flag=1;
        }
    }
    if (flag==0){
        return b;

    }
    else {
        return 0;
    }
}
int main () {
    int n;
    cin>>n;
    if (n==1){
        cout<<"Largest prime factor=1";
        return 0;
    }
    int largest=INT_MIN;
    for (int i=1;i<=n;i++) {
        if (n%i==0) {
            if (i>largest ){
                if (primo(i)!=0){
            largest=primo(i);
                }
            }
        }
    }
    cout <<"largest prime factor=" <<largest;
    return 0;
}