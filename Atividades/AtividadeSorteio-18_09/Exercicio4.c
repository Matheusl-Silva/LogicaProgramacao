#include <stdio.h>

int main()
{
    int opcao;
    float valor1, valor2, resultado;

    do
    {
       printf("Escolha uma opcao a baixo:\n");
       printf("1 - Multiplacao:\n");
       printf("2 - Somar:\n");
       printf("3 - Subtrair:\n");
       printf("4 - Dividir:\n");
       printf("5 - Sair:\n");
       printf("Digite uma opcao que deseja:\n");
       scanf("%d", &opcao);
        

        if(opcao >= 1 && opcao <= 4){
            printf("Digite o primeiro valor: ");
            scanf("%f", &valor1);
            printf("Digite o segudo valor: ");
            scanf("%f", &valor2);
        }
        switch (opcao)
        {
        case 1:
            resultado = valor1 * valor2;
            printf("O Resultado da multiplicacao eh: %.2f\n", resultado);
            break;
        case 2:
            resultado = valor1 + valor2;
            printf("O Resultado da adicao eh: %.2f\n", resultado);
            break;
        case 3:
            resultado = valor1 - valor2;
            printf("O Resultado da subtracao eh: %.2f\n", resultado);
            break;
        case 4:
            if(valor2 != 0){
            resultado = valor1 / valor2;
            printf("O Resultado da divisao eh: %.2f\n", resultado);
            }else{
                printf("Erro: Divisao por zero nao permitida");
            }

            break;
        
        default:
            printf("Opcao Invalida!! tente novamente. \n");
        }
    } while (opcao != 5);
    
}