
#include <stdio.h>
#include <math.h>
struct Point
{
    int x1;
    int y1;
};

struct Line
{
    struct Point firstEndPoint;
    struct Point secondEndPoint;
};
int main()
{
    int n,p,q;
    printf("Enter number of lines: ");
    scanf("%d",&n);

    double d[n],a,s1,s2;
    struct Line lineAry[n];
    for (p=0;p<n;p++)
    {

        printf("\nEnter first end point of line %d: ",p+1);
        scanf("%d %d",&lineAry[p].firstEndPoint.x1,&lineAry[p].firstEndPoint.y1);

        printf("\nEnter second end point of line %d: ",p+1);
        scanf("%d %d",&lineAry[p].secondEndPoint.x1,&lineAry[p].secondEndPoint.y1);

        s1=((lineAry[p].secondEndPoint.x1-lineAry[p].firstEndPoint.x1)*(lineAry[p].secondEndPoint.x1-lineAry[p].firstEndPoint.x1));

        s2=((lineAry[p].secondEndPoint.y1-lineAry[p].firstEndPoint.y1)*(lineAry[p].secondEndPoint.y1-lineAry[p].firstEndPoint.y1));

        d[p]=(double)sqrt(s1+s2);
    }

    for (p = 0; p < n; ++p)
    {
        for (q = p + 1; q < n; ++q)
        {
            if (d[p] > d[q])
            {
            a = d[p];
            d[p] = d[q];
            d[q] = a;
            }
        }
    }

    printf("\nHighest length of a line is: %f",d[n-1]);
    printf("\nLowest length of a line is : %f",d[0]);
    return 0;
}
