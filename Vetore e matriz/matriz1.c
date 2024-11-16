#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhaA, colunaA;
    int linhaB, colunaB;
    int i, j,k;

    printf("Digite a quantidade de linhas do vetor A: \n");
    scanf("%d", &linhaA);

    printf("Digite a quantidade de colunas do vetor A: \n");
    scanf("%d", &colunaA);

    printf("Digite a quantidade de linhas do vetor B: \n");
    scanf("%d", &linhaB);

    printf("Digite a quantidade de colunas do vetor B: \n");
    scanf("%d", &colunaB);

    if (colunaA != linhaB) {
        printf("Erro: a quantidade de colunas do vetor A deve ser igual à quantidade de linhas do vetor B.\n");
        return 1;
    }

    int **matA = (int **)malloc(linhaA * sizeof(int *));
    for (i = 0; i < linhaA; i++) {
        matA[i] = (int *)malloc(colunaA * sizeof(int));
    }

    int **matB = (int **)malloc(linhaB * sizeof(int *));
    for (i = 0; i < linhaB; i++) {
        matB[i] = (int *)malloc(colunaB * sizeof(int));
    }

    for (i = 0; i < linhaA; i++) {
        for (j = 0; j < colunaA; j++) {
            printf("Digite o elemento [%d][%d] da matriz A: \n", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    for (i = 0; i < linhaB; i++) {
        for (j = 0; j < colunaB; j++) {
            printf("Digite o elemento [%d][%d] da matriz B: \n", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    int **matrizC = (int **)malloc(linhaA * sizeof(int *));
    for (i = 0; i < linhaA; i++) {
        matrizC[i] = (int *)malloc(colunaB * sizeof(int));
    }

    for (i = 0; i < linhaA; i++) {
        for (j = 0; j < colunaB; j++) {
            matrizC[i][j] = 0;
            for (k = 0; k < colunaA; k++) {
                matrizC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    printf("A matriz resultante C (A * B) eh:\n");
    for (i = 0; i < linhaA; i++) {
        for (j = 0; j < colunaB; j++) {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linhaA; i++) {
        free(matA[i]);
    }
    free(matA);

    for (i = 0; i < linhaB; i++) {
        free(matB[i]);
    }
    free(matB);

    for (i = 0; i < linhaA; i++) {
        free(matrizC[i]);
    }
    free(matrizC);

    return 0;
}

