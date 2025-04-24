#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, posicao=0, menor=32000, posicaoi=-1, posicaof=-1, temp=1;
     
     while(scanf("%d", &num) == 1)
       {
         if(num < menor) menor = num;
       }
       
       scanf("%*c");
       while(scanf("%d", &num) == 1){
       
         if((num == menor) && (temp))
            {
              posicaoi = posicao;
              temp--;
            }
            if(num == menor) posicaof = posicao;
            posicao++;
        } 
            if((posicaoi == -1) && (posicaof == -1))
            {
                posicaoi = posicao;
                posicaof = posicao;
            }
             printf("%d %d %d", menor, posicaoi, posicaof);
             return 0;
         }        
     
