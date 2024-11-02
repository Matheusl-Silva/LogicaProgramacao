#include <stdio.h>
#include <stdlib.h>


float mediaAluno(float n1, float n2, float n3, char letra){
    float media;
    if(letra == 'A' || letra == 'a'){
        media = (n1 + n2 + n3) / 3;
    }else if (letra == 'P' || letra == 'p'){
        media = (n1 * 5 + n2 * 3 + n3 * 2) /3;
    }
    return media;
}

int main()
{
    char letra;
    float n1, n2, n3;
    printf("Digite 3 notas de um aluno!\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf("Digite A para calcular a media e P para a media ponderada com os pesos(5,3 e 2)\n");
    scanf(" %c", &letra);

    if(letra == 'A' || letra == 'a'){
        printf("A media do aluno foi:%f\n", mediaAluno(n1, n2, n3, letra));
    }else if (letra == 'P' || letra == 'p'){
    {
        printf("A media ponderada do aluno foi:%.2f\n", mediaAluno(n1, n2, n3, letra));
    }
    
    }
}