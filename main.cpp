#include <stdio.h>
#include <string.h>

int main() {

    // -------------------------------------------------------------
    // Cadastro das cartas (reutilizado do desafio anterior)
    // -------------------------------------------------------------

    char pais1[50] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8516000;
    float pib1 = 2.1;
    int pontosTur1 = 12;

    float densidade1 = populacao1 / area1;


    char pais2[50] = "Argentina";
    unsigned long int populacao2 = 47000000;
    float area2 = 2780000;
    float pib2 = 0.5;
    int pontosTur2 = 8;

    float densidade2 = populacao2 / area2;


    // -------------------------------------------------------------
    // MENU INTERATIVO COM SWITCH
    // -------------------------------------------------------------

    int opcao;

    printf("=== SUPER TRUNFO - COMPARACAO ENTRE PAISES ===\n\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando: %s VS %s\n", pais1, pais2);


    // -------------------------------------------------------------
    // Lógica do menu
    // -------------------------------------------------------------

    switch (opcao) {

        case 1: // POPULAÇÃO
            printf("\n=== Atributo: Populacao ===\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nVencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("\nVencedor: %s\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;


        case 2: // ÁREA
            printf("\n=== Atributo: Area ===\n");
            printf("%s: %.2f km2\n", pais1, area1);
            printf("%s: %.2f km2\n", pais2, area2);

            if (area1 > area2) {
                printf("\nVencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("\nVencedor: %s\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;


        case 3: // PIB
            printf("\n=== Atributo: PIB ===\n");
            printf("%s: %.2f trilhoes USD\n", pais1, pib1);
            printf("%s: %.2f trilhoes USD\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("\nVencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("\nVencedor: %s\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;


        case 4: // PONTOS TURÍSTICOS
            printf("\n=== Atributo: Pontos Turisticos ===\n");
            printf("%s: %d pontos\n", pais1, pontosTur1);
            printf("%s: %d pontos\n", pais2, pontosTur2);

            if (pontosTur1 > pontosTur2) {
                printf("\nVencedor: %s\n", pais1);
            } else if (pontosTur2 > pontosTur1) {
                printf("\nVencedor: %s\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;


        case 5: // DENSIDADE DEMOGRÁFICA (INVERTIDO)
            printf("\n=== Atributo: Densidade Demografica ===\n");
            printf("%s: %.2f hab/km2\n", pais1, densidade1);
            printf("%s: %.2f hab/km2\n", pais2, densidade2);

            // Regra invertida → menor densidade vence
            if (densidade1 < densidade2) {
                printf("\nVencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("\nVencedor: %s\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;


        default:
            printf("\nOpcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
