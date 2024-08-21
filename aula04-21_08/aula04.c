#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double angulo, seno, cosseno, tangente;

    printf("Digite o valor de um angulo em graus!: \n");
    scanf("%lf", &angulo);
    printf("O angulo digitado eh: %lf\n", angulo);
    angulo = angulo *(3.14 / 180.0);

    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);


    printf("O resultado do seno, cosseno e tangente eh: %lf %lf %lf\n", seno, cosseno, tangente);


    return 0;
}