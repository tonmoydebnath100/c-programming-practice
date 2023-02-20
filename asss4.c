#include<stdio.h>
struct model {
    int x;
    int y;
};
struct model s[2];
int main(){
    for(int i=1;i<=2;i++){
        printf("x%d:",i);
        scanf("%d",&s[i].x);
        printf("y%d:",i);
        scanf("%d",&s[i].y);
    }
        printf("\nM.D=%d",(abs(s[1].x-s[2].x)+abs(s[1].y-s[2].y)));



}
