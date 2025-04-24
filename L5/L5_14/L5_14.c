#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    char sobrenome[21];
    char nome[21];
    int nota;
    int idade;
} tCandidato;

tCandidato LeCandidato();
void ImprimeCandidato(tCandidato candidato);
int ComparaString(char str1[], char str2[]);

int main()
{
    int qtdCand, i, j;

    scanf("%d", &qtdCand);
    tCandidato candidatos[qtdCand];
    int jaimpress[qtdCand];

    for (i = 0; i < qtdCand; i++)
    {
        candidatos[i] = LeCandidato();
    }

    for(i=0; i < qtdCand; i++) 
    {
        jaimpress[i] = 0;
    }

    for(j=0; j < qtdCand; j++) 
    {
        jaimpress[j] = 0;
    }

    for(i=0; i < qtdCand; i++)
    {
        for(j = i+1; j < qtdCand; j++)
        {
            if(ComparaString(candidatos[i].sobrenome, candidatos[j].sobrenome))
            {
                if(jaimpress[i] != 1)
                {
                    ImprimeCandidato(candidatos[i]);
                    jaimpress[i] = 1;
                }
                if(jaimpress[j] != 1)
                {
                    ImprimeCandidato(candidatos[j]);
                    jaimpress[j] = 1;
                }
            }
        }
    }

    return 0;
}

tCandidato LeCandidato()
{
    tCandidato candidato;
    scanf("%*[^{]");
    scanf("%*[{ ]");
    scanf("%d", &candidato.codigo);
    scanf("%*[, ]");
    scanf("%[^,],", candidato.sobrenome);
    scanf("%*[ ]");
    scanf("%[^,],", candidato.nome);
    scanf("%d", &candidato.nota);
    scanf("%*[, ]");
    scanf("%d", &candidato.idade);
    return candidato;
}

void ImprimeCandidato(tCandidato candidato)
{
    printf("CAND(%d): %s %s, Nota:%d, Idade:%d\n", candidato.codigo, candidato.nome, candidato.sobrenome, candidato.nota, candidato.idade);
}

int ComparaString(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            return 0;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 1;
    }
    else
        return 0;
}