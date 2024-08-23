#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exericio1();
void exercicio2();
void exercicio3();

int main()
{
    int escolha;

    while (1)
    {
        printf("\nMenu\n");
        printf("1. Exericio1\n");
        printf("2. Exericio2\n");
        printf("3. Exericio3\n");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            exericio1();
            break;
        case 2:
            exercicio2();
            break;
         case 3:
            exercicio3();
            break;
        default:
            printf("Escolha incorreta, escolha novamente.\n");
        }
    }
    return 0;
    
}

void exericio1()
{
    double numero, quadrado,cubo;

    printf("Digite um numero e descubra seu quadrado e seu cubo: ");
    scanf("%lf", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;
    printf("O resultado das operacoes eh:\nquadrado: %lf\ncubo: %lf", quadrado, cubo);
}

void exercicio2()
{
    double num1, num2, raiz;

    printf("Digite dois numeros para receber a raiz quadrada da multiplicacao de ambos:\n");
    scanf("%lf %lf", &num1, &num2);

    raiz = sqrt(num1 * num2);
    printf("O resultado da operacao eh: %lf\n", raiz);
}

void exercicio3()
{
    double razao, n, primeiro, PA;

    printf("Entre com a razao, N, primerio, para descobrir o valor da PA: \n");
    scanf("%lf %lf %lf", &razao, &n, &primeiro);

    PA = primeiro + (n - 1) * razao;

    printf("O resultado da PA eh de:\nPA: %lf", PA);
}