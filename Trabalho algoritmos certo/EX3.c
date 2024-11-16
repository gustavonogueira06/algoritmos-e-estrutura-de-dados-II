#include <stdio.h> // Gustavo Gomes Nogueira

// Fun��o que calcula o resultado somando os elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado;

    // Preenche o vetor com valores m�ltiplos de 2
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    // Chama a fun��o calcularResultado para somar os elementos do vetor
    resultado = calcularResultado(vetor, 5);

    // Exibe o resultado da soma
    printf("O resultado �: %d\n", resultado);

    return 0;
}

// Implementa��o da fun��o que soma os elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;

    // Soma cada elemento do vetor
    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma;
}

