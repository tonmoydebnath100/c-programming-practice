#include<stdio.h>
int sumOfDigits(int num);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    printf("%d",sumOfDigits(a));
}
int sumOfDigits(int num){
    int temp,r,sum=0;
    temp=num;
    while(temp!=0){
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    if(sum>=0){
        return sum;
    }
    else
        return 0;
}
