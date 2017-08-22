#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero, seqFib1=1, seqFib2=1, soma;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    do {
        soma = seqFib1 + seqFib2;
        seqFib1 = seqFib2;
        seqFib2 = soma;

    } while(soma < numero);

    if (soma == numero)
    {
        printf("Faz parte da sequencia de FIBONACCI\n");
    }
    else {
        printf("Nao faz parte da sequencia FIBONACCI");
    }

    return 0;
}
