#include <stdio.h> // Gustavo Gomes Nogueira

void multiplicarValores(int vetor[], int tamanho, int *resultado) {
	int i;
    *resultado = 1; // Inicializa com 1 para multiplicação
    for (i = 0; i < tamanho; i++) {
        *resultado *= vetor[i];
    }
}

int main() {
    int numeros[10];
    int resultado;
	int i;
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    multiplicarValores(numeros, 10, &resultado);
    printf("Resultado da multiplicação: %d\n", resultado);
    
    return 0;
}

