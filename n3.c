#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n,i,j,c,s,p,k,c1;
    scanf("%d %d",&m,&n);
    int b[m][n],t1[m],t2[n];
    int *arr=(int*)malloc(m*n*sizeof(int));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&*(arr+i*n+j));
            b[i][j]=*(arr+i*n+j);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                c=0,c1=0;
            for(s=0;s<m;s++){
                for(p=0;p<n;p++){
                    if(*(arr+i*n+j)==b[s][p]){
                            c++;
                            b[s][p]=0;
                            t1[c1]=s;
                            t2[c1]=p;
                            c1++;
                    }
                }
            }
            if(c!=1 && c!=0){
                printf("\n%d in position ",*(arr+i*n+j));
                for(k=0;k<c1;k++){
                    printf("(%d %d) ",t1[k],t2[k]);
                }
            }
        }
    }
}
