#include <stdio.h> // Gustavo Gomes Nogueira

void exibirPares(int numero) {
	int i;
    printf("N�meros pares de 1 a %d: ", numero);
    for (i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    exibirPares(numero);
    return 0;
}

