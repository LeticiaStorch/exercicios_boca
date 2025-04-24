#include <stdio.h>

int main(){
       int nl, nc,L,C, v=0, maior=-32768, posil=-1, posic=-1;
       scanf("%d %d", &L, &C);
     
    for(nl=1; nl <= L; nl++){
        for(nc=1; nc <= C; nc++){
        scanf("%d", &v);
        if(v > maior){
          maior = v;
          posil=nl;
          posic=nc;
        }
    }
}
printf("%d(%d,%d)", maior, posil, posic);
return 0;
}