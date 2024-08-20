#include <stdio.h> 
#include <stdlib.h>

int main()
{
  float gasolina, dinheiro, valorGasolina;

  //gasolina = 5.90;
  printf("Digite o valor do combustivel: \n");
  scanf("%f", &gasolina);

  printf("A Gasolina Custa %.2f\nDigite o valor que deseja abastecer: ", gasolina);
  scanf("%f", &dinheiro);
  
  valorGasolina = dinheiro / gasolina;
 
  printf("O total de litros foi de: %.2f", valorGasolina);
  return 0;
}  

void calcularIdadeemDias(){

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
    PI = 3,14;

    area = PI * raio * raio;

    printf("A area total do circulo com base no raio que informou eh de: %.2f", area);
    
  return 0;

}

void calcularVolumeCirculo(){
    
    float altura, volume, PI, raio;

    printf("Digite o raio total do circulo: ");
    scanf("%f", &raio);

    printf("Agora digite a altura do circulo: ");
    scanf("%f", &altura);

    PI = 3,14;
    volume = PI * (raio * raio) * altura;

    printf("O volume do circulo eh: %.2f", volume);
}
 //int main() {
 //    int escolha;
 //
 //    while (1) {
 //        // Exibe o menu
 //        printf("\nMenu:\n");
 //        printf("1. Calcular idade em dias\n");
 //        printf("2. Exibir saudação\n");
 //        printf("3. Sair\n");
 //        printf("Escolha uma opção: ");
 //        scanf("%d", &escolha);
 //
 //        // Executa a função correspondente à escolha do usuário
 //        switch (escolha) {
 //            case 1:
 //                calcularIdadeEmDias();
 //                break;
 //            case 2:
 //                saudacao();
 //                break;
 //            case 3:
 //                printf("Saindo...\n");
 //                return 0;
 //            default:
 //                printf("Opção inválida. Tente novamente.\n");
 //        }
 //    }
 //
 //    return 0;
 //}