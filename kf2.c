#include<stdio.h>
struct student{
    char name[100];
    int id;
    float cgpa;
};
struct student s[3];
int main(){
    int i,j;
    float m=0;
    FILE *f;
    for(i=0;i<3;i++){
        scanf("%s",s[i].name);
        scanf("%d",&s[i].id);
        scanf("%f",&s[i].cgpa);
    }
    for(i=0;i<3;i++){
        if(s[i].cgpa>m){
            m=s[i].cgpa;
            j=i;
        }
    }
    printf("%s",s[j].name);
    printf("\n%d",s[j].id);
    printf("\n%.2f",s[j].cgpa);

    f=fopen("info.txt","a");
    fprintf(f,"%s",s[j].name);
    fprintf(f,"%d",s[j].id);
    fprintf(f,"%.2f",s[j].cgpa);
    fclose(f);

    f=fopen("info.txt","r");
    fscanf(f,"%s",s[j].name);
    fscanf(f,"%d",&s[j].id);
    fscanf(f,"%f",&s[j].cgpa);
    printf("\n%s",s[j].name);
    printf("\n%d",s[j].id);
    printf("\n%.2f",s[j].cgpa);
    fclose(f);
}
