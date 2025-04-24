#include <stdio.h>
#include <stdlib.h>

int ComparaString(char str1[], char str2[])
{
    int i;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i]) //aq, ele verifica caracter, de acordo com a tabela ascii
        {
            return 0; //se não for igual retorna falso
        }
    }
    

    if(str1[i] == '\0' && str2[i] == '\0') //vejo se as posições do terminador nulo é a mesma
    {
        return 1; //se for, verdadeiro
    }
    else return 0; // se não, falso
}

int main()
{
    char str1[1000];
    char str2[1000];

    while (scanf("%s", &str1) == 1 && scanf("%s", &str2) == 1)
    {
        if (ComparaString(str1, str2))
            printf("IGUAL\n");
        else
            printf("DIFERENTE\n");
    }

    return 0;
}