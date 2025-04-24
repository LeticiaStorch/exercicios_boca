#include <stdio.h>


typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

int Ehbissexto();
tData corrigeData();


tData LeData()
{
    tData data;
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano); // esqueci de por no formado de leit de entrada
    return data;
}

void ImprimeData(int n)
{
    tData data = LeData();
    data = corrigeData(data);
    printf("'%02d/%02d/%04d':", data.dia, data.mes, data.ano);
    if (Ehbissexto(data.ano)) printf("Bisexto\n");
    else printf("Normal\n");

}

int Ehbissexto(int ano)
{
    if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    return 1; // e bissexto
    else
    return 0; // n e bissexto 
    
}

tData corrigeData(tData data)
{
    if(data.mes > 12) data.mes = 12; // o problema esta pedindo isso
    if(data.mes < 1) data.mes = 1; // o problema esta pedindo isso
    switch(data.mes)
    {
        case 1: if(data.dia > 31) data.dia = 31; break;
        case 2: if(Ehbissexto(data.ano) && data.dia > 29) data.dia = 29; else if (data.dia > 28) data.dia = 28; break;
        case 3: if(data.dia > 31) data.dia = 31; break;
        case 4: if(data.dia > 30) data.dia = 30; break;
        case 5: if(data.dia > 31) data.dia = 31; break;
        case 6: if(data.dia > 30) data.dia = 30; break;
        case 7: if(data.dia > 31) data.dia = 31; break;
        case 8: if(data.dia > 31) data.dia = 31; break;
        case 9: if(data.dia > 30) data.dia = 30; break;
        case 10: if(data.dia > 31) data.dia = 31; break;
        case 11: if(data.dia > 30) data.dia = 30; break;
        case 12: if(data.dia > 31) data.dia = 31; break;

    }
    if(data.dia < 1) data.dia = 1; // o problema esta pedindo isso
    return data;
}

int main() 
{
    int i, n;
    scanf("%d\n", &n);

    for(i=1; i<=n; i++)
    {
        ImprimeData(n);
    }
    return 0;
}