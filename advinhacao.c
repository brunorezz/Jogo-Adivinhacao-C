#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int chute;
    int numerosecreto = 42;

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("========================================\n");

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == numerosecreto);

    if (acertou) {
        printf("Parabéns! Você acertou!\n");
    } else {

        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

        if(maior) {
            printf("Seu número é maior que o número secreto");
        }
        if (menor) {
            printf("Seu número é menor que o número secreto");
        }
    }

    return 0;
}

