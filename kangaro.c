#include<stdio.h>
int main(){
    int x1,x2,v1,v2,i,j,c=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x2>x1 && v2>v1){
        printf("NO");
    }
    else if((x2+v2)%(v1+x1)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
