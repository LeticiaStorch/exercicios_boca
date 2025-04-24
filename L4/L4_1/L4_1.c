#include <stdio.h>

typedef struct
{
    int codigo;
    float preco;
    int qtnEstq;
} tProduto;

tProduto LeProduto()
{
    tProduto p;
    scanf("%d;%f;%d", &p.codigo, &p.preco, &p.qtnEstq);
    return p;
}

int EhProduto1MaiorQ2(tProduto p1, tProduto p2)
{
    if(p1.preco > p2.preco)
    return 1;
    else 
    return 0;
}

int EhProduto1MenorQ2(tProduto p1, tProduto p2)
{
    if(p1.preco < p2.preco)
    return 1;
    else 
    return 0;
}

int TemProdutoEmEstoque(tProduto p)
{
    if(p.qtnEstq != 0)
    return 1;
    else
    return 0;
}

void ImprimeProduto(tProduto p)
{
    printf("COD %d, PRE %.2f, QTD %d\n", p.codigo, p.preco, p.qtnEstq);
}

int main ()
{ 
    int i, n;
    tProduto p1;
    tProduto M, m;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        p1 = LeProduto();
        if(i == 1)
        {
            M = p1;
            m = p1;
        }
        if(!TemProdutoEmEstoque(p1))
        {
            printf("FALTA:");
            ImprimeProduto(p1);
        }
        
        if(EhProduto1MaiorQ2(p1, M)) M = p1;
        if(EhProduto1MenorQ2(p1, m)) m = p1;
    }
         printf("MAIOR:");
         ImprimeProduto(M);
         printf("MENOR:");
         ImprimeProduto(m);
         return 0;
}