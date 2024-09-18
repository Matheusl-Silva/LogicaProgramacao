#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    // Loop para receber os valores até que -99 seja digitado
    do {
        printf("Digite um valor inteiro (-99 para sair): ");
        scanf("%d", &numero);

        if (numero != -99) {
            soma += numero;  // Acumula a soma dos valores
            contador++;      // Conta quantos valores foram inseridos
        }

    } while (numero != -99);

    // Verifica se algum valor foi inserido antes de calcular a média
    if (contador > 0) {
        media = (float)soma / contador;  // Calcula a média
        printf("Soma dos valores: %d\n", soma);
        printf("Média dos valores: %.2f\n", media);
    } else {
        printf("Nenhum valor válido foi inserido.\n");
    }

    return 0;
}