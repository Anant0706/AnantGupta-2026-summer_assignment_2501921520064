#include <bits/stdc++.h>
using namespace std;
int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else if (x==y){
        return 0;
    }
    else{
        return y;
    }

}
int main (){
    int a,b;
    cin>>a>>b;
    cout<<maximum(a,b);
    return 0;
}