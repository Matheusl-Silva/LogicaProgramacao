#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2, distancia, raiz;

    printf("Digite quatro pontos para descobrir a distancia: \n");
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);

    printf("x1: %lf\nx2: %lf\ny1: %lf\ny2: %lf\n", x1,x2,y1,y2);

    raiz = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    
    distancia = raiz;
    printf("O resultado da distancia eh de: \n%lf", distancia);
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

void exercicio05 ()
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

void exericio06()
{
    int dia, mes, ano;

    printf("Digite um dia, mes e ano : \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    if (dia > 31 || dia < 1)
    {
        printf("O dia deve estar entre 1 e 31");
        return 1;
    }
    if (mes > 12 || mes < 1)
    {
        printf("O mes deve estar entre 1 e 12");
        return 1;
    }
    printf("A data informada foi de: \nDia: %d\nMes: %d\nAno: %d\n", dia, mes, ano); 
    
}