#include<stdio.h>
int minimum(int ar[],int i,int size);
int main(){
    int size,i,mini;
    scanf("%d",&size);
    int ar[size];
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    mini=minimum(ar,0,size);
    printf("%d",mini);
}
int minimum(int ar[],int i,int size){
    int mini;
    if(i>=size-2){
        if(ar[i]<ar[i+1])
            return ar[i];
        else
            return ar[i+1];
    }
    mini=minimum(ar,i+1,size);
    if(ar[i]<mini)
        return ar[i];
    else
        return mini;
}

