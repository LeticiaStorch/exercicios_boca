#include <stdio.h>

int main(){
    int n;
    int soma;

    scanf("%d", &n);

    while(n >= 10){
        soma=0;
        while(n > 0){
            soma += n % 10;
            n /= 10;
        }
      n = soma;  
    }
 printf("RESP:%d", n);
 return 0;
}