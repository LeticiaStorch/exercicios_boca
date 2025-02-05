#include <stdio.h>

int main()
{
    float x1, y1, x2, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    float perimetro = 2*((x2 - x1) + (y2 -  y1));

    printf("%.2f", perimetro);
}