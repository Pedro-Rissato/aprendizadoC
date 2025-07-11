#include <stdio.h>
/*
Faça o programa do teste de maioridade usando o operador >=

*/
int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade >= 18)
    {
        printf("Voce ja atingiu a maioridade!");
        return 3;
        }
        else
        {
            printf("Voce eh de menor!");
            return 2;
        }

    }
