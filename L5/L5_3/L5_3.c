#include <stdio.h>
#include <math.h>

int CalculaAltura(int N[], int n)
{
    int i, maiordif=-1, dif=0;

    if(n == 1)
    {
        printf("IMPOSSIVEL");
        return 0;
    } 
    
    for(i=1; i < n; i++)
    {
        dif = fabs(N[i] - N[i - 1]);
        if(dif > maiordif) maiordif = dif;
    }
    for(i=1; i < n; i++)
    {
        dif = fabs(N[i] - N[i - 1]);
        if(dif == maiordif) printf(" (%d %d) ", i-1, i);
    }
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
    CalculaAltura(N, n);
    return 0;
}