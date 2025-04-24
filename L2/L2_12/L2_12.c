#include <stdio.h>

int main() {
    char c;
    int tem_pont = 0;
     while(1){
       scanf("%c", &c);

       if(!tem_pont){
         printf("RESP:");
         tem_pont = 1;
       }
       
       if(c == '.' || c == '!' || c =='?'){
         printf("%c\n", c);
              break;
       }
        if(c == ' '){
          printf("_");
        }
        else{
          printf("%c", c);
        }
     }
  return 0;
}