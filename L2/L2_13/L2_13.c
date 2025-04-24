#include <stdio.h>

int main() {
    char c;
     while(1){
       scanf("%c", &c);

       if(c == '.' || c == '!' || c =='?'){
         printf("%c", c);
              break;
       }
       if(c >= 'a' && c <= 'z'){ // tem que verificar se e uma letra minuscula
         printf("%c", c - 32); // transfornado p Lma
         }else{
          printf("%c", c);
        }
     }
  return 0;
}