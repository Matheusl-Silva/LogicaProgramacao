#include <stdio.h> 
#include <stdlib.h>

int main()
{
    float numeros [2];
    for(int i = 0; i < 3; i++)
    {
        int pos = 0;
        printf("Digite um numero: \n");
        scanf("%f", &numeros[pos]);
    }
    float media = (numeros[0] + numeros[1] + numeros[2]) /3;
    printf("Sua media eh: %f", media);
    return 0;
}