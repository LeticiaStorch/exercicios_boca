#include <stdio.h>

int main()
{
    int soma = 0;
    float media = 0;
    int i,j;
    int num;
    int n, maior = 0, menor = 9999999, par=0, impar=0;
    
    scanf("%d", &n);
    

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        soma += num;
        if (num > maior)
        {
            maior = num;
        }
        if (num < menor)
        {
            menor = num;
        }
        if (num % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    media = (float)soma/n;

    printf("%d %d %d %d %f", maior, menor, par, impar, media);

    return 0;
}