#include <stdio.h>

int main() {
    char tipo;
    int tinto = 0, branco = 0, rose = 0, total = 0;

    // Loop para receber os tipos de vinhos até que 'F' seja digitado
    do {
        printf("Informe o tipo de vinho (T - Tinto, B - Branco, R - Rosê, F - Fim): ");
        scanf(" %c", &tipo);  // O espaço antes de %c é para ignorar espaços em branco

        // Verifica o tipo de vinho e incrementa a contagem correspondente
        if (tipo == 'T' || tipo == 't') {
            tinto++;
            total++;
        } else if (tipo == 'B' || tipo == 'b') {
            branco++;
            total++;
        } else if (tipo == 'R' || tipo == 'r') {
            rose++;
            total++;
        } else if (tipo != 'F' && tipo != 'f') {
            printf("Tipo inválido! Por favor, insira T, B, R ou F.\n");
        }

    } while (tipo != 'F' && tipo != 'f');  // O loop continua até que 'F' seja digitado

    // Exibe os resultados
    printf("\nLevantamento do estoque de vinhos:\n");
    printf("Quantidade de vinhos tintos: %d\n", tinto);
    printf("Quantidade de vinhos brancos: %d\n", branco);
    printf("Quantidade de vinhos rosês: %d\n", rose);
    printf("Quantidade total de vinhos: %d\n", total);

    return 0;
}