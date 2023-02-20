#include<stdio.h>
#include<string.h>
int main(){
    int N;
    char a;
    printf("Enter a english letter:");
    scanf("%c",&a);
    printf("Enter N:");
    scanf("%d",&N);
    printf("output:");
    if(a>='A' && a<='Z'){
        if(a+N<='Z'){
            printf("%c",a+N);
        }
        else{
            int b='Z'-a;
            int c=N-b;
            printf("%c",64+c);
        }
    }
    if(a>='a' && a<='z'){
        if(a+N<='z'){
            printf("%c",a+N);
        }
        else{
            int b='z'-a;
            int c=N-b;
            printf("%c",96+c);
        }
    }
}
