#include <stdio.h>

/*
Escreva um programa que pergunte o raio de uma circunfer�ncia, e em
seguida mostre o di�metro, comprimento e �rea da circunfer�ncia
*/

int main()
{
    float raio, pi, diametro,comprimento, area;
    pi = 3.14159;

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    comprimento = 2*pi*raio;
    diametro = raio*2;
    area = pi*(raio*raio);

    printf("Os valores de area. diametro e comprimento sao: \n");
    printf("comprimento:          %f\n", comprimento);
    printf("diametro:             %f\n",diametro);
    printf("area:                 %f\n",area);



}
