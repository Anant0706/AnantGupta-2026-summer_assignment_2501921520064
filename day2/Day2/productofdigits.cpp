#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,pod=1,rem;
    cout << "enter the no.";
    cin>>n;
    while (n>0)  {
        rem=n%10;
        pod=pod*rem;
        n=n/10;

    }
    cout <<"product of digits="<<pod;
    return 0;
}
