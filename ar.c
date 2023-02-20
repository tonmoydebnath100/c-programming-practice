#include<stdio.h>
int main()
{
    int x1,v1,x2,v2,c=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(int i=x1,j=x2;i<100;i+v1,j+v2){
        if(i==j){
            c++;
            break;
        }
    }
    if(c==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
