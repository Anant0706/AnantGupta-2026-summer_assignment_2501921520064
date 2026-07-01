#include <bits/stdc++.h>
using namespace std;
int facto(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main (){
    int a;
    cin>>a;
    cout<<facto(a);
    return 0;
}