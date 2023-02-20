#include<stdio.h>
int main(){
    char a[100];
    char b;
    printf("input: ");
    gets(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'|| a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){

        }
        else if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')){
           b=a[i];
           break;
        }
    }
    printf("output: %c",b);
}
