#include<stdio.h>
int f(int n,int i,int x){
    if(!(--n))
        return x*x;
    return (x*x)+f(n,i+2,x+(i*i));
}
int main(){
    int n,i=1,sum=0,x=1,j;
    scanf("%d",&n);
    printf("%d\n",f(n,i,x));
    return 0;
}
