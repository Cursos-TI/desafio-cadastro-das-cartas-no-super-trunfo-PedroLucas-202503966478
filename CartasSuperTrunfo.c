#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;           // Nome do estado
    char codigo1[4];        // Código
    char nome1[129];        // Nome da cidade
    int populacao1;         // População da cidade
    float area1;            // Área em km²
    float pib1;             // PIB em bilhões de reais
    int pontos_turisticos1; // Número de pontos turísticos

    char estado2;
    char codigo2[4];
    char nome2[129];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Solicita os dados da carta 1
    printf("Insira os dados da carta 1:\n"); // Exibe o texto no terminal
    printf("Estado: ");
    scanf("%c", &estado1);  // Lê a entrada do usuário
    getchar();              // Limpa o buffer do teclado
    printf("Codigo: ");
    scanf("%s", &codigo1);
    getchar();
    printf("Nome da Cidade: ");
    scanf("%[^\n]", &nome1);
    getchar();
    printf("Populacao: ");
    scanf("%d", &populacao1);
    getchar();
    printf("Area: ");
    scanf("%f", &area1);
    getchar();
    printf("PIB: ");
    scanf("%f", &pib1);
    getchar();
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    printf("\n");

    // Solicita os dados da carta 2
    printf("Insira os dados da carta 2:\n");
    printf("Estado: ");
    scanf("%c", &estado2);
    getchar();
    printf("Codigo: ");
    scanf("%s", &codigo2);
    getchar();
    printf("Nome da Cidade: ");
    scanf("%[^\n]", &nome2);
    getchar();
    printf("Populacao: ");
    scanf("%d", &populacao2);
    getchar();
    printf("Area: ");
    scanf("%f", &area2);
    getchar();
    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    printf("\n########## Dados das cartas ##########\n\n");

    printf("Carta 1:\n");

    printf("Estado: %c\n", estado1);                                    // Imprime o estado 1
    printf("Codigo: %s\n", codigo1);                                    // Imprime o código 1
    printf("Nome da Cidade: %s\n", nome1);                              // Imprime o nome da cidade 1
    printf("Populacao: %d\n", populacao1);                              // Imprime a população 1
    printf("Area: %.2f km2\n", area1);                                  // Imprime a área com 2 casas decimais 1
    printf("PIB: %.2f bilhoes de reais\n", pib1);                       // Imprime o PIB com 2 casas decimais 1
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);    // Imprime os pontos turísticos 1
    printf("\n");

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);                                    // Imprime o estado 2
    printf("Codigo: %s\n", codigo2);                                    // Imprime o código 2
    printf("Nome da Cidade: %s\n", nome2);                              // Imprime o nome da cidade 2
    printf("Populacao: %d\n", populacao2);                              // Imprime a população 2
    printf("Area: %.2f km2\n", area2);                                  // Imprime a área com 2 casas decimais 2
    printf("PIB: %.2f bilhoes de reais\n", pib2);                       // Imprime o PIB com 2 casas decimais 2
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);    // Imprime os pontos turísticos 2

    // Agarda o ENTER para finalizar a exexução
    char buff;
    printf("\nPessione enter para sair...");
    scanf("%c", buff);
    getchar();

    return 0;
}
