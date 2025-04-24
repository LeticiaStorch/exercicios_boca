#include <stdio.h>

void Nota(int N[], int n)
{
    int i, crescente = 1, decrescente = 1, iguais = 1;

    for(i=1; i < n; i++)
    {
        if(N[i] > N[i - 1]) // crescente
        {
            decrescente = 0;
            iguais = 0;
        }
        else if(N[i] < N[i - 1]) // decrescente
        {
            crescente = 0;
            iguais = 0;
        }
        else 
        {
            crescente = 0;
            decrescente = 0;
        }
        
    }
    if(iguais || n == 1) printf("CRESCENTE&DECRESCENTE");
    else if(crescente) printf("CRESCENTE");
    else if(decrescente) printf("DECRESCENTE");
    else printf("DESORDENADO");
}


int main()
{
    int n, i;
    scanf("%d", &n);
    int N[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    Nota(N, n);
    return 0;
}