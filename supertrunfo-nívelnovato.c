#include <stdio.h>


// super_trunfo.c

// Definindo uma estrutura para armazenar os dados da carta
struct Carta {
    char estado;
    char codigo[4];            // Ex: "A01"
    char nomeCidade[100];     // Nome da cidade
    int populacao;            // Número de habitantes
    float area;               // Área em km²
    float pib;                // Produto Interno Bruto
    int pontosTuristicos;     // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    // Entrada de dados para a carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n");

    // Entrada de dados para a carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // Exibição das cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}