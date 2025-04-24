#include <stdio.h>

void OrdenaCrescente(int N[], int n)
{
    int i, j, temp=0;
    for(i=0; i < n-1; i++)
    {
        for(j=0; j < n - i - 1; j++)
        {
            if(N[j] > N[j + 1])
            {
                temp = N[j];
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    } 
}

void ImprimeSequencia(int N[], int A[], int n1, int n2)
{
    int i=0, j=0;

    OrdenaCrescente(N, n1);
    OrdenaCrescente(A, n2);

    while(i < n1 && j < n2)
    {
        if(N[i] <= A[j])
        {
            printf("A");
            i++;
        }
        else
        {
            printf("B");
            j++;
        }
    }

     
        while(i < n1){
            printf("A");
            i++;
        }

    
        while(j < n2){
            printf("B");
            j++;
        }
    
}


int main()
{
    int i, n1, n2;
    scanf("%d ", &n1); 
    int N[n1];

    for(i=0; i < n1; i++)
    {
        scanf("%d", &N[i]);
    }

    scanf("%d ", &n2);
    int A[n2];
    for(i=0; i < n2; i++)
    {
        scanf("%d", &A[i]);
    }
    ImprimeSequencia(N, A, n1, n2);
    return 0;
}