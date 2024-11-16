#include <stdio.h> // Gustavo Gomes Nogueira

void calcularSomaEMedia(int vetor[], int tamanho, int *soma, float *media) {
    *soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        *soma += vetor[i];
    }
    *media = (float)*soma / tamanho;
}

int main() {
    int numeros[10];
    int soma;
    float media;
	int i;
    printf("Digite 10 valores inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    calcularSomaEMedia(numeros, 10, &soma, &media);
    printf("Soma: %d, Média: %.2f\n", soma, media);
    
    return 0;
}

