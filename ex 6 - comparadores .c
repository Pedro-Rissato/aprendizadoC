#include <stdio.h>
/*
Faça um programa que pergunte um número ao usuário e diga se ele é
ímpar. Use o operador %.
*/
int main()
{
    int numero;

    printf("Digite um numero qualquer\n");
    scanf("%d", &numero);

    if (numero%2==0)
    {
        printf("O numero %d eh par!", numero);
    }
    else
    {
        printf("O numero %d eh impar!", numero);
    }
}
