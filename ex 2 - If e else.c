#include <stdio.h>

/*
Escreva um programa em C que recebe um inteiro e diga se é par ou
ímpar.
Use o operador matemático % (resto da divisão ou módulo) e o teste
condicional if.
*/

int main()
{
    int number;

    printf("Digite um inteiro: ");
    scanf("%d", &number);

    if (number%2 == 0)
    {
        printf("O numero %d eh par!", number);
    }
    else
    {
        printf("O numero %d eh impar!", number);
    }


}


