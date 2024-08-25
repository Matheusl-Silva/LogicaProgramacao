#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, resultado;
    
    printf("Digite um numero de 3 casas decimais: ");
    scanf("%d", &numero);
    if (numero < 100 || numero > 999)
    {
        printf("O numero deve ter apenas 3 digitios.\n");
        return 1;
    }

    resultado = (numero / 10) % 10;

    printf("O digito da casa das dezenas eh de %d\n");
}

void exercicio01()
{
    double raio, perimetro, area;
    printf("Digite o valor de um raio para descobrir a area e do perimetro: \n");
    scanf("%lf", &raio);
    area = 3.14  * (raio * raio);
    perimetro = 2 * 3.14 * raio;
    printf("O valor do raio eh de\n%.1lf\nperimetro eh de:\n%.1lf", raio, perimetro);
}

void exercicio02()
{
    double meses, dias, dias_vividos;
    printf("Digite sua idade em mees: ");
    scanf("%lf", &meses);
    printf("Agora digite em dias: ");
    scanf("%lf", &dias);

    dias_vividos = meses * 30 + dias;

    printf("Parabens voce viveu aproximadamente %1.lf dias.\n", dias_vividos);
}

void exercicio03()
{
    double numero, resultado;
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    resultado = numero * 0.04;
    
    printf("4 porcento desse numero eh de %2.lf\n", resultado);
}

void exercicio04()
{
    double distancia, tempo, velocidadeMedia;

    printf("Digite a distancia e o tempo que percorreu durante uma viagem: ");
    scanf("%lf %lf", &distancia, &tempo);

    velocidadeMedia = distancia / tempo;

    printf("A velocidade media percorrida eh de: %lf\n", velocidadeMedia);
}