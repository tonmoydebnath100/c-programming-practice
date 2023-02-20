#include<stdio.h>
#include <stdlib.h>

int Factorial( int n)
{
    if (n == 0)
        return 1;
    return n * Factorial(n - 1);
}

int Permutation( int n, int r)
 {
     return (Factorial(n)/Factorial(n-r));
 }

int Combination( int n, int r)
 {
     return (Factorial(n)/ (Factorial(n-r)*Factorial(r)));
 }



 int main()
 {
     int *n,*r;
      n = (int *) malloc(1*sizeof(int) );
      r = (int *) malloc(1*sizeof(int) );
     printf("INPUT n and r \n");
     scanf("%d",n);
     scanf("%d",r);

     printf("\nPermutation ( %d , %d ) =  %d \n", *n, *r , Permutation(*n,*r));


     printf("\nCombination ( %d , %d ) =  %d \n", *n, *r , Combination(*n,*r));



     return 0;
 }
