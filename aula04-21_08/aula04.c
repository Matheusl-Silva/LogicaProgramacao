#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double numero;

    printf("Digite um numero: \n");
    scanf("%lf", &numero);

    if (numero < 0)
    {
      printf("o numero eh negativo");
    }
    else
    {
        printf("o numero eh positivo");
    }
    
    return 0;
}