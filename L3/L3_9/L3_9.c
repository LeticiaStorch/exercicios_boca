#include <stdio.h>
#include <math.h>

int verificapH(float pH)  // que retorna 0 para pH neutro, 1 para ácido e 2 para básico.
{
    if(pH == 7) return 0;
    if(pH > 7) return 1; // basico
    if(pH < 7) return 2; // acido
}

int verificaGotaChuvaAcida(float pH)
{
    if(pH < 5.7)
    return 1;
    else
    return 0;
}

float porcentagem(float total, float valor)
{
    float porcentagem = valor / total * 100;
    return porcentagem;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal)
{
    if(porcentagemGotasChuvaAcida >= 75) printf("Chuva Acida");
    else if(porcentagemGotasChuvaNormal >= 75) printf("Chuva Normal");
    else printf("Chuva com indicios de chuva acida");
    printf(" %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
}
/* se foi considerada ácida (75.00% ou mais das gotas com pH menor que
5.70)
*/

int main()
{
    int A, D, T, qntAc=0, qntN=0;
    scanf("%d %d %d\n", &A, &D, &T);
    float P;
    float macido=15, mbasico=-1, mneutro=15; // armazena o menor valor 
    int cond=1;
    int acido=0, basico=0, neutro=0;
    float porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal;

    while(scanf("%f", &P) == 1)
    {
        if(P < macido) macido = P; // Atualiza o valor mais ácido (menor valor de pH).Pois,  o valor de pH mais baixo entre as gotas representa a gota mais ácida.
        if(P > mbasico) mbasico = P; // Atualiza o valor mais básico (maior valor de pH)
        if((cond == 1) || (fabs(P - 7) < fabs(mneutro - 7))) mneutro = P; // Atualiza o valor de pH mais próximo de 7 (neutro).
        /*garante que mneutro é inicializado com o primeiro valor de pH lido e é atualizado sempre que um valor mais 
        próximo de 7 é encontrado. Isso permite que mneutro armazene o valor de pH mais próximo de neutro ao final da 
        leitura de todos os valores.
        */
        
        switch(verificapH(P)) // conta qnts de cada tem
        {
            case 0: neutro++; break;
            case 1: basico++; break;
            case 2: acido++; break;
        }
        
        if(verificaGotaChuvaAcida(P) == 1)
        qntAc++; // chuva ácida
        else 
        qntN++; // chuva normal
        cond--; // diminui cond apos a 1ª iteracao.
       /*Após processar todos os valores de pH, os contadores qntAc e qntN indicam quantas gotas de chuva foram 
       consideradas ácidas e quantas foram consideradas normais. Esses contadores são então utilizados para calcular 
       as porcentagens de gotas de chuva ácida e normal.
       */
    }
    if(cond == 1) // Verifica se nenhuma gota foi avaliada.
    {
        printf("Nenhuma gota foi avaliada");
        return 0;

    }
    
    int totalGotas = neutro + acido + basico;
    porcentagemGotasChuvaAcida = porcentagem(totalGotas, qntAc);
    porcentagemGotasChuvaNormal = 100 - porcentagemGotasChuvaAcida; // lembrando que 100 e pq %cnormal + %cacida = 100%

    printf("%d %d %d %.2f %.2f %.2f\n", acido, basico, neutro, macido, mbasico, mneutro);

     imprimeResultadosAnalise(porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);

}

/* só uma obs. qnd a gente faz (p < macido), nós estamos comparando os valores, ou seja,  Antes de entrar no loop, 
macido é inicializado com um valor alto (15) para garantir que qualquer valor de pH lido inicialmente será menor.
 Cada vez que um novo valor de pH (P) é lido dentro do loop while, ele é comparado com o valor atual armazenado em 
 macido. Se o valor de 'P' for menor que o valor de macido, então 'P' é o valor de PH mais baixo(o que é positivo, já 
 que o pH mais acido é o +baixo) encontrado até agora. 
*/