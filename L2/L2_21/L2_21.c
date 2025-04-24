#include <stdio.h>

int main(){
    int n, i=0;
    int i1,i2,i3,i4,i5,i6,i7,i8,i9;
    char c;
    int texto;
    int asp=0;
    
     scanf("%d", &n); //qnd a entrada e sempre valida

    for(i=1 ; i <= n; i++){ // relacionar a qnt de n e a msm da de i, no sentido de n = 4 entt tem q se i1 ... i4 passou disso erro
      switch(i){
        case 1: scanf("%d ", &i1); break;
        case 2: scanf("%d ", &i2); break;
        case 3: scanf("%d ", &i3); break;
        case 4: scanf("%d ", &i4); break;
        case 5: scanf("%d ", &i5); break;
        case 6: scanf("%d ", &i6); break;
        case 7: scanf("%d ", &i7); break;
        case 8: scanf("%d ", &i8); break;
        case 9: scanf("%d ", &i9); break;

      }
      }


    while (scanf("%c", &c) == 1) { // le o txt ate a aspa final
           if(c == '"' && asp ) break;
           
           if(c == '"'){
              asp = 1;
              continue;
           }
    
           if(asp){
            if (c == '%') {
              scanf("%c", &c);
            if (c >= '1' && c <= '9') {
                texto = c - '0';
         switch(texto) {
                case 1: if (texto <= n) printf("%d", i1); else printf("ERRO"); break;
                case 2: if (texto <= n) printf("%d", i2); else printf("ERRO"); break;
                case 3: if (texto <= n) printf("%d", i3); else printf("ERRO"); break;
                case 4: if (texto <= n) printf("%d", i4); else printf("ERRO"); break;
                case 5: if (texto <= n) printf("%d", i5); else printf("ERRO"); break;
                case 6: if (texto <= n) printf("%d", i6); else printf("ERRO"); break;
                case 7: if (texto <= n) printf("%d", i7); else printf("ERRO"); break;
                case 8: if (texto <= n) printf("%d", i8); else printf("ERRO"); break;
                case 9: if (texto <= n) printf("%d", i9); else printf("ERRO"); break;
      }
      } else {
        printf("ERRO");
      }
    } else {
     printf("%c", c); // imprimir o caractere
    } 
    } 
    }
    return 0;
}
