#include <stdio.h>

int main()
{
    float temp;
    char uni;
    scanf("%f %c", &temp, &uni);

    if(uni == 'c' || uni == 'C')
    {
        float f = (temp * 9 / 5) + 32;
        printf("%.2f (F)", f);
    } else if(uni == 'F' || uni == 'f')
    {
        float c = (temp - 32) * 5 / 9;
        printf("%.2f (C)", c);
    }
}