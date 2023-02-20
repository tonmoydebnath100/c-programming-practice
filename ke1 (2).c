#include<stdio.h>
typedef struct Point Point;
struct Point{
    int x;
    int y;
};
int main(){
    int n,i,j;
    double area=0,x;
    scanf("%d",&n);
    Point p[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i].x,&p[i].y);
    }
    for(i=0;i<n;i++){
        if(i==(n-1))
            j=0;
        else
            j=i+1;
        x=(((p[i].x)*(p[j].y)*1.0)-((p[i].y)*(p[j].x)));
        area+=x;
    }
    if(area<0)
        area*=(-1);
    printf("%lf\n",area/2);
    return 0;
}
