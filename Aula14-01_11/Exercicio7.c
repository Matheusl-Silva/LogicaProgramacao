#include <stdio.h>
#include <stdlib.h>


int NumeroMaior(int numero1, int numero2){
    
    if(numero1 > numero2){
        printf("O maior numero eh: %d\n", numero1);
    }else{
        printf("O maior numero eh: %d\n", numero2);
    }

    return 0;
}



int main()
{
    int n1, n2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &n1, &n2);

    NumeroMaior(n1, n2);
}