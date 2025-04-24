#include <stdio.h>

void intervalo(int N[], int n, int a, int b)
{
    int i, qntD=0, qntF=0;
    for(i=0; i < n; i++)
    {
        if(N[i] >= a && N[i] <= b) qntD++;
        else qntF++;
    }
    printf("%d %d", qntD, qntF);
    //printf vai ser fora (qnt no int, qnt fora)
}
// acha o maior num(ele q vai ser o maior do intervalo) e o num menor e o num anterior a ele, ointervalo é fechado no a e no b.
int main()
{
    int i, n, a, b;
    scanf("%d ", &n);
    int N[n];

    for(i=0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    scanf("%d %d", &a, &b);
    intervalo(N,n,a,b);
}