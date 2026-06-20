#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior, linha, coluna;

    printf("MAIOR VALOR DE UMA MATRIZ 4x4\n\n");

    printf("Digite os valores da matriz:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("matriz[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    linha = 0;
    coluna = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Posicao: linha %d, coluna %d\n", linha + 1, coluna + 1);

    system("pause");
    return 0;
}