#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void exericio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio05();

int main()
{
 int escolha;

 while (1)
 {
     printf("\nMenu\n");
     printf("1. Exericio1\n");
     printf("2. Exericio2\n");
     printf("3. Exericio3\n");
     printf("4. Exericio4\n");
     printf("5. Exericio5\n");
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
      case 4:
         exercicio4();
         break;
      case 5:
         exercicio05();
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

void exercicio4()
{
    double x1, x2, y1, y2, distancia, raiz;

    printf("Digite quatro pontos para descobrir a distancia: \n");
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);

    printf("x1: %lf\nx2: %lf\ny1: %lf\ny2: %lf\n", x1,x2,y1,y2);

    raiz = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    
    distancia = raiz;
    printf("O resultado da distancia eh de: \n%lf", distancia);
}

void exercicio05()
{
    double A, B, C, expre1, expre2;

    printf("Digite 3 numeros para calcular as expressoes:\n");
    scanf("%lf %lf %lf", &A, &B, &C);

    expre1 = pow(A + B,2);
    printf("O resultado da primeira conta eh de: %.2lf\n", expre1);
    expre2 = pow(B + C,2);
    printf("O resultado da segunda conta eh de: %.2lf\n", expre2);
}

 