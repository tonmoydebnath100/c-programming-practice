#include<stdio.h>
int maximum(int ar[],int i,int size);
int main(){
    int size,i,max;
    scanf("%d",&size);
    int ar[size];
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    max=maximum(ar,0,size);
    printf("%d",max);
}
int maximum(int ar[],int i,int size){
    int max;
    if(i>=size-2){
        if(ar[i]>ar[i+1])
            return ar[i];
        else
            return ar[i+1];
    }
    max=maximum(ar,i+1,size);
    if(ar[i]>max)
        return ar[i];
    else
        return max;
}
