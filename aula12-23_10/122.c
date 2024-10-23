#include <stdio.h>
#include <stdlib.h>

//linha aluno bimestre coluna
int main()
{
    int facul[3][5];

    for(int l = 0; l < 5;  l++){
        for(int c = 0; c < 3; c++){
            printf("Semestre do aluno: %d\ninsira a nota do aluno: %d\n", l+1, c+1);
            scanf("%d", &facul[l][c]);
        }
    }
        for(int l = 0; l < 5;  l++){
        for(int c = 0; c < 3; c++){
            printf("No semestre: %d o aluno tirou a nota: %d\n", c+1, facul[l][c]);
        }
    }
    
}