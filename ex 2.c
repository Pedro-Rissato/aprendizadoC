#include <stdio.h>

int main()
{
    double num1,num2,result;

        printf("Digite dois numeros\n");

        // o scan para float � %f, enquanto para double � %lf!

        scanf("%lf %lf", &num1,&num2);

        result = num1/num2;

        printf("O resultado da divisao entre'%f' e '%f' eh %.3f\n",num1,num2,result);
        return 0;
}

