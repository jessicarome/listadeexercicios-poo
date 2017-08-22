#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorEmprestimo, parcelas, juros, pj, pe, acumulodejuros;
    int mes;

    printf(" Insira o valor do emprestimo: ");
    scanf("%f", &valorEmprestimo);
    printf("Insira o valor a ser pago por mes: ");
    scanf("%f", &parcelas);
    printf("Insira qual sera a porcentagem de juros: ");
    scanf("%f", &juros);

    mes = 1;
    pj = 0;
    pe = 0;
    acumulodejuros = 0;

    do {
        pj = parcelas*(juros/100);
        pe = parcelas-pj;

        valorEmprestimo = valorEmprestimo - pe;
        acumulodejuros = acumulodejuros + pj;

        printf("\n\n Mes: %d \n", mes);
        printf(" Valor em dinheiro dos juros pagos: %.2f \n", pj);
        printf(" Valor em dinheiro aplicado no pagamento da divida: %.2f \n", pe);
        printf(" Valor acumulado de juros ja pagos: %.2f \n", acumulodejuros);
        printf(" Valor ainda por pagar do emprestimo: %.2f \n", valorEmprestimo);

        mes = mes+1;

    }while(valorEmprestimo>=parcelas);

    if(valorEmprestimo<=0){
        printf(" O numero que de meses que foram necessarios para pagar o valor do emprestimo: %d \n", mes);
        printf(" A divida ja foi quitada. \n\n");
    }else{
        printf(" O numero que de meses que foram necessarios para pagar o valor do emprestimo: %d \n", mes);
        printf(" O valor da ultima parcela: %.2f \n\n", valorEmprestimo);

    }

    return 0;
}
