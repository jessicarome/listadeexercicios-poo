#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia o nome e salário atual de um funcionário. O programa deve calcular
seu novo salário (segundo a tabela abaixo) e mostrar o nome, o salário atual e o salário reajustado do
funcionário:
    repita o processo acima até que seja digitado FIM no lugar do nome do funcionário;
 mostrar ao final do programa a soma dos salários atuais, a soma dos salários reajustados e a
diferença entre eles.*/

int main()
{
    float salario, reajusalario, diferesala=0,
    somosalario=0,
    somareajusalario=0;
    char nome[50];
    char saida[5]={'f', 'i', 'm', '\0'};

    printf("Nome do funcionario: \n");
    fgets(nome,50,stdin);

    do{
        printf("Salario: \n");
        scanf("%f", &salario);
        somosalario += salario;

        if (salario<=150){
            reajusalario = salario*1.25;
            puts(nome);
            printf(" \nsalario antigo: %.2f \nsalario novo %.2f\n", salario, reajusalario);}
        else if (salario>150 && salario<= 300){
            reajusalario = salario*1.20;
            puts(nome);
            printf(" \nsalario antigo: %.2f \nsalario novo %.2f\n", salario, reajusalario);
        }
        else if (salario>300 && salario<= 600){
            reajusalario = salario*1.15;
            puts(nome);
            printf(" \nsalario antigo: %.2f \nsalario novo %.2f\n", salario, reajusalario);
        }
        else {
            reajusalario = salario*1.10;
           puts(nome);
            printf(" \nsalario antigo: %.2f \nsalario novo %.2f\n", salario, reajusalario);
        }
        somareajusalario += reajusalario;

        printf("Se quiser adicionar novo funcionario, digite nome dele, o fim para sair\n");
        scanf("%s", nome);

    }while(stricmp(nome,saida));
    diferesala = somareajusalario - somosalario;

    printf("%.2f soma dos salarios \n%.2f soma dos salarios reajustados e \na diferenca deles sao %.2f\n", somosalario, somareajusalario, diferesala);

    return 0;
}
