#include <stdio.h>

int EhPar(int x)
{
    if (x % 2 == 0)
        return 1;
    else
        return 0;
}

void PrintaPares(int N)
{

    if (EhPar(N))
        printf("%d ", N);
}

void PrintaImpares(int N)
{
    if (!EhPar(N))
        printf("%d ", N);
}

int main()
{
    int tipo, n, i;
    scanf("%d %d", &tipo, &n);

    if (tipo == 0)
    {
        for (i = 2; i <= n * 2; i += 2)
        {
            PrintaPares(i);
        }
    }    
    if (tipo == 1)
    {
        for (i = 1; i <= n*2; i += 2)
        {
            PrintaImpares(i);
        }
    }    
}