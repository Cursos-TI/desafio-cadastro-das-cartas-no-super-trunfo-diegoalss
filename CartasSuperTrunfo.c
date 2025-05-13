#include <stdio.h>

// Desafio Super Trunfo com Menu Interativo, Comparação e Super Poder

// Função para exibir o menu e retornar a escolha
int exibirMenu() {
    int opcao;
    printf("\n--- Menu de Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Super Poder\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);
    return opcao;
}

int main() {
    char codigo1[5], codigo2[5];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, superPoder1, superPoder2;
    int turisticos1, turisticos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos1);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turisticos2);

    // Cálculo da Densidade Demográfica
    densidade1 = area1 != 0 ? populacao1 / area1 : 0;
    densidade2 = area2 != 0 ? populacao2 / area2 : 0;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + turisticos1 + (densidade1 != 0 ? (1 / densidade1) : 0);
    superPoder2 = (float)populacao2 + area2 + pib2 + turisticos2 + (densidade2 != 0 ? (1 / densidade2) : 0);

    // Exibindo o menu
    int escolha = exibirMenu();

    printf("\n--- Comparação de Cartas ---\n");
    printf("Carta 1: %s | Carta 2: %s\n", codigo1, codigo2);

    switch (escolha) {
        case 1:
            printf("População: %lu vs %lu\n", populacao1, populacao2);
            printf(populacao1 > populacao2 ? "Carta 1 venceu!\n" : (populacao2 > populacao1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        case 2:
            printf("Área: %.2f vs %.2f\n", area1, area2);
            printf(area1 > area2 ? "Carta 1 venceu!\n" : (area2 > area1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        case 3:
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            printf(pib1 > pib2 ? "Carta 1 venceu!\n" : (pib2 > pib1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        case 4:
            printf("Pontos Turísticos: %d vs %d\n", turisticos1, turisticos2);
            printf(turisticos1 > turisticos2 ? "Carta 1 venceu!\n" : (turisticos2 > turisticos1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        case 5:
            printf("Densidade Demográfica: %.2f vs %.2f\n", densidade1, densidade2);
            printf(densidade1 < densidade2 ? "Carta 1 venceu!\n" : (densidade2 < densidade1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        case 6:
            printf("Super Poder: %.2f vs %.2f\n", superPoder1, superPoder2);
            printf(superPoder1 > superPoder2 ? "Carta 1 venceu!\n" : (superPoder2 > superPoder1 ? "Carta 2 venceu!\n" : "Empate!\n"));
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
