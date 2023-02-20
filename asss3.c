#include<stdio.h>
struct complex {
    int real;
    float imaginary;
};
struct complex s[2];
int main(){
    for(int i=0;i<2;i++){
        printf("enter real:");
        scanf("%d",&s[i].real);
        printf("enter imaginary:")
        scanf("%f",&s[i].imaginary);
    }
    for(int i=0;i<2;i++){
        printf("\nsum=%f",s[i].real+s[i].imaginary);
    }

}
