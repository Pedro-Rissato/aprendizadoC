#include <stdio.h>
/*
0. Fa�a um programa que pe�a dois n�meros ao usu�rio e mostre qual o
maior e qual o menor
*/
int main()
{
    float num1, num2;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);

    fflush(stdin);

    printf("Digite o segundo n�uero: \n");
    scanf("%f", &num2);

    if(num1>num2)
    {
        printf("O numero %f e maior!", num1);
        return 2;
    }
    else
    {
        printf("O numero %f e maior!", num2);
        return 3;
    }
}
