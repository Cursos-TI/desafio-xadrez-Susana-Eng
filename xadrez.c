#include <stdio.h>


// Move-se em linha reta (horizontal/vertical)
void moverTorre(int passo, int total) {
    if (passo > total) return; // Condição de parada
    printf("Direita (%d)\n", passo);
    moverTorre(passo + 1, total); // Chamada recursiva
}


// Move-se na diagonal (Cima + Direita)
// Inclui loops aninhados dentro da recursão.
void moverBispo(int passo, int total) {
    if (passo > total) return; // Condição de parada

    // Loop externo: movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        // Loop interno: movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita (%d)\n", passo);
        }
    }

    moverBispo(passo + 1, total); // Próximo movimento
}

// ----- Função recursiva da RAINHA -----
// Move-se em todas as direções.
// Aqui, simula 8 casas para a esquerda.
void moverRainha(int passo, int total) {
    if (passo > total) return; // Condição de parada
    printf("Esquerda (%d)\n", passo);
    moverRainha(passo + 1, total); // Próximo movimento
}

/* O Cavalo se move em "L": duas casas para cima e uma para a direita.*/
/* loops aninhados com múltiplas variáveis e controle de fluxo*/
void moverCavalo() {
    int movimentosVerticais = 2; // Duas casas para cima
    int movimentosHorizontais = 1; // Uma casa para a direita

    printf("Movimento do CAVALO:\n");

    // Loop externo controla o movimento vertical
    for (int i = 1; i <= movimentosVerticais; i++) {
        // Se a contagem for maior que 2, interrompe
        if (i > movimentosVerticais) break;
        printf("Cima (%d)\n", i);

        // Loop interno controla o movimento horizontal
        for (int j = 1; j <= movimentosHorizontais; j++) {
            // Exemplo de controle de fluxo:
            if (j == 0) continue; // (nunca será executado, apenas demonstrativo)
            printf("Direita (%d)\n", j);
        }
    }
}
int main() {
    // Movimentação da TORRE
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    moverTorre(1, casasTorre);
    printf("\n");

    // Movimentação do BISPO
    int casasBispo = 5;
    printf("Movimento do BISPO:\n");
    moverBispo(1, casasBispo);
    printf("\n");

    // Movimentação da RAINHA
    int casasRainha = 8;
    printf("Movimento da RAINHA:\n");
    moverRainha(1, casasRainha);
    printf("\n");

    // Movimentação do CAVALO
    moverCavalo();

    printf("\nSimulação concluída com sucesso!\n");
return 0;
}
