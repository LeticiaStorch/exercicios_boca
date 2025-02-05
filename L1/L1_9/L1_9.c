#include <stdio.h>

int main()
{
    char l, maiuscula;
    scanf("%c", &l);

    if(l >= 'a' && l <= 'z')
    {
        maiuscula = l - 32;
        int v = (int)maiuscula;
        printf("%c(%d)", maiuscula, v);
    } else if(l >= 'A' && l <= 'Z')
    {
        printf("A letra deve ser minuscula!");
    } else printf("Nao e letra!");
}