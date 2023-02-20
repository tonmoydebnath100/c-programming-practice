#include<stdio.h>
int productOfDigits(int num);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",productOfDigits(a));
}
int productOfDigits(int num){
    int temp,r,p=1;
    temp=num;
    while(temp!=0){
        r=temp%10;
        p*=r;
        temp=temp/10;
    }
    if(p>=0){
        return p;
    }
    else
        return 0;
}

