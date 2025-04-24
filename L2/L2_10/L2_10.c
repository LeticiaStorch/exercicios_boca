#include <stdio.h>

int main() {
     int i, m, n, j;
     scanf("%d %d", &n, &m);

     for(i = n; i <= m; i++) // loop para cada n° do intervalo
       for(j = 1; j <= 10; j++) // loop para calcular e imprimir a tabuada de i
     printf("%d x %d = %d\n", i, j, i*j);


     
  
  
  return 0;
}