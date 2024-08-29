#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;

    printf("Digite dois numeros para verificar: \n");
    scanf("%d %d", &num1, &num2);

    if ((num1 && num2) % 2 == 0)
    {
        printf("Os numeros sao pares Parabens!");
    }
    else if (num1 % 2 == 0)
    {
        printf("O primeiro numero eh par");
    }
    else if (num2 % 2 == 0)
    {
        printf("O segundo numero eh par");
    }
    else{
        printf("Nenhum dos numeros eh par");
    }
    
    
    return 0;
}