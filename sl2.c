#include<stdio.h>
#include<math.h>
double area(int n,double side);
int main(){
    int n;
    double s;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter length of each sides :");
    scanf("%lf",&s);
    printf("the area of polygon is %lf",area(n,s));

}
double area(int n,double side){
    double area;
    area=(n*side*side)/(4*tan(3.1416/n));
    return area;
}
