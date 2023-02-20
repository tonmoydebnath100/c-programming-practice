#include<stdio.h>
int main(){
    char a[100],b[100];
    int c,i,j,d[100];
    printf("input: ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
        d[i]=0;
    }
    b[i]='\0';
    for(i=0;a[i]!='\0';i++){
            c=0;
        for(j=0;b[j]!='\0';j++){
            if(a[i]==b[j] && a[i]!=' '){
                c++;
                b[j]='0';
            }
        }
        d[i]=c;
    }
    int max=0,s;
    for(i=0;a[i]!='\0';i++){
        if(d[i]>max){
            max=d[i];
            s=i;
        }
    }
    printf("The letter maximum frequency is '%c' and the frequency is %d",a[s],max);

}
