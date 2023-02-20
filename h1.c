#include<stdio.h>
int main(){
    int y,c;
    scanf("%d",&y);
    if(y%4==0&&(y<1918||y%400==0||y%100!=0)){
        c=244;
    }
    else if(y==1918){
        c=230;
    }
    else
        c=243;
    printf("%d.09.%d",(256-c),y);
}
