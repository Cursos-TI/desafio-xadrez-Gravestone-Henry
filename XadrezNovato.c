#include <stdio.h>


// Desafio xadrez em c simulando a movimentação XP

int main() {
	//definir constantes
	const int MOV_BISPO = 3;
	const int MOV_TORRE = 6;
	const int MOV_RAINHA = 3;

	// Movimentação do Bispo Diagonal Superior

	printf(" Movimento do Bispo \n");
	int b = 0;
	while (b < MOV_BISPO) {
		printf("Cima, Direita\n");
		b++;
	}
	printf("\n");

	// 2. Movimentação torre p direita(o for aq pq achoa q C) p contagens menores)

	printf("--- Movimento da Torre ---\n");
	for (int i = 0; i < MOV_TORRE; i++) {
		printf("Direita\n");
	}
	printf("\n");

	// 3. Movimentação da Rainha p esquerda
	printf("--- Movimento da Rainha ---\n");
	int r = 0;
	do {
		printf("Esquerda\n");
		r++;
	} while (r < MOV_RAINHA);
	printf("\n");

	return 0;
}