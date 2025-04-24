#include <stdio.h>
float Soma(float num1, float num2){
   return num1 + num2;
}
float Subtracao(float num1, float num2){
    return num1 - num2;
}
float Divisao(float num1, float num2){
    return num1 / num2;
}
float Multiplicacao(float num1, float num2){
    return num1 * num2;
}

int main(){
float num1, num2, result;
char c;
scanf("%f ", &num1); 
result = num1;
while (scanf("%f %c", &num2, &c) == 2){
if(c == '+') result = Soma(result, num2);

else if(c == '-') result = Subtracao(result, num2);

else if(c == '/') result = Divisao(result, num2);

else if(c == '*') result = Multiplicacao(result, num2);

else if(c == 32)break;
}
printf("%.2f", result);
 return 0; 
}