#include <stdio.h>
/*
Fa�a um programa que pergunte um n�mero ao usu�rio e diga se ele �
�mpar. Use o operador %.
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
