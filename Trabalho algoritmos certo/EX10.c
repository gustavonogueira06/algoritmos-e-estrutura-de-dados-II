#include <stdio.h> // Gustavo Gomes Nogueira

void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior n�mero �: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior n�mero �: %d\n", num2);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }
}

int main() {
    int a, b;
    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &a, &b);
    maiorNumero(a, b);
    return 0;
}

