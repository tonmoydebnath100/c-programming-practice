#include<stdio.h>
int main()
{
    char a[100],b[50];
    int i,l=0,j;
    printf("enter 1st string:");
    gets(a);
    printf("enter 2nd string:");
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0,j=l;b[i]!='\0';i++)
    {
        a[j++]=b[i];
    }
    a[j]='\0';
    puts(a);
}
