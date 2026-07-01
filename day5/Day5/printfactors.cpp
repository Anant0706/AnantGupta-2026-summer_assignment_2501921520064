#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cout <<"Enter the no.";
    cin>>n;
    cout<<"The factors of the number are-\n";
    for (int i =1;i<=n;i++) {
        if (n%i==0) {
            cout <<i<<"\n";
        }
    }
    return 0;
}