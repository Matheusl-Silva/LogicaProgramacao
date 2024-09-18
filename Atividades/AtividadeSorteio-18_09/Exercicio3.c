#include <stdio.h>

int main()
{
    int n1, n2, resultado = 1;

    printf("Escreva dois numeros positivos: \n");
    scanf("%d %d", &n1, &n2);

    for (int i = 0; i < n2; i++)
    {
        resultado *= n1;
    }

    printf("O valor %d elevado a %d eh: %d \n", n1, n2, resultado);
    
}