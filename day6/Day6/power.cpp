#include <bits/stdc++.h>
using namespace std;
int main () {
    int power,base,result=1,count=0;
    cout<<"Enter the base\n";
    cin>>base;
    cout <<"Enter the power\n";
    cin>>power;
    while (count<power){
    result=result*base;
    count++;
}
cout<<"Result="<<result;
return 0;
}