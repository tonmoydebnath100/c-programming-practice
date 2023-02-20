#include<stdio.h>
double harmonicSum(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=1/i;
    }
    return sum;
}
int main(){
    printf("enter n:");
    int a;
    scanf("%d",&a);
    printf("sum=%lf",harmonicSum(a));
}
