#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int c1=0,c2=0,c3=0,c4=0;
    printf("enter your password:");
    gets(a);
    int l=strlen(a);
    if(l>=8){
        for(int i=0;a[i]!='\0';i++){
            if(a[i]>='a' && a[i]<='z'){
                c1++;
            }
            else if(a[i]>='A' && a[i]<='Z'){
                c2++;
            }
        }
        if(c1>=1 && c2>=1){
            for(int i=0;a[i]!='\0';i++){
                if(a[i]==' '){
                    c3++;
                    break;
                }
            }
            if(c3==0){
               for(int i=0;a[i]!='\0';i++){
                    if(a[i]>='0' && a[i]<='9'){
                        c4++;
                        break;
                    }
                }
                if(c4==1){
                    printf("Strong password");
                }
                else
                    printf("weak password");
            }
            else
                printf("weak password");
        }
        else
            printf("weak password");
    }
    else
        printf("weak password");
}
