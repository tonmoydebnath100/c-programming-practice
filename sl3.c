#include<stdio.h>
int sum(int *ptr,int size);
int main(){
    int size,s=0;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++){
        s+=sum(&a[i],i);
    }
    printf("%d",s);

}
int sum(int *ptr,int size){
    int sum=0;
    if(*ptr%5!=0){
        sum+=*ptr;
    }
    return sum;
}

