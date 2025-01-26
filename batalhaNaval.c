#include <stdio.h>

#define TAM_TABULEIRO 10  // Tamanho do tabuleiro, 10x10

// Função para exibir o tabuleiro no formato bonito
void exibirTabuleiro(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO]) {
    printf("Tabuleiro:\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            if (tabuleiro[i][j] == 1)  // Se for parte do navio, mostra 'X'
                printf("X ");
            else  // Caso contrário, mostra '.'
                printf(". ");
        }
        printf("\n");
    }
}

// Função para posicionar o navio horizontal
void posicionarNavioHorizontal(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y, int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        tabuleiro[y][x + i] = 1;  // Marca a célula como ocupada pelo navio
    }
}

// Função para posicionar o navio vertical
void posicionarNavioVertical(int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO], int x, int y, int comprimento) {
    for (int i = 0; i < comprimento; i++) {
        tabuleiro[y + i][x] = 1;  // Marca a célula como ocupada pelo navio
    }
}

// Função principal
int main() {
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};  // Inicializando o tabuleiro vazio

    // Posição do navio horizontal (exemplo: começa em x=2, y=3 e tem comprimento 4)
    int x_h = 2, y_h = 3, comprimento_h = 4;

    // Posição do navio vertical (exemplo: começa em x=6, y=2 e tem comprimento 3)
    int x_v = 6, y_v = 2, comprimento_v = 3;

    // Posiciona os navios no tabuleiro
    posicionarNavioHorizontal(tabuleiro, x_h, y_h, comprimento_h);
    posicionarNavioVertical(tabuleiro, x_v, y_v, comprimento_v);

    // Exibe as coordenadas dos navios
    printf("\nCoordenadas do navio horizontal (comprimento %d):\n", comprimento_h);
    for (int i = 0; i < comprimento_h; i++) {
        printf("(%d, %d)\n", x_h + i, y_h);  // Exibe as coordenadas do navio horizontal
    }

    printf("\nCoordenadas do navio vertical (comprimento %d):\n", comprimento_v);
    for (int i = 0; i < comprimento_v; i++) {
        printf("(%d, %d)\n", x_v, y_v + i);  // Exibe as coordenadas do navio vertical
    }

    // Exibe o tabuleiro com os navios posicionados
    printf("\nTabuleiro final:\n");
    exibirTabuleiro(tabuleiro);



    return 0;
}
