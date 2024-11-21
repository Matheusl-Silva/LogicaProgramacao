#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char nome[70];
    int tentativas;
} jogador;

void exibirInstrucoes()
{
    printf("\n-- INSTRUCOES DO JOGO --\n");
    printf("1. O computador escolhe um numero aleatorio entre 1 e 100.\n");
    printf("2. O jogador deve tentar adivinhar o numero.\n");
    printf("3. A cada tentativa, o computador informara se o numero eh maior ou menor.\n");
    printf("4. O jogo termina quando o jogador adivinha o numero ou decide sair.\n");
    printf("5. O jogador pode sair a qualquer momento escolhendo a opcao 'Sair' no menu.\n\n");
}

void exibirMenu(jogador jogador)
{
    int opcao;

    while (1)
    {
        printf("\n-- Menu Principal --\n");
        printf("1. Iniciar jogo\n");
        printf("2. Ver instrucoes\n");
        printf("3. Sair do jogo\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            iniciarJogo(jogador);
            break;
        case 2:
            exibirInstrucoes();
            break;
        case 3:
            printf("Saindo do jogo... Ate logo!\n");
            return;
        default:
            printf("Opcao invalida! Tente novamente.\n");
        }
    }
}

void iniciarJogo(jogador jogador)
{
    int numerosorteado, palpite = 0;

    numerosorteado = rand() & 100 + 1;
    jogador.tentativas = 0;

    printf("\nAdivinhe o numero de 1 a 100");

    while (1)
    {

        printf("Digite seu palpite:");
        scanf("%d", &palpite);
        jogador.tentativas++;

        if (palpite == numerosorteado)
        {
            printf("Parabens %s!, voce acertou o numero em %d tentativas!\n", jogador.nome, jogador.tentativas);
            break;
        }
        else if (palpite > numerosorteado)
        {
            printf("Digite um numero menor\n");
        }
        else
        {
            printf("Digite um numero maior\n");
        }
    }
}

int main()
{
    srand(time(NULL));

    jogador jogador;

    printf("Digite seu nome para comecar:");
    fgets(jogador.nome, sizeof(jogador.nome), stdin);

    exibirMenu(jogador);
}