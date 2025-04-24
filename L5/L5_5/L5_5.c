#include <stdio.h>

int acharX(int x,int N[], int n)
{
    int i, posi=-1;
    for(i=0; i < n; i++)
    {
        if(N[i] == x) 
        {
            posi=i; 
            break;
        }
    }
    if(posi != -1) printf("RESP:%d", posi);
    else printf("RESP:%d", n);
}


// achar o num x no decorrer da "linha" e colocar a posicao(q começa com 0), tipo ele guarda a posição q ele viu o num pela ultima vez
int main()
{
    int i, n, x;
    scanf("%d %d ", &x, &n);
    
    int N[n];

    for(i=0; i < n; i++)
    {
        scanf("%d", &N[i]);
    }
    acharX(x, N, n);
    return 0;
}

// nessa entrada 5 2 56 54 a saída é 2 pq qnd eu não tenho o num X eu coloco o tam do vetor N[i] por ex.