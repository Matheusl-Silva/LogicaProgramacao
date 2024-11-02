#include <stdio.h>
#include <stdlib.h>



int soma(int numero){

    int soma = 0;
    for(int i = 0; i <= numero; i++){
        soma += i;
    }

    return soma;
}


int main()
{
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    printf("A soma de 0 ate o numero que digitou eh:%d\n", soma(numero));
}