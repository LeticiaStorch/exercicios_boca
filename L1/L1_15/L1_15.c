#include <stdio.h>

int main()
{
    int n, i, algarismo;
    scanf("%d %d", &n, &i);

    if (i == 1)
    {
        algarismo = n % 10;
    }
    if (i == 2)
    {
        algarismo = (n / 10) % 10;
    }
    if (i == 3)
    {
        algarismo = (n / 100) % 10;
    }

    if (algarismo % 2 == 0)
        printf("PAR");
    else
        printf("IMPAR");
}