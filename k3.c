#include<stdio.h>
void listNumberDese(int start,int end){
    for(int i=end;i>=start;i--){
        printf("%d\n",i);
    }
}
int main(){
    int a,b;
    printf("Start:");
    scanf("%d",&a);
    printf("End:");
    scanf("%d",&b);
    listNumberDese(a,b);
}
