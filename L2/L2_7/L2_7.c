#include <stdio.h>

int main()
{
    int i;
    int n;
    int p=1;
    scanf("%d", &n);

    if(n <= 1) //garantindo numeros neg tbm
    {
        p = 0;
    }
    else
    {
        for(i=2; i < n; i++) //vai roda do 2 ate o numero dig
        {
            if(n % i == 0) //se for divisivel por esses numeros e o resto der zero, n eh primo
            {
                p=0;
            }
        }
    }

    if(p)
    {
        printf("Primo");
    } else printf("Nao primo");
}