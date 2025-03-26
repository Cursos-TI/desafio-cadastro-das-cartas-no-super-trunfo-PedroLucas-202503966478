#include <stdio.h>

typedef struct Carta {
    char estado;                  // Nome do estado
    char codigo[4];               // Código
    char nome[129];               // Nome da cidade
    unsigned long int populacao;  // População da cidade
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões de reais
    int pontos_turisticos;        // Número de pontos turísticos
    float dens_pop;               // Densidade populacional
    float pib_pc;                 // PIB per capita
    float poder;                  // Super poder
} Carta;

Carta solicitarDados() {
    Carta carta;

    // Solicita os dados da carta
    printf("Insira os dados da carta:\n"); // Exibe o texto no terminal
    printf("Estado: ");
    scanf("%c", &carta.estado);     // Lê a entrada do usuário
    getchar();                      // Limpa o buffer do teclado
    printf("Codigo: ");
    scanf("%s", &carta.codigo);
    getchar();
    printf("Nome da Cidade: ");
    scanf("%[^\n]", &carta.nome);
    getchar();
    printf("Populacao: ");
    scanf("%lu", &carta.populacao);
    getchar();
    printf("Area: ");
    scanf("%f", &carta.area);
    getchar();
    printf("PIB (bilhoes): ");
    scanf("%f", &carta.pib);
    getchar();
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta.pontos_turisticos);
    getchar();

    // Calcula a densidade populacional
    carta.dens_pop = (float)carta.populacao / carta.area;
    printf("Densidade Populacional: %.2f\n", carta.dens_pop);

    // Calcula o PIB per capita
    carta.pib_pc = carta.pib * 1000000000 / (float)carta.populacao;
    printf("PIB per Capita: %.2f reais\n", carta.pib_pc);

    // Calcula o Super Poder
    carta.poder = carta.populacao + carta.area + carta.pib + carta.pontos_turisticos + 1/carta.dens_pop + carta.pib_pc;
    printf("Super Poder: %.2f\n", carta.poder);

    return carta;
}

void compararCartas (Carta carta1, Carta carta2) {
    printf("Comparacao das cartas:\n\n");

    // Compara Populacao
    if (carta2.populacao == carta1.populacao) {
        printf("Populacao: Empate");
    } else {
        printf("Populacao: Carta %d venceu (%d)\n",
            (carta2.populacao > carta1.populacao)+1, carta1.populacao >= carta2.populacao);
    }

    // Compara Area
    if (carta2.area == carta1.area) {
        printf("Area: Empate");
    } else {
        printf("Area: Carta %d venceu (%d)\n",
            (carta2.area > carta1.area)+1, carta1.area >= carta2.area);
    }

    // Compara PIB
    if (carta2.pib == carta1.pib) {
        printf("PIB: Empate");
    } else {
        printf("PIB: Carta %d venceu (%d)\n",
            (carta2.pib > carta1.pib)+1, carta1.pib >= carta2.pib);
    }

    // Compara Numero de Pontos Turisticos
    if (carta2.pontos_turisticos == carta1.pontos_turisticos) {
        printf("Numero de Pontos Turisticos: Empate");
    } else {
        printf("Numero de Pontos Turisticos: Carta %d venceu (%d)\n",
            (carta2.pontos_turisticos > carta1.pontos_turisticos)+1, carta1.pontos_turisticos >= carta2.pontos_turisticos);
    }

    // Compara Densidade Populacional
    if (carta2.dens_pop == carta1.dens_pop) {
        printf("Densidade Populacional: Empate");
    } else {
        printf("Densidade Populacional: Carta %d venceu (%d)\n",
            (carta2.dens_pop < carta1.dens_pop)+1, carta1.dens_pop <= carta2.dens_pop);
    }

    // Compara PIB per Capita
    if (carta2.pib_pc == carta1.pib_pc) {
        printf("PIB per Capita: Empate");
    } else {
        printf("PIB per Capita: Carta %d venceu (%d)\n",
            (carta2.pib_pc > carta1.pib_pc)+1, carta1.pib_pc >= carta2.pib_pc);
    }

    // Compara Super Poder
    if (carta2.poder == carta1.poder) {
        printf("Super Poder: Empate");
    } else {
        printf("Super Poder: Carta %d venceu (%d)\n",
            (carta2.poder > carta1.poder)+1, carta1.poder >= carta2.poder);
    }

}

int main() {
    Carta carta1 = solicitarDados();
    printf("\n");

    Carta carta2 = solicitarDados();
    printf("\n");

    compararCartas(carta1, carta2);

    // Agarda o ENTER para finalizar a exexução
    char buff;
    printf("\nPessione enter para sair...");
    scanf("%c", buff);
    getchar();

    return 0;
}
