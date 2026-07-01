#include <bits/stdc++.h>
using namespace std;
int prime(int x){
    int flag=0;
    if (x==0||x==1){
        cout<<"Neither prime nor composite";
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
flag=1;
break;
    }
}
    if (flag==1){
        cout<<"Not prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}
int main (){
    int a;
    cin>>a;
    prime(a);
    return 0;
}
