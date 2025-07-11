#include <stdio.h>
/*
4. Faça o programa do teste de maioridade usando o operador <=
*/
int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if(idade <= 17)
    {

        printf("Voce eh de menor!");
        return 3;
        }
        else
        {
            printf("Voce ja atingiu a maioridade!");
            return 2;
        }

    }
