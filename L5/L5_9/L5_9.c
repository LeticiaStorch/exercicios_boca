#include <stdio.h>

void Invertenum(int N[], int n)
{
    int i, inverso=0, ultposi=n-1, temp=0;
    for(i=0; i < n/2; i++) // n/2 pq estou utilizando o num do meio como referência para inverter e dá certo msm com num ímpar, pois o num ímpar ja esta na posição correta
    {
        temp = N[i];
        N[i] = N[ultposi]; //assim acessa a ultima posição até a metade, ultposi eu inicializo ela como A ultima posição msm, dps eu só decremetno
        N[ultposi] = temp;
        ultposi--;
    }
    temp++;
}
//maior posição

void ImprimeDadosDoVetor(int N[], int n)
{
    int i;
    printf("{");
    for(i=0; i < n; i++)
    {
        printf("%d", N[i]);
        if(i != n-1) printf(",");
    }
    printf("}");
}

int main()
{
    int i,n;
    scanf("%d", &n);
    int N[n];

    for(i=0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    Invertenum(N, n);
    ImprimeDadosDoVetor(N, n);
    return 0;
}