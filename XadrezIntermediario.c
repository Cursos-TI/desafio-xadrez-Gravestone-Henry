#include <stdio.h>

// desafio xadrez em c intermeidario

int main() {
    // definir constantes
    const int MOV_BISPO = 3;
    const int MOV_TORRE = 6;
    const int MOV_RAINHA = 3;
    
    // constantes cavalo
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    // Movimentação do Bispo
    printf("--- Movimento do Bispo ---\n");
    int b = 0;
    while (b < MOV_BISPO) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Movimentação da Torre
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação da Rainha
    printf("--- Movimento da Rainha ---\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);
    printf("\n");
    
    printf("--- Movimento do Cavalo ---\n");

    // Loop do for externo para a jogada do cavalo
    for (int i = 1; i <= 1; i++) {
        
        // Loop while interno
        int v = 0;
        while (v < CAVALO_BAIXO) {
            printf("Baixo\n");
            v++;
        }
        
        // 1 casa pra esquerda pra fechar o mov
        int h = 0;
        while (h < CAVALO_ESQUERDA) {
            printf("Esquerda\n");
            h++;
        }
    }

    printf("\n");

    return 0;
}