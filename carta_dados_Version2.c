#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[100];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);  // Leitura da letra do estado

    printf("Código: ");
    scanf("%s", codigo1);  // Leitura do código da carta (leitura da string)

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Leitura do nome da cidade com espaços

    printf("População: ");
    scanf("%d", &populacao1);  // Leitura da população

    printf("Área (em km²): ");
    scanf("%f", &area1);  // Leitura da área da cidade

    printf("PIB: ");
    scanf("%f", &pib1);  // Leitura do PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  // Leitura do número de pontos turísticos

    // Leitura dos dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);  // Leitura da letra do estado

    printf("Código: ");
    scanf("%s", codigo2);  // Leitura do código da carta

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);  // Leitura do nome da cidade

    printf("População: ");
    scanf("%d", &populacao2);  // Leitura da população

    printf("Área (em km²): ");
    scanf("%f", &area2);  // Leitura da área da cidade

    printf("PIB: ");
    scanf("%f", &pib2);  // Leitura do PIB

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);  // Leitura do número de pontos turísticos

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}