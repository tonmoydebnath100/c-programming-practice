#include<stdio.h>
void listNumberAsc(int start,int end){
    for(int i=start;i<=end;i++){
        printf("%d\n",i);
    }
}
int main(){
    int a,b;
    printf("Start:");
    scanf("%d",&a);
    printf("End:");
    scanf("%d",&b);
    listNumberAsc(a,b);
}
