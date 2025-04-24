#include <stdio.h>

 int Propriedade(int num){
    int a, b, c, d, e, f, ab, cd, ef;
    a = num / 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    ab = a*10 + b;
    cd = c*10 + d;
    ef = num;

    if((ab + cd) * (ab + cd) == ef)
      printf("%d\n", num);
    
 }


int main(){
    int n, m, i;
    scanf("%d %d", &n, &m);
    for(i = n + 1; i < m; i++){
   Propriedade(i);
    }
     return 0;
}