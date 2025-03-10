#include <stdio.h>

int main()
{
    int n, maior = 0,cont=0;
    float media, soma=0;

    while(scanf("%d", &n) == 1)
    {
        if(n != 0)
        {
            if(maior < n)
            {
                maior = n;
                
            }
            soma += n;
            cont++;
            media = soma / cont;
            printf("%d ", maior);
            printf("%f\n", media);
        }
        else break;
    }
    return 0;
}