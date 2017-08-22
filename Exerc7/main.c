#include <stdio.h>
#include <math.h>

int main()
{
    printf(" *****EXEMPLO EQUAÇAO 2 GRAU***** \n");
    printf("        Ax^2 + Bx + C \n");

    float A, B, C, delta, x1, x2;

    printf("Valor de A: ");
    scanf("%f", &A);
    printf("Valor de B: ");
    scanf("%f", &B);
    printf("Valor de C: ");
    scanf("%f", &C);

    delta = ((B*B) - (4*A*C));
    printf("O valor de delta %.2f\n", delta);

    if (delta > 0){
        x1 = ((-B + sqrt(delta))/ (2*A));
        x2 = ((-B - sqrt(delta))/ (2*A));
        printf(" raiz 1 %.2f, raiz 2 %.2f\n", x1, x2);
    }
    else if (delta == 0){
        x1 = (-B /(2*A));
        printf("duas raizes iguais %.2f \n", x1);
    }
    else{
        printf("nao existe raizer\n");
    }

    return 0;
}
