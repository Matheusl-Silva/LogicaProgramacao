#include <stdio.h>
#include <stdlib.h>

//linha aluno bimestre coluna
int main()
{
    int facul[5][2], soma = 0, media = 0;

    for(int l = 0; l < 5;  l++){
        for(int c = 0; c < 2; c++){
            printf("Digite a nota do ALuno %d\n",c+1);
            scanf("%d", &facul[l][c]);
        }
    }
    printf("Aluno \t bim1\t bim2\t \n");
    for(int l = 0; l < 5;  l++){
        soma = 0;
        for(int c = 0; c < 2; c++){
            printf("%d\t", facul[l][c]);
            soma += facul[l][c];
        }
        media = soma/2;
        printf("%d \t", media);
        if(media >= 6.0){
            printf("Aprovado! parabens");
        }else{
            printf("Reprovado");
        }
        printf("\n");
    }
    

}