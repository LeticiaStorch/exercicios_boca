#include <stdio.h>
#include <math.h>

#define pi 3.141592

int main()
{
    float raio;
    scanf("%f", &raio);

    float area = pi*pow(raio,2);

    float am = area / 2;
    float rz = sqrt(am / pi);

    printf("%.2f %.2f", area, rz);
}