#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que carregue dois valores A e B pelo teclado e imprima todos os números
ímpares entre A e B.*/

int main()
{
    int A, B, i;

    printf("Digite dois numero: ");
    scanf("%d%d", &A, &B);

    if (A<B)
    {
       for (i=A ; i<=B ; i++)
        {
            if (i%2!=0)
        {
            printf("%d\n", i);
        }
        }
    }
    else
    {
        for (i=A; i>=B ; i--)
        {
            if (i%2!=0)
        {
            printf("%d\n", i);
        }
        }
    }
    return 0;
}
