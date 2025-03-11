#include <stdio.h>
#include <math.h>

int main(){
    float pi; 
    float soma=0;
    int n, k;
  scanf(" %d", &n);
  for(k=1; k <= n; k++){
    soma += 6 / pow(k,2);
  }
  pi = sqrt(soma);
  printf("%f", pi);
  return 0;
}