#include <stdio.h> // Gustavo Gomes Nogueira

void exibirImpares(int limite) {
	int i;
    printf("Números ímpares de 1 a %d (exceto múltiplos de 7): ", limite);
    for (i = 1; i <= limite; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    exibirImpares(numero);
    return 0;
}

