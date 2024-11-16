#include <stdio.h> // Gustavo Gomes Nogueira

int menorNumero(int num1, int num2, int num3) {
    if (num1 < num2 && num1 < num3) {
        return num1;
    } else if (num2 < num1 && num2 < num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int a, b, c;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("O menor número é: %d\n", menorNumero(a, b, c));
    return 0;
}

