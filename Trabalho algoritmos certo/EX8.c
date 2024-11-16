#include <stdio.h> // Gustavo Gomes Nogueira

void exibirPares(int numero) {
	int i;
    printf("Números pares de 1 a %d: ", numero);
    for (i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    exibirPares(numero);
    return 0;
}

