#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double numero;

    printf("Digite um numero: \n");
    scanf("%lf", &numero);

    if (numero > 10)
    {
      printf("Parabens voce eh top:");
    }
    else
    {
        printf("voce nao eh top");
    }
    
    return 0;
}