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

void exibirMenu(jogador jogador) {
    int opcao;

    while (1) {
        printf("\n-- MENU PRINCIPAL --\n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Instrucoes\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                iniciarJogo(jogador);  // Inicia o jogo
                break;
            case 2:
                exibirInstrucoes();  // Exibe as instruções
                break;
            case 3:
                printf("Saindo do jogo... Ate logo!\n");
                return;  // Encerra o programa
            default:
                printf("Opçao invalida! Tente novamente.\n");
        }
    }
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

    exibirMenu(jogador);
    
}