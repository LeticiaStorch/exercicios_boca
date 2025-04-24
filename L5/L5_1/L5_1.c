#include <stdio.h>
#include <math.h>

typedef struct
{
    int nota;
    int menor;
    int maior;
    float media;// soma todos/qnt
    float std;//calc maluco
    int acmedia; // > 70
    int reprov; // < 70
} tNotafinal;

tNotafinal iniciaNotas(tNotafinal r)
{
    r.menor = 101;
    r.maior = -1;
    r.media = 0;
    r.std = 0;
    r.acmedia = 0;
    r.reprov = 0;
    return r;
}

tNotafinal LeNota(int N[], int n, tNotafinal r)
{
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &N[i]);
        if(r.menor > N[i]) r.menor = N[i];
        if(r.maior < N[i]) r.maior = N[i];
        r.media = r.media + ((float)N[i] / (float)n);
        if(N[i] < 70) r.reprov++; 
    }
    return r;
}


tNotafinal DesvioPadrao(int N[], int n, tNotafinal r)
{
    int i;
    for(i=0; i < n; i++)
    {
        r.std += (float)pow(N[i] - r.media,2) / n;
    }
     r.std = sqrt(r.std);
    return r; 
}

tNotafinal Qntacmedia(int N[], int n, tNotafinal r)
{
    int i;
    for(i=0; i < n; i++)
    {
        if(N[i] > r.media) r.acmedia++;    //acima da media media
    }
    return r;
}

void Imprime(tNotafinal r)
{
    printf("MENOR:%d, MAIOR:%d, MEDIA:%.2f, STD:%.2f, ACIMA_MEDIA_CONC:%d, REPROV:%d",r.menor, r.maior, r.media, r.std, r.acmedia, r.reprov);
}

int main()
{
    int i, n;
    scanf("%d ", &n);
    int N[n];
    tNotafinal r;

    r = iniciaNotas(r);
    r = LeNota(N, n, r);
    r = DesvioPadrao(N, n, r);
    r = Qntacmedia(N, n, r);
    Imprime(r);
    
    return 0;
}