#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2;

    printf("Digite dois numeros para verificar se sao iguais\n");
    scanf("%lf %lf", &x1, &x2);

    if (x1 == x2)
    {
      printf("Os numeros sao iguais");
    }
    else{
      printf("Nao sao iguais");
    }
    
    return 0;
}