#include <stdio.h>

/*
1. Faça um programa que receba três inteiros e diga qual deles é o maior e
qual o menor. Consegue criar mais de uma solução?

*/

int main()
{
    int numA,
        numB,
        numC,
        maior,
        menor;

    printf("Digite o valor do primeiro numero");
    scanf("%d", &numA);

    fflush(stdin);

    printf("Digite o valor do segundo numero");
    scanf("%d", &numB);

    fflush(stdin);

    printf("Digite o valor do terceiro numero");
    scanf("%d", &numC);

    maior = numA;
    menor = numA;
    if (numB > maior)
    {
        maior = numB;
    }
    if(numB < menor)
    {
        menor = numB;
    }
    if(numC > maior)
    {
        maior = numC;
    }
    if(numC < menor)
    {
        menor = numC;
    }

    printf("o menoor numero eh %d, enquanto o maior eh %d", menor,maior);
}
