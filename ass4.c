#include<stdio.h>
int main()
{
    char a[100];
    int i,l=0,c=0,j;
    printf("enter a string:");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0,j=l-1;a[i]!='\0';i++,j--)
    {
        if(a[i]==a[j]){
            c++;
        }
    }
    if(l==c){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

}
