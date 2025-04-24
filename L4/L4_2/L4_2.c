#include <stdio.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

tData LeData()
{
    tData data;
    scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
    return data;
}

void ImprimeData(tData data)
{
    printf("'%02d/%02d/%04d'\n", data.dia, data.mes, data.ano);
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
    if(data.mes > 12) data.mes = 12;
    if(data.mes < 1) data.mes = 1;
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
    if(data.dia < 1) data.dia = 1;
    return data;
}

int NomedosDias(tData d)
{
    int Dlimite;
    switch(d.mes)
    {
        case 1: Dlimite = 31; break;
        case 2: if(Ehbissexto(d.ano)) Dlimite = 29; else Dlimite = 28; break;
        case 3: Dlimite = 31; break;
        case 4: Dlimite = 30; break;
        case 5: Dlimite = 31; break;
        case 6: Dlimite = 30; break;
        case 7: Dlimite = 31; break;
        case 8: Dlimite = 31; break;
        case 9: Dlimite = 30; break;
        case 10: Dlimite = 31; break;
        case 11: Dlimite = 30; break;
        case 12: Dlimite = 31; break; 
    }
    return Dlimite;
}

tData PassaTempo(tData d)
{
    int dlimite = NomedosDias(d);
    if (d.dia == dlimite)
    {
        d.dia = 1;
        if (d.mes == 12)
        {
            d.mes = 1;
            d.ano++;
        }
        else d.mes++;
        
    }
    else d.dia++;
    return d;
}
int comparaDatas(tData d1, tData d2)
{
    if (d1.ano < d2.ano)
        return -1;
    if (d1.ano > d2.ano)
        return 1;
    if (d1.mes < d2.mes)
        return -1;
    if (d1.mes > d2.mes)
        return 1;
    if (d1.dia < d2.dia)
        return -1;
    if (d1.dia > d2.dia)
        return 1;
    return 0;
}

int main() 
{
    
    tData data1, data2;

    data1 = LeData();
    data2 = LeData();
    
    data1 = corrigeData(data1);
    data2 = corrigeData(data2);

    while(comparaDatas(data1,data2) < 0)
    {
        ImprimeData(data1);
        data1 = PassaTempo(data1);
    }
    return 0;
}