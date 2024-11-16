#include <stdio.h> // Gustavo Gomes Nogueira

void exibirInverso(int vetor[], int tamanho) {
	int i;
    printf("Números em ordem inversa: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int numeros[10];
    int i;
    printf("Preencha um vetor de 10 números inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    exibirInverso(numeros, 10);
    return 0;
}

