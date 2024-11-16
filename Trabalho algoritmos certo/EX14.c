#include <stdio.h> // Gustavo Gomes Nogueira

void calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    int resultado = soma + (primeiroValor * 5) + (ultimoValor * 2);
    printf("O resultado é: %d\n", resultado);
}

int main() {
    int vetor[10];
    int soma = 0;
	int i;
    for (i = 0; i < 10; i++) {
        vetor[i] = i + 1; // Preenche com 1 até 10
        soma += vetor[i];
    }

    calcularResultado(soma, vetor[0], vetor[9]);
    return 0;
}

