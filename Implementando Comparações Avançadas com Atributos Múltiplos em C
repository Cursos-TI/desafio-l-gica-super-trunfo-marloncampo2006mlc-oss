#include <stdio.h>
#include <string.h>

int main() {

    // --------------------------------------------------------------------
    // CARTAS PRÉ-CADASTRADAS
    // --------------------------------------------------------------------

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

    int atributo1 = 0, atributo2 = 0;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;


    // --------------------------------------------------------------------
    // MENU PARA ESCOLHER O PRIMEIRO ATRIBUTO
    // --------------------------------------------------------------------

    printf("=== SUPER TRUNFO - NIVEL AVANCADO ===\n\n");
    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("\nOpcao invalida! Encerrando programa.\n");
        return 0;
    }


    // Ativa valores do primeiro atributo
    switch (atributo1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1;      valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1;       valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontosTur1; valor1_c2 = pontosTur2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
    }


    // --------------------------------------------------------------------
    // MENU DINÂMICO PARA ESCOLHER O SEGUNDO ATRIBUTO
    // --------------------------------------------------------------------

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("\nOpcao invalida! Nao pode repetir atributo. Encerrando.\n");
        return 0;
    }

    // Ativa valores do segundo atributo
    switch (atributo2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1;      valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1;       valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontosTur1; valor2_c2 = pontosTur2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
    }


    // --------------------------------------------------------------------
    // COMPARAÇÃO DO PRIMEIRO ATRIBUTO
    // --------------------------------------------------------------------

    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    printf("\n=== COMPARACAO DOS ATRIBUTOS ===\n");

    // Função de impressão dos nomes
    char *nomeAttr[] = {
            "", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade"
    };

    printf("\nAtributo 1: %s\n", nomeAttr[atributo1]);
    printf("%s: %.2f\n", pais1, valor1_c1);
    printf("%s: %.2f\n", pais2, valor1_c2);

    // Regra da densidade invertida
    if (atributo1 == 5) {
        if (valor1_c1 < valor1_c2) pontosCarta1++;
        else if (valor1_c2 < valor1_c1) pontosCarta2++;
    } else {
        if (valor1_c1 > valor1_c2) pontosCarta1++;
        else if (valor1_c2 > valor1_c1) pontosCarta2++;
    }


    // --------------------------------------------------------------------
    // COMPARAÇÃO DO SEGUNDO ATRIBUTO
    // --------------------------------------------------------------------

    printf("\nAtributo 2: %s\n", nomeAttr[atributo2]);
    printf("%s: %.2f\n", pais1, valor2_c1);
    printf("%s: %.2f\n", pais2, valor2_c2);

    // Regra da densidade invertida
    if (atributo2 == 5) {
        if (valor2_c1 < valor2_c2) pontosCarta1++;
        else if (valor2_c2 < valor2_c1) pontosCarta2++;
    } else {
        if (valor2_c1 > valor2_c2) pontosCarta1++;
        else if (valor2_c2 > valor2_c1) pontosCarta2++;
    }


    // --------------------------------------------------------------------
    // SOMA DOS ATRIBUTOS PARA DEFINIR VENCEDOR FINAL
    // --------------------------------------------------------------------

    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("%s: %.2f\n", pais1, soma1);
    printf("%s: %.2f\n", pais2, soma2);


    // --------------------------------------------------------------------
    // RESULTADO FINAL
    // --------------------------------------------------------------------

    printf("\n=== RESULTADO FINAL ===\n");

    if (soma1 > soma2) {
        printf("Vencedor: %s\n", pais1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
