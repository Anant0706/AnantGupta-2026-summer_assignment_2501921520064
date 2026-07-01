#include <bits/stdc++.h>
using namespace std;
int main () {
    int n,flag=0;
    cout <<"Enter the no till which you want to print prime numbers";
    cin>>n;
    for (int i=0;i<=n;i++){
        if (i==1||i==0){
            continue;
        }
        else {
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                flag=1;
                break;
            }
            
            
        }
        if (flag==0){
            cout<<i<<endl;
        }
        
        
    }
    flag=0;
}
}
