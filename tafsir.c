#include<stdio.h>
struct student{
    char name[30];
    int id;
    char dept[10];
    float cgpa;
};
struct student s[3];
int main()
{
    int count=0;
    FILE *student;
    for(int i=0;i<3;i++){
       count++;
       printf("enter student name:");
       scanf(" %s",&s[i].name);
       printf("enter student id:");
       scanf(" %d",&s[i].id);
       printf("enter student dept:");
       scanf(" %s",s[i].dept);
       printf("enter student cgpa:");
       scanf(" %f",&s[i].cgpa);
    }
    student=fopen("student.txt","w");
    fprintf(student,"%d",count);
    for(int i=0;i<3;i++){
        fprintf(student,"\n%s",s[i].name);
        fprintf(student,"\n%d",s[i].id);
        fprintf(student,"\n%s",s[i].dept);
        fprintf(student,"\n%.2f",s[i].cgpa);
    }
    fclose(student);
    student=fopen("student.txt","r");
    fscanf(student,"%d",&count);
    for(int i=0;i<3;i++){
        fscanf(student,"%s",s[i].name);
        fscanf(student,"%d",&s[i].id);
        fscanf(student,"%s",s[i].dept);
        fscanf(student,"f",&s[i].cgpa);
    }
    for(int i=0;i<3;i++){
        printf("\n%s",s[i].name);
        printf("\n%d",s[i].id);
        printf("\n%s",s[i].dept);
        printf("\n%.2f",s[i].cgpa);
    }
}
