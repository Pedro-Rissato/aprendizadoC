#include <stdio.h>
/*
Desafio 1. Crie um programa em C que peça um número ao usuário e
armazene ele na variável x. Depois peça outro número e armazene na
variável y.
Mostre esses números. Em seguida, faça com que x passe a ter o valor de y,
e que y passe a ter o valor de x.
Dica: você vai precisar usar outra variável.
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
