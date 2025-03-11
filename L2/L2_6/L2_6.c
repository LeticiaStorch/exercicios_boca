#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int i;
    double d=0, s1=0, s2=0, s3=0, no=0;
    scanf("%d", &n);

    if(n == 1)
    {
        for(i = 1; i <= 99; i+=2)
        {
            d++;
            s1 += i / d;
        }
        printf("%f", s1);
    }

    if(n == 2)
    {
        for(i = 50; i >= 1; i--)
        {
            d++;
            no = pow(2,d);
            s2 += no / i;
        }
        printf("%f", s2);
    }

    if(n == 3)
    {
        for(i=1; i <= 10; i++)
        {
            d = pow(i,2);
            s3 += i / d;
        }
        printf("%f", s3);
    }
    return 0;
}