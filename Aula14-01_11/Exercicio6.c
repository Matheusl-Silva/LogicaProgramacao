#include <stdio.h>
#include <stdlib.h>


int fatorial(int pokemon){
    int fac = 1;
    for(int i = 1; i <= pokemon; i++){
        fac *= i;
    }

    return fac;
}

int main()
{
    int num1;

    printf("Digite um numero: \n");
    scanf("%d", &num1);

    printf("O fatorial do numero digitado eh: %d\n", fatorial(num1));
}