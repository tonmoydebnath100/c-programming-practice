#include<stdio.h>
int main(){
    int i;
    char a[100];
    gets(a);
    char *p=a;
    do{
        *p='0';
        p++;
    }while(*p!=' ');
    *p='0';
    while(*p!='\0'){
        if(*p!='0'){
            printf("%c",*p);
        }
        p++;
    }
}
