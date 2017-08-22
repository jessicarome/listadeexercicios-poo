#include <stdio.h>
#include <stdlib.h>

/*Uma empresa precisa realizar uma estatística do salário de seus funcionários. Para isto precisa de um
programa que leia uma lista contendo os salários dos funcionários da empresa, e imprima quantos
funcionários ganham salário acima da média. Sabe-se que a empresa possui 50 funcionários.
 Considerando que não há um número fixo de 50 funcionários, o programa pergunta no
início quantos funcionários possui a empresa e realiza o restante do processo.*/

int main()
{
    int i, n, salario[50], somasalario, media, aux;

    printf("Digite o numero de funcionarios de sua empresa: ");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("Funcionario %d salario: \n", i+1);
        scanf("%d", &salario[i]);
        somasalario += salario[i];
    }
    media = somasalario/n;
    for (i=0; i<n; i++){
            if (salario[i] > media){
                 printf("Funcionario %d de salario %d maior que a \nmedia %d\n", i+1, salario[i], media);
            }
            else{
                printf("Sem funcionario com salario acima da media\n");
                return salario[i];
            }

    }
    return 0;
}
