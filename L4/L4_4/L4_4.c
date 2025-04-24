#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} tPonto;

  tPonto LePonto()
  {
    tPonto p;
    scanf("%f %f", &p.x, &p.y);
    return p;
  }


  void ImprimePonto(tPonto ponto)
    {
        printf("(%.0f,%.0f)", ponto.x, ponto.y);
    }

// movimentação do ponto por um delta x e um delta y

  float CalculaDistancia(tPonto p1, tPonto p2)
  {
    return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
  }

  int QuadrantePonto(tPonto ponto)
  {
    if(ponto.x == 0 && ponto.y == 0)
    return 0; //origem
    else if(ponto.x == 0 || ponto.y == 0)
    return 0; // sobre os eixos
    else if(ponto.x > 0 && ponto.y > 0)
    return 1; // 1 quadrante
    else if(ponto.x < 0 && ponto.y > 0)
    return 2; // 2 quadrante
    else if(ponto.x < 0 && ponto.y < 0)
    return 3; // 3 quadrante
    else if(ponto.x > 0 && ponto.y < 0)
    return 4; // 4 quadrante
  }

  tPonto SimetricoPonto(tPonto ponto)
  {
    tPonto simetrico = ponto;
    if(simetrico.x) simetrico.x *= -1;
    if(simetrico.y) simetrico.y *= -1;
    return simetrico;
  }

  int main()
  {
    int i, n;
    scanf("%d", &n);
    tPonto P, simetrico;
    int quadrante, qsimetrico;

    for(i = 1; i <= n; i++)
    {
      P = LePonto();
      quadrante = QuadrantePonto(P);
      simetrico = SimetricoPonto(P);
      qsimetrico = QuadrantePonto(simetrico);

      ImprimePonto(P);
      printf(" %d ", quadrante);
      ImprimePonto(simetrico);
      printf(" %d\n", qsimetrico);
    }

    return 0;
  }