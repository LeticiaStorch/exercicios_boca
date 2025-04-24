#include <stdio.h>

 int EhPalindromo(int num){
     int original = num, inverso=0, resto;

   while(num != 0){
      resto = num % 10;
      inverso = inverso*10 + resto;
      num /= 10;
   }

    return original == inverso;

 }

int main(){
    int num;
    while(scanf("%d", &num) == 1){
       if (EhPalindromo(num))
          printf("S\n");
          else
          printf("N\n");
    }
return 0;
}