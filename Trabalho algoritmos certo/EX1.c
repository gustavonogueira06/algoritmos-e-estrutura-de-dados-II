#include <stdio.h> // Gustavo Gomes Nogueira

// Define a estrutura para armazenar os dados de uma pessoa
typedef struct {
    double peso;
    int idade;
    double altura;
} Pessoa;

// Função para imprimir os dados de uma pessoa
void imprimePessoa(Pessoa p) {
    printf("Peso: %.1lf. Idade: %d. Altura: %.2lf.\n", p.peso, p.idade, p.altura);
}

// Função para preencher os dados de uma pessoa
void preenchePessoa(Pessoa *p) {
    printf("Digite o peso: ");
    scanf("%lf", &p->peso);
    printf("Digite a idade: ");
    scanf("%d", &p->idade);
    printf("Digite a altura: ");
    scanf("%lf", &p->altura);
}

int main() {
    // Declara um array de 5 pessoas e uma variável pessoa temporária
    Pessoa pessoas[5], p1;
	int i;
    // Preenche os dados para cada pessoa no vetor
    for (i = 0; i < 5; i++) {
        printf("\nPessoa %d:\n", i + 1);
        preenchePessoa(&pessoas[i]);
    }

    // Copia os dados da primeira pessoa para p1
    p1 = pessoas[0];

    // Incrementa a idade de p1 se for maior que 20
    if (p1.idade > 20) {
        p1.idade++;
    }

    // Imprime os dados de todas as pessoas
    for (i = 0; i < 5; i++) {
        imprimePessoa(pessoas[i]);
    }

    return 0;
}

