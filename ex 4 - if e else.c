#include <stdio.h>

/*
Para doar sangue � necess�rio ter entre 18 e 67 anos. Fa�a um aplicativo
na linguagem C que pergunte a idade de uma pessoa e diga se ela pode
doar sangue ou n�o. Use alguns dos operadores l�gicos OU (||) e E (&&).
*/

int main ()
{
    int idade;

    printf("Digite sua idade para saber se esta apto a doar sangue: ");
    scanf("%d", &idade);

    if(idade<18 || idade>67)
    {
        printf("Voce nao esta apto a doar sangue");
    }
    else
    {
        printf("Voce esta apto a doar sangue");
    }
}
