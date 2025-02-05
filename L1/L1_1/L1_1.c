#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2;
    float r1, r2;
    scanf("%d %d", &n1, &n2);

    r1 = sqrt(n1);
    r2 = sqrt(n2);

    float soma = r1 + r2;

    printf("%.2f\n", soma);
}