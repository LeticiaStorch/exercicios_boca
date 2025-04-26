#include <stdio.h>

#define VERDADEIRO 1
#define FALSO 0

int verificaMaiuscula(char letra)
{
    if(letra >= 'A' && letra <= 'Z') return VERDADEIRO;
    else return FALSO;
}

int verificaMinuscula(char letra)
{
    if(letra >= 'a' && letra <= 'z') return VERDADEIRO;
    else return FALSO;
}

int CalculaValorPalavra()
{
    char l;
    int soma = 0;
    while(scanf("%c", &l) == 1 && l != '\n')
    {
        if(verificaMaiuscula(l)) soma += l - 38;
        else if(verificaMinuscula(l)) soma += l - 96;
    }
    return soma;
}

int EhPrimo(int n)
{
    int i;
    if(n == 1) return FALSO;
    else
    {
        for(i = 2; i < n; i++)
        {
            if(!(n%i)) return FALSO;
        }
        return VERDADEIRO;
    }
}

int ProximoPrimo(int n)
{
    while(1)
    {
        int i, cont = 0;
        n++;
        if(n == 1) cont++; //conto os divisores

        for(i = 2; i < n; i++)
        {
            if(n%i == 0) cont++; //conto os divisores
        }

        if(!(cont)) break; //aq qnd eu nego eu estou vendo se cont eh igaul a 0
    }
    return n;
}

void main()
{
    char l;
    int n;

    while(n = CalculaValorPalavra())
    {
        if(EhPrimo(n)) printf("E primo\n");
        else printf("Nao e primo %d\n", ProximoPrimo(n));
    }
}