#include <stdio.h>
#include <windows.h>
#define VIDAS 5

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int chute;
    int numerosecreto = 42;

    printf("========================================\n");
    printf("= Seja bem vindo ao jogo de advinhação =\n");
    printf("========================================\n");

    for(int i = 1; i <= VIDAS; i++) {
        printf("== Tentativa %d de %d ==\n", i, VIDAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
    
        int acertou = (chute == numerosecreto);
    
        if (acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else {
    
            int maior = chute > numerosecreto;
    
            if(maior) {
                printf("Seu número é maior que o número secreto\n");
            } else {
                printf("Seu número é menor que o número secreto\n");
            }
        }
    }

    return 0;
}