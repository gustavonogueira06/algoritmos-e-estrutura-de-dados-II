#include <stdio.h> // Gustavo Gomes Nogueira
#include <string.h>
#include <locale.h>

// Define a estrutura para armazenar dados de um carro
typedef struct {
    char modelo[50];
    int ano;
    double preco;
} Carro;

// Fun��o para modificar o pre�o do carro
void modificarPreco(Carro *c, double novoPreco) {
    c->preco = novoPreco;
}

// Fun��o para imprimir os dados de um carro
void imprimirCarro(Carro *c) {
    printf("Modelo: %s\n", c->modelo);
    printf("Ano: %d\n", c->ano);
    printf("Pre�o: R$ %.2lf\n", c->preco);
}

int main() {
    // Configura a localiza��o para portugu�s, para exibir o pre�o com v�rgula
    setlocale(LC_ALL, "portuguese");

    // Declara uma vari�vel do tipo Carro
    Carro carro1;

    // Inicializa os dados do carro
    strcpy(carro1.modelo, "Xyz");  // Copia o nome do modelo para a estrutura
    carro1.ano = 2020;             // Define o ano de fabrica��o
    carro1.preco = 90000.00;       // Define o pre�o inicial do carro

    // Exibe os dados antes da modifica��o
    printf("Dados antes da modifica��o:\n");
    imprimirCarro(&carro1);

    // Modifica o pre�o do carro usando a fun��o modificarPreco
    modificarPreco(&carro1, 115000.00);

    // Exibe os dados ap�s a modifica��o do pre�o
    printf("\nDados ap�s a modifica��o do pre�o:\n");
    imprimirCarro(&carro1);

    return 0;
}

