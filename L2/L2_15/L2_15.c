#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, somaN=0, somaP=0, qntP=0, qntN=0;

  while (scanf("%d", &n) == 1){
    if(n < 0 && n >= -100){
      qntN++;
      somaN += n;
    } else if (n > 0 && n <= 100) {
      qntP++;
      somaP += n;
    }
  }

  printf("%d %d %d %d", qntN, qntP, somaN, somaP);
  
  return 0;
}