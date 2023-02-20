#include<stdio.h>
#include<string.h>
struct Playerdata{
    char name[100];
    char country[100];
    int age;
    int ranking;
};
struct Playerdata s[100];
int main()
{
    int n,c=0;
    char a[100];
    printf("enter n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("player name:");
        scanf(" %s",s[i].name);
        printf("country:");
        scanf(" %s",s[i].country);
        printf("age:");
        scanf(" %d",&s[i].age);
        printf("ranking:");
        scanf(" %d",&s[i].ranking);
    }
    printf("enter the player name:");
    scanf("%s",a);
    printf("RESULT:");
    for(int i=0;i<n;i++){
        if(strcmp(a,s[i].name)==0){
        c++;
        printf("\nplayer name:");
        printf(" %s",s[i].name);
        printf("\ncountry:");
        printf(" %s",s[i].country);
        printf("\nage:");
        printf(" %d",s[i].age);
        printf("\nranking:");
        printf(" %d",s[i].ranking);
        }
    }
    if(c==0){
        printf("\n not found");
    }

}
