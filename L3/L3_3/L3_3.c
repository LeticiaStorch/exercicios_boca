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



int main(){
  int n,m, num;
  scanf("%d %d", &n, &m);
  for(num = n + 1; num < m; num++){
    if(EhPrimo(num)){
     printf("%d ", num);
    }
  }
}