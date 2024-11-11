#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[50];
    int RA;
    int numCurso;
};

int main(){
    
    struct aluno a1;

    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]", a1.nome);
    printf("Digite o RA do aluno: \n");
    scanf("%d", &a1.RA);
    printf("Digite o curso do aluno: \n");
    scanf("%d", &a1.numCurso);  
}