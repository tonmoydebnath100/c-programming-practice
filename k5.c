#include<stdio.h>
int sumOfDigits(int x){
    int sum=0,temp,r;
    temp=x;
    while(temp!=0){
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    return sum;
}
int main(){
    int a;
    printf("enter digit:");
    scanf("%d",&a);
    printf("sum of digits:%d",sumOfDigits(a));
}
