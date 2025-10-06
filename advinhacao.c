#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int chute;
    int numerosecreto = 42;
    int acertou = (chute == numerosecreto);

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("========================================\n");

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    printf("Seu chute foi %d\n", chute);

    if (acertou) {
        printf("Parabéns! Você acertou!\n");
    } else {
        if(chute > numerosecreto) {
            printf("Seu número é maior que o número secreto");
        }
        
        if (chute < numerosecreto) {
            printf("Seu número é menor que o número secreto");
        }
    }

    return 0;
}

