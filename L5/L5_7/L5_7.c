#include <stdio.h>
#include <math.h>

int verificaPA(int N[], int n)
{
    int i, dif=0;
    if(n == 1) 
    {
        printf("NAO");
        return 0;
    }
    for(i=1; i < n; i++)
    {
        dif = N[i] -  N[i - 1];
        if (dif != N[1] - N[0])
        {
            printf("NAO");
            return 0;
        }
    }
    printf("RESP:%d", dif);
}


int main()
{
    int i, n;
    scanf("%d", &n);
    int N[n];

    for(i=0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    verificaPA(N,n);
    return 0;
}

