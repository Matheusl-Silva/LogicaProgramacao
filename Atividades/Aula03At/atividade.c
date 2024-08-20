#include <stdio.h> 
#include <stdlib.h>

void calcularIdadeEmDias();
void calcularAreaCirculo();
void calcularVolumeCirculo();
void ExercicioGasolina();
void contamulti();

int main() {
     int escolha;
 
     while (1) {
         // Exibe o menu
        printf("\nMenu:\n");
        printf("1. Calcular idade em dias\n");
        printf("2. Calcular area do circulo\n");
        printf("3. Calcular volume do circulo\n");
        printf("4. Exercicio Gasolina\n");
        printf("5. Conta multi\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);
                 // Executa a função correspondente à escolha do usuário
         switch (escolha) {
             case 1:
                 calcularIdadeEmDias();
                 break;
             case 2:
                 calcularAreaCirculo();
                 break;
             case 3:
                 calcularVolumeCirculo();
                 break;
             case 4:
                 ExercicioGasolina();
                 break;
             case 5:
                 contamulti();
                 break;
             case 6:
                 printf("Saindo...\n");
                 return 0;
             default:
                 printf("Opção inválida. Tente novamente.\n");
         }
     }
    return 0;
}

void calcularIdadeEmDias(){

  int anos, meses, dias, idadeEmDias;
  printf("Digite sua idade em anos: ");
  scanf("%d", &anos);

  printf("Digite sua idade em meses: ");
  scanf("%d", &meses);

  printf("Digite sua idade em dias: ");
  scanf("%d", &dias);

  idadeEmDias = (anos * 365) + (meses * 30) + dias;

  printf("Sua idade em dias eh de: %d\n", idadeEmDias);
}

void calcularAreaCirculo(){
    
    float raio, area;

    printf("Digite o raio total do circulo: ");
    scanf("%f", &raio);

    float PI;
    PI = 3.14;

    area = PI * raio * raio;

    printf("A area total do circulo com base no raio que informou eh de: %.2f", area);
    
}

void calcularVolumeCirculo(){
    
    float altura, volume, PI, raio;

    printf("Digite o raio total do circulo: ");
    scanf("%f", &raio);

    printf("Agora digite a altura do circulo: ");
    scanf("%f", &altura);

    PI = 3.14;
    volume = PI * (raio * raio) * altura;

    printf("O volume do circulo eh: %.2f", volume);
}

void ExercicioGasolina(){

  float gasolina, dinheiro, valorGasolina;

  //gasolina = 5.90;
  printf("Digite o valor do combustivel: \n");
  scanf("%f", &gasolina);

  printf("A Gasolina Custa %.2f\nDigite o valor que deseja abastecer: ", gasolina);
  scanf("%f", &dinheiro);
  
  valorGasolina = dinheiro / gasolina;
 
  printf("O total de litros foi de: %.2f", valorGasolina);
}

void contamulti(){

  float valor1, valor2, valor3, valor4, resultado;

  printf("Digite quatro valores para realizar a conta: \n");
  scanf("%f %f %f %f", &valor1, &valor2, &valor3, &valor4);
  
  resultado = (valor1 * valor3) + (valor2 + valor4);
  printf("O resultado da conta eh: %f \n", resultado);

}
