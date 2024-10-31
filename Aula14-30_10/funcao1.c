#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void soma(int num1, int num2);
int main()
{
    int n1 = 0, n2 = 0;
    printf("Digite um numero para ser somado: \n");
    scanf("%d", &n1);
    printf("Digite outro numero para ser somado: \n");
    scanf("%d", &n2);
    soma(n1, n2);
    return 0;
}

void soma(int num1, int num2)
{
    int somam = num1 + num2;
    printf("A soma eh: %d", somam);
}