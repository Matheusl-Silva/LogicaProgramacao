#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float num1,num2,num3,resultado;
    

    printf("Digite um numero para uma surpresa: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    resultado = 2 * ((float)(num1 - num3) / 8) - num2 * 5;

    printf("O resultado da equacaoo x = 2 * (( a - c)/8) - b * 5, eh: %f", resultado);

    return 0;
}  