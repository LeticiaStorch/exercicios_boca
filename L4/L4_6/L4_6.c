#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} tPonto;

typedef struct 
{
    tPonto p1;
    tPonto p2;
} tReta;

float CalculaDistancia(tPonto p1, tPonto p2);

tPonto LePonto()
{
    tPonto p;
    scanf("%f %f", &p.x, &p.y);
    return p;
}

tReta LeReta()
{
    tReta r;
    scanf("%f %f %f %f", &r.p1.x, &r.p1.y, &r.p2.x, &r.p2.y);
    return r;
}

float CalculaDistancia(tPonto p1, tPonto p2)
  {
    return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
  }

void ComparaReta(int n)
{
    tPonto p;
    tReta reta;
    int i;
    float distancia, d1, d2;
    for(i=1; i <= n; i++)
    {

        p = LePonto();
        reta = LeReta();
        d1 = CalculaDistancia(reta.p1, p);
        d2 = CalculaDistancia(reta.p2, p);
        if(d1 < d2) printf("INICIO\n");
        else if(d2 < d1) printf("FIM\n");
        else printf("EQUIDISTANTE\n");
    }

}

int main()
{
    int n;
    scanf("%d", &n);
    ComparaReta(n);
    return 0;
}
