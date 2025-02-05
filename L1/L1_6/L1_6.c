#include <stdio.h>

int main()
{
    float n1, n2;
    scanf("%f %f", &n1, &n2);

    float media = (n1 + n2) / 2;

    if(media >= 7)
    {
        printf("%.1f - Aprovado", media);
    } else if(media < 5)
    {
        printf("%.1f - Reprovado", media);
    } else
    {
        printf("%.1f - De Recuperacao", media);
    }
}