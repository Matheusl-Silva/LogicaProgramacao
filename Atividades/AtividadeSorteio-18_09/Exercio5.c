#include <stdio.h>

int main() {
    int idade, i;
    float peso;
    
    // Variáveis para armazenar a soma dos pesos e a contagem de pessoas em cada faixa etária
    float somaPeso1_10 = 0, somaPeso11_20 = 0, somaPeso21_30 = 0, somaPeso31 = 0;
    int cont1_10 = 0, cont11_20 = 0, cont21_30 = 0, cont31 = 0;

    // Loop para receber a idade e o peso de 15 pessoas
    for (i = 0; i < 15; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        // Verifica a faixa etária e acumula o peso e a contagem de pessoas
        if (idade >= 1 && idade <= 10) {
            somaPeso1_10 += peso;
            cont1_10++;
        } else if (idade >= 11 && idade <= 20) {
            somaPeso11_20 += peso;
            cont11_20++;
        } else if (idade >= 21 && idade <= 30) {
            somaPeso21_30 += peso;
            cont21_30++;
        } else if (idade > 30) {
            somaPeso31 += peso;
            cont31++;
        } else {
            printf("Idade inválida!\n");
        }
    }

    // Exibe as médias dos pesos para cada faixa etária
    if (cont1_10 > 0) {
        printf("Média dos pesos de 1 a 10 anos: %.2f\n", somaPeso1_10 / cont1_10);
    } else {
        printf("Nenhuma pessoa na faixa etária de 1 a 10 anos.\n");
    }

    if (cont11_20 > 0) {
        printf("Média dos pesos de 11 a 20 anos: %.2f\n", somaPeso11_20 / cont11_20);
    } else {
        printf("Nenhuma pessoa na faixa etária de 11 a 20 anos.\n");
    }

    if (cont21_30 > 0) {
        printf("Média dos pesos de 21 a 30 anos: %.2f\n", somaPeso21_30 / cont21_30);
    } else {
        printf("Nenhuma pessoa na faixa etária de 21 a 30 anos.\n");
    }

    if (cont31 > 0) {
        printf("Média dos pesos de maiores de 31 anos: %.2f\n", somaPeso31 / cont31);
    } else {
        printf("Nenhuma pessoa na faixa etária de maiores de 31 anos.\n");
    }

    return 0;
}