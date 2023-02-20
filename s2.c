#include<stdio.h>
int main(){
    FILE *input,*output;
    int count=0,count1=0,k,i;
    input=fopen("input.txt","r");
    output=fopen("output.txt","w");
    while(fscanf(input,"%d",&k)==1){
        for(i=2;i<k;i++)
        {
            if(k%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && k!=1){
            count1++;
            fprintf(output,"%d ",k);
        }
    }
    if(count1==0)
        fprintf(output,"No prime number found");
    fclose(input);
    fclose(output);
    printf("successful");
}

