#include <stdio.h> // Gustavo Gomes Nogueira

float calcularMedia(float nota1, float nota2, float nota3, float nota4) {
    return (nota1 + nota2 + nota3 + nota4) / 4;
}

int main() {
    float n1, n2, n3, n4, media;
    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    media = calcularMedia(n1, n2, n3, n4);
    printf("A média é: %.2f\n", media);
    
    if (media >= 7) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    
    return 0;
}

