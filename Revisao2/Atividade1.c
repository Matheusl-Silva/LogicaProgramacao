#include <stdio.h>

int main()
{
  int vetor[10], maior = 0;
  printf("Criando um vetor\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor %d: ", i);
    scanf("%d", &vetor[i]);
    if (i == 0)
    {
      maior = vetor[i];
    }
    else if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
    printf("Rodada %d - O maior valor eh %d \n", i, maior);
  }
  printf("O maior valor eh %d", maior);
}