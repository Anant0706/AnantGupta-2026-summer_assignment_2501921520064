#include <stdio.h>
#include <math.h>
int main(){
    int n,c,s,n1,n2,i,r;
    for(i=1;i<=1000;i++){n=i;
    c=0;s=0;n1=n;
    while(n1!=0){c=c+1;
    n=n/10;}
n2=n1;
while(n1!=0){
    r=n1%10;
    s= s+pow(r,c);
    n1=n1/10;
}
if(s==n2){
    printf("%d is an armstrong number" ,n2);
}
}
return 0;
}