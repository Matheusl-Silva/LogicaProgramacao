#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num, maior, menor, primeiro = 0;

    do
    {
        printf("Digite um numero, ou digite 0- para sair\n");
        scanf("%d", &num);
        if (primeiro == 0)
        {
            maior = menor = num;
            primeiro++;
        }
        if (num < menor && num != 0)
        {
            menor = num;
        }
        if (num > maior && num != 0)
        {
            maior = num;
        }
        
    } while (num != 0);
     printf("o Maior numero digitado eh %d\ne o menor numero digitado eh %d\n", maior, menor);

    return 0;
}