#include<stdio.h>
int main(){
    char a[100],b[100];
    int c,i,j,d[100];
    printf("input: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }
    b[i]='\0';
    for(i=0;a[i]!='\0';i++){
            c=0;
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j] && a[i]!=' '){
                c++;
            }
        }
        if(c==1){
            printf("the letter with the minimum frequency is '%c' and the frequency is %d",a[i],c);
            break;
        }
    }

}
