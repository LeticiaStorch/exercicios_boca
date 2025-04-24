#include <stdio.h>

 void parImpar(int n);
 void valorPrimo(int n);

 int somadosdigitos(int n)
 {
    int soma=0;
    while(n != 0)
    {
        soma += n % 10;
        n /= 10;
    }
        printf("%d ", soma);
        parImpar(soma);
        valorPrimo(soma);

        return soma;
 }

 void parImpar(int n)
{
    if(n % 2 == 0)
    printf("Par ");
    else 
    printf("Impar ");
}

void valorPrimo(int n)
{
    int i;

    if(n <= 1) // num negativos, zero e um n sao primos.
    {  
    printf("Nao e primo\n");
    return;
    }

    if(n == 2)
    {
    printf("Primo\n");
    return;
    }

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
        printf("Nao e primo\n");
        return;
        }
    }
        printf("Primo\n");
        return;
        
}

/* ele imprime 1° a soma, diz se a soma é par ou impar e 
*/

int main ()
{
    int num, r1;
    scanf("%d", &num);
    r1 = somadosdigitos(num);

    while(r1 >= 10)
    {
        r1 = somadosdigitos(r1);
    }
         return 0;
}