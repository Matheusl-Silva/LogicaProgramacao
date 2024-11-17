#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

typedef struct 
{
    char nome[70];
    int tentativas;
} jogador;

void exibirInstrucoes(){
    printf("\n-- INSTRUCOES DO JOGO --\n");
    printf("1. O computador escolhe um numero aleatorio entre 1 e 100.\n");
    printf("2. O jogador deve tentar adivinhar o numero.\n");
    printf("3. A cada tentativa, o computador informara se o numero eh maior ou menor.\n");
    printf("4. O jogo termina quando o jogador adivinha o numero ou decide sair.\n");
    printf("5. O jogador pode sair a qualquer momento escolhendo a opcao 'Sair' no menu.\n\n");
}

void iniciarJogo(jogador jogador){
    int numeroSorteado, palpite, i = 0;
    numeroSorteado = rand() % 100 + 1;
    jogador.tentativas = 0;

    printf("\nAdivinha o numero entre 1 e 100: ");
    while(1){
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        jogador.tentativas++;

        if(palpite == numeroSorteado){
            printf("Parabens, %s! Voce adivinhou o numero em %d tentativas!!|\n", jogador.nome, jogador.tentativas);
            break;
        }else if (palpite < numeroSorteado){
            printf("Tente um numero maior.\n");
        }else{
            printf("Tente um numero menor.\n");
        }
    }
}

int main(){
    srand(time(NULL));

    jogador jogador;

    printf("Digite seu nome: ");
    fgets(jogador.nome, sizeof(jogador.nome), stdin);

    exibirInstrucoes();
    iniciarJogo(jogador);
    
}