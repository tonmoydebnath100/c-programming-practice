#include<stdio.h>
int maximum(int a[],int n);
void deleteitems(int a[],int n,int index);
int main(){
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int index=maximum(a,n);

    deleteitems(a,n,index);
}
int maximum(int a[],int n){
    int b[100];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for (int i = 1; i < n; ++i) {
        if (b[0] < b[i])
            b[0] = b[i];
    }
    int f=b[0];
    return f;
}
void deleteitems(int a[],int n,int index){
    printf("maximum value=%d",index);
    printf("\nafter delete the maximum value:");
    for(int i=0;i<n;i++){
        if(index!=a[i]){
            printf("%d ",a[i]);
        }
    }
}
