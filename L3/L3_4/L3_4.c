#include <stdio.h>

int EhPrimo(int num){
int i;
  for(i=2; i<=num/2; i++){
  if(num % i == 0){
    return 0;
  } 
}
  return 1;
}

void ImprimeMultiplos(int num, int max){
  int i, j;
  for(i = num + 1; i < max; i++){
    if(EhPrimo(i)){
       printf("%d\n", i);
         int tem = 0;
      for(j = 1; j < max; j++){
        if(j % i == 0 && j != i){
          printf("%d ", j);
          tem = 1;
      }
    }
    if(!tem){
      printf("*");
    }
    printf("\n");
  }
}
}


int main(){
int n,m;
  scanf("%d %d", &n, &m);

   ImprimeMultiplos(n, m);
  
    return 0;
}