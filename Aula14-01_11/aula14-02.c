#include <stdio.h>
#include <stdlib.h>


float imc(float peso, float altura){

    float imc;
    imc = peso / (altura * altura);

    if ( imc < 18.5){
        printf("Abaixo do peso");
        printf("O seu imc eh:%f", imc);

    }else if (imc >= 18.5 && imc <= 25)
    {
        printf("Peso normal");
        printf("O seu imc eh:%f", imc);

    }else if (25 > imc && imc <= 30)
    {
        printf("Voce esta gordo, vai para academia");
        printf("O seu imc eh:%f", imc);

    }else if (imc > 30)
    {
        printf("Voce esta obeso!!!!!!");
        printf("O seu imc eh:%f", imc);
    }
    

    return imc;
}

int main()
{
    float peso, altura;
    printf("Digite o peso da pessoa \n");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa \n");
    scanf("%f", &altura);
    
    imc(peso, altura);

}