#include <stdio.h>

/*
8. Letra grande - Elabore um programa para produzir na tela a letra C, de C Progressivo, usando a própria. Se fosse
‘C’, seria assim:
*/

int main()
{
    char letra;
    printf("Digite uma letra");
    letra = getchar();
    printf("%c%c%c%c%c",letra,letra,letra,letra,letra);
    printf("\n%c",letra);
    printf("\n%c",letra);
    printf("\n%c%c%c%c%c",letra,letra,letra,letra,letra);
    return 0;
}
