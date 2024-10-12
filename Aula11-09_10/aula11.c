#include <stdio.h>

int main()
{
    int vetor[10];
    for ( int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vetor[i]);
    }
    for(int j = 0; j < 10; j++){
        printf("[%d]", vetor[j]);
    }

    
}