#include <stdio.h>
/*
7. Tabela de notas - Escreva um programa que produza a seguinte saída na tela:
ALUNO(A)          NOTA
=========         =====
ALINE              9.0
MÁRIO              DEZ
SÉRGIO             4.5
SHIRLEY            7.0

*/
int main()
{
    float grade_aline, grade_mario, grade_sergio, grade_shirley;
    printf("Digite as notas dos quatro alunos em uma unica folha");
    scanf("%f %f %f %f", &grade_aline,&grade_mario,&grade_sergio,&grade_shirley);

    printf("ALUNO(A)          NOTA\n=========         =====\n");
    printf("ALINE              %.2f\nMARIO              %.2f\n", grade_aline,grade_mario);
    printf("SERGIO             %.2f\nSHIRLEY            %.2f",grade_sergio,grade_shirley);
    return 0;
}
