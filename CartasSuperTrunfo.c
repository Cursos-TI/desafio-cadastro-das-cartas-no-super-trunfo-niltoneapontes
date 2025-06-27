#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Nilton

int main() {
    // Definindo as variaveis para a carta 1
    char estado1;
    char codigo1[4], cidade1[25]; // Definimos o tamanho do array codigo como 4 devido ao catactere nulo
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Definindo as variaveis para a carta 2
    char estado2;
    char codigo2[4], cidade2[25]; // Definimos o tamanho do array codigo como 4 devido ao catactere nulo
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Pedindo as informacoes da carta 1 ao usuario
    printf("Carta 1 ---------\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (Ex.: A01): ");
    scanf("%3s", codigo1); // limita a insercao do codigo a 3 caracteres

    printf("Digite o nome da cidade sem espacos: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Exibicao da carta 1
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d \n\n", pontos_turisticos1);


    // Pedindo as informacoes da carta 2 ao usuario
    printf("Carta 2 ---------\n");

    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex.: A02): ");
    scanf("%3s", codigo2); // limita a insercao do codigo a 3 caracteres

    printf("Digite o nome da cidade sem espacos: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibicao da carta 2
    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d \n\n", pontos_turisticos2);

    // Encerrando o programa
    return 0;
}
