#include<stdio.h>
#include<string.h>
int main(){
   char str[25];
   int i;
   printf("Enter the string: ");
   gets(str);
   for(i=0;i<=strlen(str);i++){
      if(str[i]>=65&&str[i]<=90)
         str[i]=str[i]+32;
      else if(str[i]>=97&&str[i]<=122)
         str[i]=str[i]-32;
      else if(str[i]==46)
         str[i]=str[i]+1;
      else if(str[i]==44)
         str[i]=63;
   }
   printf("Output: ");
   puts(str);
}
