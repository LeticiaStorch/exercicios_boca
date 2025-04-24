#include <stdio.h>

int ehprimo(int num)
{ // para verificar se é primo
    if (num <= 1)
    {
        return 0;
    }
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for (i = n + 1; i < m; i++)
    {
        if (ehprimo(i))
        {
            printf("%d\n", i);
            int tem_multiplo = 0; // variavel p/ verificar se  encontrei os multiplos
            for (j = n + 1; j < m; j++)
            { // p/ um num dentro do intervalo n e m.
                if (j % i == 0 && j != i)
                { // verificamos se esse num dentro do intervalo e multiplo de i (q é o num primo) p/ isso div e se o resto for 0 e se j nao for i.
                    printf("%d ", j);
                    tem_multiplo = 1; // entao é mult, VERDADEIRO.
                }
            }
            if (!tem_multiplo)
            {
                printf("*");
            }
            printf("\n"); // dando espaco entre os num primos
        }
    }
    return 0;
}