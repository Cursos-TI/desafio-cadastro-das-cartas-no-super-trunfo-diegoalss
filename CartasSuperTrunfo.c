#include <stdio.h>

// Desafio Super Trunfo 
int main() {
    char codigo1[5];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    char codigo2[5];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    // Cálculos
    densidade1 = area1 != 0 ? populacao1 / area1 : 0;
    pibPerCapita1 = populacao1 != 0 ? pib1 / populacao1 : 0;

    densidade2 = area2 != 0 ? populacao2 / area2 : 0;
    pibPerCapita2 = populacao2 != 0 ? pib2 / populacao2 : 0;

    superPoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + pibPerCapita1 + (densidade1 != 0 ? (1 / densidade1) : 0);
    superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + pibPerCapita2 + (densidade2 != 0 ? (1 / densidade2) : 0);

    // Exibição dos dados
    printf("\n--- Dados das Cartas ---\n");

    printf("\nCarta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %lu habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %lu habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", turisticos1 > turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    //Comparação do atributo PIB per capita
    printf("\n--- Comparação (Atributo: PIB per capita) ---\n");
    printf("Carta 1 - PIB per capita: %.2f\n", pibPerCapita1);
    printf("Carta 2 - PIB per capita: %.2f\n", pibPerCapita2);
 
    //adiçao do if/else
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 venceu!\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
