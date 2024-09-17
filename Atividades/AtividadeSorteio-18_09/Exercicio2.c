#include <stdio.h>

int main() {
    int numero, maior, menor, soma = 0;
    float media;

    // Recebe o primeiro valor e inicializa maior e menor
    do {
        printf("Digite o valor 1 (inteiro e positivo): ");
        scanf("%d", &numero);
        if (numero <= 0) {
            printf("Valor inválido! Por favor, insira um número inteiro positivo.\n");
        }
    } while (numero <= 0);

    maior = menor = numero; // Inicializa maior e menor com o primeiro valor
    soma += numero; // Adiciona o primeiro valor à soma

    // Recebe os próximos 9 valores
    for (int i = 2; i <= 10; i++) {
        do {
            printf("Digite o valor %d (inteiro e positivo): ", i);
            scanf("%d", &numero);
            if (numero <= 0) {
                printf("Valor inválido! Por favor, insira um número inteiro positivo.\n");
            }
        } while (numero <= 0);

        // Atualiza maior, menor e soma
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
        soma += numero;
    }

    // Calcula a média
    media = (float)soma / 10;

    // Exibe os resultados
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}