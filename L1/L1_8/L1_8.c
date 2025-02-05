#include <stdio.h>

int main(){
  char letra;
  scanf("%c", &letra);

  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
    printf("Vogal", letra);
  
  } else {
    printf("Nao Vogal", letra);
  }
    
    return 0;
}