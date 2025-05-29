#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
   printf("Movimentos de Peças de Xadrez:\n\n");

    // Movimento da Torre
    int movimentoTorre = 5; // A Torre vai se mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    
    // Estrutura de repetição: for
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as saídas

    // Movimento do Bispo
    int movimentoBispo = 5; // O Bispo vai se mover 5 casas na diagonal para cima e direita
    printf("Movimento do Bispo:\n");

    int contadorBispo = 1; // Contador para o while

    // Estrutura de repetição: while
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n"); // Linha em branco para separar as saídas

    // Movimento da Rainha
    int movimentoRainha = 8; // A Rainha vai se mover 8 casas para a esquerda
    printf("Movimento da Rainha:\n");

    int contadorRainha = 1; // Contador para o do-while

    // Estrutura de repetição: do-while
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);
    
    return 0;
}
