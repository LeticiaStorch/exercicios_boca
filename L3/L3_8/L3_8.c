#include <stdio.h>

 int verificaNegativo(int n);

int verificaPrimo(int n)
{
    int i;
    if(n == 1 || n == 0 || n == -1 ) return 0; //num menores ou iguais a 1 n sao primos
    
  if(verificaNegativo(n))
  {
  for(i=-2; i >= n/2; i--)
{
  if(n % i == 0) 
  return 0;
}
  return 1;
}
else 
  for(i=2; i <= n/2; i++)
  {
    if(n % i == 0) return 0; //n e primo
  }
    return 1; //e primo
  } 


int transformaPrimo(int n)
{
  int j=n;
  if(verificaPrimo(n))
  {
    return n; // n ja e primo, entt retorna ele msm
  }
  if(n < 0)
  {
    while(!verificaPrimo(j)) 
    {
      j--;
    }
    return j;
  }
  else
  {
    while(!verificaPrimo(j))
    {
      j++;
    }
    return j;
  }
}

 int verificaNegativo(int n)  
{
  
    if (n < 0) 
    return 1;
    else
    return 0; 

} 


int main()
{
  int l, c, nl, nc;
  scanf("%d %d", &l, &c);
  int elemento;
  for(nl = 0; nl < l; nl++)
  {
  for(nc = 0; nc < c; nc++)
  {
  scanf("%d", &elemento);
  if(transformaPrimo(elemento) >= -32000 && transformaPrimo(elemento) <= 32000) 
  printf("%d ", transformaPrimo(elemento));
  else
  printf("%d ", elemento);
  }
  printf("\n");
  }
  return 0;
}

/* 
os casos sao se e um numero nao primo a funcao vai transformar no primo mais prox, se e primo permanece primo. 
*/