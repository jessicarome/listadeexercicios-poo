#include <stdio.h>
#include <stdlib.h>

void mesesdoano(int num){
    switch ( num )
  {
     case 1 :
       printf (" January\n");
     break;

     case 2 :
       printf (" February\n");
     break;

     case 3 :
        printf (" March\n");
     break;

     case 4 :
        printf (" April\n");
     break;

     case 5 :
        printf (" May\n");
     break;

     case 6 :
        printf (" June\n");
     break;

     case 7 :
        printf (" July\n");
     break;

     case 8 :
       printf (" August\n");
     break;

     case 9 :
        printf (" September\n");
     break;

     case 10 :
        printf (" October\n");
     break;

     case 11 :
        printf (" November\n");
     break;

     case 12 :
        printf (" December\n");
     break;

     default :
       printf ("Numero invalido!\n");
  }

  return 0;
}
int main()
{
    int numero;
    char janeiro[8] ={'j','a','n','e','i','r','o','\0'};
    char fevereiro[10] = {'f','e','v','e','r','e','i','r','o','\0'};
    char marco[6] = {'m','a','r','c','o','\0'};
    char abril[6] = {'a','b','r','i','l','\0'};
    char maio[5] = {'m','a','i','o','\0'};
    char junho[6] = {'j','u','n','h','o','\0'};
    char julho[6] = {'j','u','l','h','o','\0'};
    char agosto[7] = {'a','g','o','s','t','o','\0'};
    char setembro[9] = {'s','e','t','e','m','b','r','o','\0'};
    char outubro[8] = {'o','u','t','u','b','r','o','\0'};
    char novembro[9] = {'n','o','v','e','m','b','r','o','\0'};
    char dezembro[9] = {'d','e','z','e','m','b','r','o','\0'};

    printf("Digite um numero: ");
    scanf("%d", &numero);

    mesesdoano(numero);

    if(numero == 1){
        puts(janeiro);
    }

    if(numero == 2){
        puts(fevereiro);
    }

    if(numero == 3){
        puts(marco);
    }

    if(numero == 4){
        puts(abril);
    }

    if(numero == 5){
        puts(maio);
    }

    if(numero == 6){
        puts(junho);
    }

    if(numero == 7){
        puts(julho);
    }

    if(numero == 8){
        puts(agosto);
    }

    if(numero == 9){
        puts(setembro);
    }

    if(numero == 10){
        puts(outubro);
    }

    if(numero == 11){
        puts(novembro);
    }

    if(numero == 12){
        puts(dezembro);
    }

    return 0;
}
