#include <stdio.h>

int main()
{
    int n,m;
    int i, j;
    int p=1;
    scanf("%d %d", &n, &m);

    printf("RESP:");
    for(i = n+1; i < m; i++)
    {
        p=1; // reiniciando a variavel para kd num i
        if(i <= 1)
        {
            p = 0;
        } else {
            for(j = 2; j*j <= i; j++)
            {
                if(i % j == 0) p = 0;
            }
        }
        if(p)
        printf("%d ", i);
    }
    
}