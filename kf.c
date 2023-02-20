#include<stdio.h>
#include<string.h>
char upperCase(char s[]);
int main(){
    char a[100];
    FILE *store;
    int c=0,i;
    gets(a);
    int l=strlen(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==a[l-i-1]){
            c++;
        }
    }
    if(c==l){
        upperCase(a);
        store=fopen("store.txt","a");
        fprintf(store,"%s",a);
        fclose(store);
        printf("successful\n");
        store=fopen("store.txt","r");
        fscanf(store,"%s",a);
        puts(a);
        fclose(store);
    }
    else{
        printf("not palindrome");
    }

}
char upperCase(char s[]){
    int i=0;
    while(s[i]!='\0'){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=s[i]-32;
        }
        i++;
    }
    return *s;
}

