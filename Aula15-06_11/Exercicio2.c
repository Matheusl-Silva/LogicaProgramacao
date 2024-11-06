#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[10], num, quantidade = 0, iguais = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite um valor: \n");
        scanf("%d", &valores[i]);
    }


    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++){
        if(valores[i] > num){
            printf("%d\n", valores[i]);
        }
    }

    for (int i = 0; i < 10; i++){
        if(valores[i] < num){
            quantidade ++;
        }
    }
    

    for (int i = 0; i < 10; i++){
        if(valores[i] == num){
            iguais ++;
        }
    }

    printf("Numeros maiores que %d: \n", num);
    printf("Numeros menores que %d: %d \n", num, quantidade);
    printf("QUantidade de vezes que o valor %d apareceu: %d\n", num, iguais);

}