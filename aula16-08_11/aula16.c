#include <stdio.h>
#include <stdlib.h>

struct produto{
    char nome[100];
    int valor;
    int quant;
};

int main()
{
    struct produto produtos[2];

    for (int i = 0; i < 2; i++) {
        printf("Insira a descricao do produto %d: \n", i + 1);
        gets(produtos[i].nome);
        printf("Insira o valor e quantidade do produto %d: \n", i + 1);
        scanf("%d %d", &produtos[i].valor, &produtos[i].quant);
        getchar(); // para consumir o '\n' deixado por scanf
    }

    for (int i = 0; i < 2; i++) {
        printf("Produto %d: %s, Valor: %d, Quantidade: %d\n", i + 1, produtos[i].nome, produtos[i].valor, produtos[i].quant);
    }

    return 0;
}