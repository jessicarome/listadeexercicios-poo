#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int j,flag=0; //inicia  flag com 0;
	char caracter[20];

	printf("Informe uma palavra: ");
	scanf("%s",caracter);
	printf("Contrario: ");
	for(j=strlen(caracter); j>=0; j--){
			printf("%c",caracter[j]);
			if((caracter[strlen(caracter)-1]==caracter[0]) && (caracter[strlen(caracter)-2]==caracter[1]))
				flag++; //Se a condição for confirmada, flag passa a valer 1;
	}
	printf("\n\n");
	if(flag!=0)
		printf("PALINDROMO\n\n");
	else
		printf("NAO PALINDROMO\n\n");
}

