#include <stdio.h>
/*
Desafio 1. Crie um programa em C que pe�a um n�mero ao usu�rio e
armazene ele na vari�vel x. Depois pe�a outro n�mero e armazene na
vari�vel y.
Mostre esses n�meros. Em seguida, fa�a com que x passe a ter o valor de y,
e que y passe a ter o valor de x.
Dica: voc� vai precisar usar outra vari�vel.
*/

int main()
{
    int num1,num2,numCopy;

    printf("Digite um numero inteiro:");
    scanf("%d",&num1);

    fflush(stdin);

    printf("\nDigite mais um numero inteiro: ");
    scanf("%d",&num2);

    printf("Os numeros digitados foram: \n1: %d \n2: %d\n",num1,num2);

    numCopy = num1;
    num1 = num2;
    num2 = numCopy;

    printf("Os numeros invertidos ficaram como: \n1: %d\n2: %d",num1,num2);
}
