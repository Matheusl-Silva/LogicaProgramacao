#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double numero, resultado;
    printf("Digite um numero para saber sua raiz: \n");
    scanf("%lf", &numero);

    resultado = sqrt(numero);
    printf("Resultado eh: %lf\n",resultado);


    return 0;
}