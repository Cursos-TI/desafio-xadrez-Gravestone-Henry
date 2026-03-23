#include <stdio.h>

// desafio xadrez mestre

//função recursiva 
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        // O Bispo acha que é melhor que os outros porque anda na diagonal
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1); // A função chama ela mesma até o cansaço
    }
}

void moverTorreRecursiva(int casas) {
    if (casas > 0) {
        // A torre é monótona, só sabe ir para a direita...XD
        printf("Direita\n");
        moverTorreRecursiva(casas - 1);
    }
}

void moverRainhaRecursiva(int casas) {
    if (casas > 0) {
        // A Rainha manda no tabuleiro, mas aqui ela só vai para a esquerda pq eu quis
        printf("Esquerda\n");
        moverRainhaRecursiva(casas - 1);
    }
}

int main() {
    // Definir constantes (Porque números jogados no código são feios)
    const int MOV_BISPO = 3;
    const int MOV_TORRE = 6;
    const int MOV_RAINHA = 3;
    
    // Constantes do vacalo
    const int CAVALO_VERTICAL = 2;
    const int CAVALO_HORIZONTAL = 1;

    //  Movimentação Bispo
    printf("--- Movimento do Bispo (Puro Suco da Recursão) ---\n");

    for (int i = 0; i < 1; i++) { 
        moverBispoRecursivo(MOV_BISPO);
    }
    printf("\n");

    //  Movimentação torre
    printf("--- Movimento da Torre (Sem loops for) ---\n");
    moverTorreRecursiva(MOV_TORRE);
    printf("\n");

    // Movimentação rainha
    printf("--- Movimento da Rainha (Esquerda, Esquerda, Esquerda...) ---\n");
    moverRainhaRecursiva(MOV_RAINHA);
    printf("\n");
    
    for (int i = 0, j = 1; i < CAVALO_VERTICAL; i++) {
        printf("Cima\n");
        
        if (i == (CAVALO_VERTICAL - 1)) {
            while (j > 0) {
                printf("Direita\n");
                j--;
                break;
            }
        }
        continue; // Ignora o resto e volta pro topo do for, só porq ele pode :O
    }

    printf("\n// Programa finalizado. Se deu certo é milagre. //\n");

    return 0;
}