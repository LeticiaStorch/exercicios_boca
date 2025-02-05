#include <stdio.h>

int main()
{
    float A, L;
    scanf("%f %f", &A, &L);

    float perimetro = ((2*A)+(2*L));

    printf("%.2f\n", perimetro);
}