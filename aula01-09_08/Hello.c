#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1, n2, sum;

    printf("Digite o número 1: ");
    scanf("%lf", &n1);


    printf("Digite o número 2: ");
    scanf("%lf", &n2);

    sum = n1 + n2;

    printf("Soma total dos números %.2lf", sum);
    return 0;
}
