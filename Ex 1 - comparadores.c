#include <stdio.h>
/*
1. Faça o programa do exemplo do != , mas com o operador ==
*/

int main ()
{
    int numero;

    printf("Digite um numero de 1 a 10\n");
    scanf("%d",&numero);

    if (numero == 7)
    {
        printf("Parabens, voce entrou no sistema\n");
        return 1;
    }
    else
    {
        printf("Errado! Saia da matrix.\n");
        return 2;
    }
}
