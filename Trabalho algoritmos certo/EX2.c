#include <stdio.h> // Gustavo Gomes Nogueira
#include <string.h>
#include <locale.h>

// Define a estrutura para armazenar dados de um carro
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Função para modificar o preço do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

// Função para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Preço: R$ %.2lf\n", c->preco);
}

int main() {
    // Configura a localização para português, para exibir o preço com vírgula
    setlocale(LC_ALL, "portuguese");

    // Declara uma variável do tipo Carro
    Carro carro1;

    // Inicializa os dados do carro
    strcpy(carro1.modelo, "Xyz");  // Copia o nome do modelo para a estrutura
    carro1.ano = 2020;             // Define o ano de fabricação
    carro1.preco = 90000.00;       // Define o preço inicial do carro

    // Exibe os dados antes da modificação
    printf("Dados antes da modificação:\n");
    imprimirCarro(&carro1);

    // Modifica o preço do carro usando a função modificarPreco
    modificarPreco(&carro1, 115000.00);

    // Exibe os dados após a modificação do preço
    printf("\nDados após a modificação do preço:\n");
    imprimirCarro(&carro1);

    return 0;
}

