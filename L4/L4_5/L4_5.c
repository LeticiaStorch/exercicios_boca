#include <stdio.h>
#include <math.h>

float CalculaDistancia();


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


  void ImprimePonto(int n)
    {
      tPonto panterior, patual;
      float distancia;
      int i;
      
      panterior = LePonto(); //como o 1°ponto e semore impresso, entt ele pode estar fora do loop
      printf("-\n");

      for(i=1; i<n; i++) //os demais vao ser processados aq
      {
        patual = LePonto();
        distancia = CalculaDistancia(panterior, patual);
        printf("%.2f\n", distancia);
        panterior=patual;
      }
    }

// movimentação do ponto por um delta x e um delta y

  float CalculaDistancia(tPonto p1, tPonto p2)
  {
    return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
  }


  int main()
  {
    int i, n;
    scanf("%d", &n);
    ImprimePonto(n);

    return 0;
  }