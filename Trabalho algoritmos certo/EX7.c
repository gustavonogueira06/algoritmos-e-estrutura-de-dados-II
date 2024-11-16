#include <stdio.h>

void encontrarMaior(int vetor[], int tamanho, int *maiorValor, int *posicao) {
    *maiorValor = vetor[0];
    *posicao = 0;
    int i;
    for (i = 1; i < tamanho; i++) {
        if (vetor[i] > *maiorValor) {
            *maiorValor = vetor[i];
            *posicao = i;
        }
    }
}

int main() {
    int numeros[10];
    int maior, posicao;
	int i;
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    encontrarMaior(numeros, 10, &maior, &posicao);
    printf("Maior valor: %d na posição %d\n", maior, posicao);
    
    return 0;
}

