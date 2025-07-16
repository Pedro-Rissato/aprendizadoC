#include <stdio.h>

/*
5. Escreva um programa que pergunte o dia, mês e ano do aniversário de
uma pessoa e diga se a data é válida ou não. Caso não seja, diga o motivo.
Suponha que todos os meses tem 31 dias e que estejamos no ano de 2013.

*/

int main()
{
    int dia, mes, ano;

    printf("Digite o dia, mes e ano do seu nascimento da forma dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia,&mes,&ano);

    if (dia>31 || dia <1)
    {
        printf("O dia %d nao existe!", dia);
    }
    else if (mes>12)
    {
        printf("o mes %d nao existe!", mes);
    }
    else if ( mes <1 )
    {
        printf("Nao existe um mes zero ou menor que zero!");
    }
    else if(ano>2013)
    {
        printf("Estamos em 2013! Voce nao nasceu no ano de %d", ano);
    }
    else
    {
        printf("A data %d/%d/%d e valida!", dia, mes, ano);
    }
}
