#include <stdio.h>  

int main ()
{
    int idade, total_homens = 0, total_mulheres = 0;
    int somaHomens = 0;
    float peso, somaMulheres = 0.0;
    char sexo;

    for(int i = 0; i < 10; i++){
        printf("Pessoa %d: \n", i + 1);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);
        printf("Digite o sexo (M para masculino, F para feminino): ");
        scanf(" %c", &sexo);

        // Verifica o sexo e faz os cálculos correspondentes
        if(sexo == 'M' || sexo == 'm'){
            total_homens++;
            somaHomens += idade;
        } else if (sexo == 'F' || sexo == 'f') {
            total_mulheres++;
            somaMulheres += peso;
        } else {
            printf("Sexo inválido! Por favor, insira M ou F.\n");
            i--;  // Repetir a entrada para garantir dados válidos
        }
    }

    printf("Total de homens: %d\n", total_homens);
    printf("Total de mulheres: %d\n", total_mulheres);
    printf("Média das idades dos homens: %.2f\n", total_homens ? somaHomens / total_homens : 0);
    printf("Média dos pesos das mulheres: %.2f\n", total_mulheres ? somaMulheres / total_mulheres : 0);

    return 0;
}