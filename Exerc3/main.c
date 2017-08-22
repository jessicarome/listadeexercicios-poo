#include <stdio.h>
#define MAX 50

int main()
{
	int numero;
	int vetBin[MAX];// vetor de MAX posi��es para guardar o n�mero em bin�rio
	int i = 0, j;// vari�veis de controle de loop

    printf("Digite um numero para converter para binario: ");
    scanf("%d", &numero);

	while(numero > 0)// enquanto "num" for maior que 0
	{
		vetBin[i] = numero % 2; // obt�m o resto da divis�o de num por 2
		i++;
		numero = numero / 2;
	}

	printf("Em binario fica: ");

	for(j = i - 1; j >= 0; j--) // percorre o vetor para mostrar o n�mero em bin�rio
		printf("%d", vetBin[j]);
	printf("\n");

	return 0;
}
