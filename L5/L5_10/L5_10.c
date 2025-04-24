#include <stdio.h>

void OrdenaCrescente(int vet[], int qtd)
{
    int i, temp=0,j;
    for(i=0; i < qtd-1; i++)
    {
        for(j=0; j < qtd - i - 1; j++)
        {
        if(vet[j] > vet[j + 1])
        {
            temp = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = temp;
        }
        }
    }
}
//se a anterior for menor que a primeira, então tá crescente 

void ImprimeDadosDoVetor(int vet[], int qtd)
{
    int i;
    printf("{");
    for(i=0; i < qtd; i++)
    {
        printf("%d", vet[i]);
        if(i != qtd-1) printf(", ");
    }
    printf("}");
}

int main()
{
    int i, qtd;
    scanf("%d ", &qtd);
    int vet[qtd];

    for(i=0; i < qtd; i++)
    {
        scanf("%d", &vet[i]);
    }
    OrdenaCrescente(vet, qtd);
    ImprimeDadosDoVetor(vet, qtd);

    return 0;
}