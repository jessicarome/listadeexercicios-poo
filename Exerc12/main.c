#include <stdio.h>
#define MAX 2

/*Escreva um programa que leia uma lista contendo o peso de uma s�rie de indiv�duos em um vetor de
n�meros reais. A lista possui 150 elementos.
Depois que a lista foi toda inserida o programa deve procurar e imprimir qual a posi��o no vetor onde
est� o menor peso.*/

int main()
{
    float peso[MAX], maior=0, menor=0;
    int i;

    for (i=0 ; i<MAX ; i++){
        printf("peso %d: \n", i+1);
        scanf("%f", &peso[i]);
    }
    menor = peso[0];
    for (i=0 ; i<MAX ; i++)
    {
        if (menor > peso[i]) menor = peso[i];
    }
    printf("%.2f menor %.2f", menor);

    return 0;
}
