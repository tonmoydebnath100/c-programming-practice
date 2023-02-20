#include<stdio.h>
double permutation(int n, int r);
double combination(int n, int r);
double factorial(int num);


int main()
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    printf("Permutation = %lf\n", permutation(n, r));
    printf("Combination = %lf", combination(n, r));

}


double permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

double combination(int n, int r)
{
    return permutation(n, r) / factorial(r);
}

double factorial(int num)
{
    double fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
