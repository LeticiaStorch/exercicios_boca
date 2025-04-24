#include <stdio.h>
#include <stdlib.h>

void codificacao (int chave)
{
  char c;
  while(c != '.')
  {
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') 
    {
      if ((c + chave) > 'z') 
      {
        if (chave > 26) chave = chave%26;
        c += chave;
        if (c > 'z') c -= 26;
      }
      else 
      {
        c += chave;
      }
    }
    printf("%c", c);
  }
}

void decodificacao (int chave)
{
  char c;
  while(c != '.')
  {
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z') 
    {
      if ((c - chave) < 'a') 
      {
        if (chave > 26) chave = chave%26;
        c -= chave;
        if (c < 'a') c += 26;
      }
      else 
      {
        c -= chave;
      }
    }
    printf("%c", c);
  }
}

void main ()
{
  int operacao, chave;

  scanf("%d %d ", &operacao, &chave);

  if (operacao == 1) codificacao(chave);
  if (operacao == 2) decodificacao(chave);
  if (operacao != 1 && operacao != 2) printf("Operacao invalida.");

}