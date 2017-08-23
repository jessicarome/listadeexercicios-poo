#include <stdio.h>
#define MAX 3

/*Escreva um programa que leia uma lista contendo o peso de uma série de indivíduos em um vetor de
números reais. A lista possui 150 elementos.
Depois que a lista foi toda inserida o programa deve procurar e imprimir qual a posição no vetor onde
está o menor peso.*/

int main()
{
    float peso[MAX], maior=0, menor=0;
    int i, aux=0;

    for (i=0 ; i<MAX ; i++){
        printf("peso %d: ", i+1);
        scanf("%f", &peso[i]);
    }
    menor = peso[0];
    for (i=0 ; i<MAX ; i++)
    {
        if (menor > peso[i])
            {menor = peso[i];
            aux=i+1;
    }
    }
    printf("\n%.2f menor na posicao do vetor %d\n", menor, aux);

    return 0;
}

