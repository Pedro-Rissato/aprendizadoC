#include <stdio.h>
/*
3. Fa�a o programa do exame de pr�stata usando o operador >
*/

int main()
{
    int idade;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    if (idade >44)
    {

        printf("Eh amigo, ja era, vai ter que fazer o exame de prostata");
    }
    else
    {
        printf("Voce nao precisa fazer o exame de prostata... ainda...\n");
    }
}
