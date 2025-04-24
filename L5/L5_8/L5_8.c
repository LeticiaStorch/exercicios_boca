#include <stdio.h>

void TrocaPareImpar(int N[], int n)
{
    int i, temp=0;
    for(i=0; i < n-1; i+=2)
    {
        temp = N[i];
        N[i] = N[i + 1];
        N[i + 1] = temp;
    }
    temp++;
}

void ImprimeDadosDoVetor(int N[], int n)
{
    int i,ehisso=0;
    
    printf("{");
    for(i=0; i < n; i++)
    {
      printf("%d", N[i]);
      if(i != n-1) printf(", ");
    }
        printf("}");
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
    TrocaPareImpar(N, n);
    ImprimeDadosDoVetor(N, n);

    return 0;
}