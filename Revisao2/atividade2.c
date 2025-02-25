#include <stdlib.h>
#include <stdio.h>

int main()
{
  int n = 0;
  int matriz[n][n];

  printf("Digite o tamanho do quadrado\n");
  scanf("%d", &n);

  for (int l = 0; l < n; l++)
  {
    for (int c = 0; c < n; c++)
    {
      printf("Digite o valor para a lina %d, coluna %d\n", l, c);
      scanf("%d", &matriz[l][c]);
    }
  }

  return 0;
}
