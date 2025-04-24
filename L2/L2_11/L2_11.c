#include <stdio.h>

int main() {
     int n, m, i, a, b, c, d, e, f, ab, cd, ef;
     scanf("%d %d", &n, &m);
  
     for(i = n + 1; i < m; i++){
      a = i / 1000; // obtém o quociente inteiro
      b = (i / 100) % 10; // elimina o digito das uni e dez e dps pega o resto q é a centena
      c = (i / 10) % 10; // elimina o digito das unid e dps pega o resto q é a dezena
      d = i % 10; // a unidade é o resto da divisão por 10
 
    // descobrir ab, cd, ef
      ab = a*10 + b;
      cd = c*10 + d;
      ef = i; // para verificar numero do intervalo 

       
      if((ab + cd) * (ab + cd) == ef) // verificação se ef ao quadrado dá i
         printf("%d\n", i);
      // foi meio que um booleano, se for verdadeiro imprima os numeros dentro do intervalo
     }
      
  return 0;
}