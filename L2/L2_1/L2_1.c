#include <stdio.h>

int main()
{
    int n,m,i;
    scanf("%d %d", &n, &m);

    printf("RESP:");

    for(i = n+1; i < m; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
           // printf("%d", i);
        }
        else{}
    }
}