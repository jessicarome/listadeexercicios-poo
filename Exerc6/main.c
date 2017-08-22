#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0, cont = 0, j = 0;
    char dados[50], invertido[50];

    printf("Digite a sequencia:\n\n", 136);
    scanf("%c", &dados);

    while (dados[i] != '\0')
{
    cont++;
    i++;
}
    printf("\n\nOrdem inversa:\n\n");
    for(i = cont; i >= 0; i--)
{
    if (dados[i] != '\0')
{
    printf("%c", dados[i]);
    invertido[j] = dados[i];
    j++;
}
}
    invertido [j] = '\0';
    if(strcmp(dados, invertido) == 0)
{
        printf("\n\nPalindromo!\n\n", 161);
}
    else
{
    printf("\n\nNao eh um palindromo!\n\n", 198, 130, 161);
}
    printf("\n");

return(0);
}
