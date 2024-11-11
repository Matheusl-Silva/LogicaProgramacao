#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Definição da estrutura para armazenar os dados do jogador
typedef struct {
    char nome[50];
    int tentativas;
} Jogador;

// Função para exibir as instruções do jogo
void exibirInstrucoes() {
    printf("\n-- INSTRUÇÕES DO JOGO --\n");
    printf("1. O computador escolhe um número aleatório entre 1 e 100.\n");
    printf("2. O jogador deve tentar adivinhar o número.\n");
    printf("3. A cada tentativa, o computador informará se o número é maior ou menor.\n");
    printf("4. O jogo termina quando o jogador adivinha o número ou decide sair.\n");
    printf("5. O jogador pode sair a qualquer momento escolhendo a opção 'Sair' no menu.\n\n");
}

// Função para iniciar o jogo
void iniciarJogo(Jogador* jogador) {
    int numeroSorteado, palpite, i = 0;
    numeroSorteado = rand() % 100 + 1;  // Gera um número aleatório entre 1 e 100
    jogador->tentativas = 0;  // Zera as tentativas a cada novo jogo

    printf("\nAdivinha o número entre 1 e 100: ");
    while (1) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        jogador->tentativas++;

        if (palpite == numeroSorteado) {
            printf("Parabéns, %s! Você adivinhou o número em %d tentativas.\n", jogador->nome, jogador->tentativas);
            break;
        } else if (palpite < numeroSorteado) {
            printf("Tente um número maior.\n");
        } else {
            printf("Tente um número menor.\n");
        }
    }
}

// Função para exibir o menu principal e permitir a escolha do jogador
void exibirMenu(Jogador* jogador) {
    int opcao;

    while (1) {
        printf("\n-- MENU PRINCIPAL --\n");
        printf("1. Iniciar novo jogo\n");
        printf("2. Instruções\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                iniciarJogo(jogador);  // Inicia o jogo
                break;
            case 2:
                exibirInstrucoes();  // Exibe as instruções
                break;
            case 3:
                printf("Saindo do jogo... Até logo!\n");
                return;  // Encerra o programa
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
}

// Função principal que executa o jogo
int main() {
    srand(time(NULL));  // Inicializa a semente para números aleatórios
    Jogador jogador;

    // Solicita o nome do jogador
    printf("Digite seu nome: ");
    fgets(jogador.nome, sizeof(jogador.nome), stdin);

    // Remove a quebra de linha do nome (caso o jogador digite um nome com enter no final)
    jogador.nome[strcspn(jogador.nome, "\n")] = 0;

    // Exibe o menu principal
    exibirMenu(&jogador);

    return 0;
}
