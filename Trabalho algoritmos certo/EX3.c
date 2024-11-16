#include <stdio.h> // Gustavo Gomes Nogueira

// Função que calcula o resultado somando os elementos de um vetor
int calcularResultado(int v[], int n);

int main() {
    int vetor[5], i, resultado;

    // Preenche o vetor com valores múltiplos de 2
    for (i = 0; i < 5; i++) {
        vetor[i] = i * 2;
    }

    // Chama a função calcularResultado para somar os elementos do vetor
    resultado = calcularResultado(vetor, 5);

    // Exibe o resultado da soma
    printf("O resultado é: %d\n", resultado);

    return 0;
}

// Implementação da função que soma os elementos de um vetor
int calcularResultado(int v[], int n) {
    int i, soma = 0;

    // Soma cada elemento do vetor
    for (i = 0; i < n; i++) {
        soma += v[i];
    }

    return soma;
}

