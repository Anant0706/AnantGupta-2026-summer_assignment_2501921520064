#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,rev=0,rem;
    cout << "enter the no";
    cin>>n;
    while (n>0) {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
        }
        cout<< "reverse of the no="<<rev;
        return 0;
}