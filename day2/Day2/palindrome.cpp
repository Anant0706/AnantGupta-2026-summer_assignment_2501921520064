#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n,rev=0,rem,temp;
    cout << "enter the no";
    cin>>n;
    temp=n;
    while (n>0) {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
        }
        if (rev==temp) {
            cout << "number is palindrome";

        }
        else {
            cout <<"number is not palindrome";
        }
        return 0;
}
