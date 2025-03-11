#include <stdio.h>

typedef struct 
{
    int id_men;
    int id_pac;
    int tam;
    char m[10];
    int erro;
} tPacote;


tPacote LePacote()
{
    tPacote pacote; 
    char tam;
    scanf("%3d %3d %c", &pacote.id_men, &pacote.id_pac, &tam);
    pacote.tam = tam - '0';
    int i;
    for (i=0; i < pacote.tam; i++)
    {
        scanf("%c", &pacote.m[i]);
    }
    pacote.m[i] = '\0';
    int j;
    char lixo;
    for (j=i; j < 9; j++)
    {
        scanf("%c", &lixo);
    }
    scanf(" %4d", &pacote.erro);
    return pacote;
}

void ImprimePacote(tPacote pacote)
{

    printf("PCT: %d,%d,%d,%s,%d\n", pacote.id_men, pacote.id_pac, pacote.tam, pacote.m, pacote.erro);
    
}

int main()
{
    int n, i;

    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        tPacote pacote = LePacote();
        ImprimePacote(pacote);
    }
    

    return 0;
}
