#include <stdio.h>

int main() {

    // Variáveis da carta 1
    char estado_carta1;
    char codigo_carta1[4];
    char cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontosTuristicos_carta1;
    float densidadePopulacional_carta1;
    float pibPerCapita_carta1;

    // Variáveis da carta 2
    char estado_carta2;
    char codigo_carta2[4];
    char cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontosTuristicos_carta2;
    float densidadePopulacional_carta2;
    float pibPerCapita_carta2;
    
    // Cadastro carta 1

    // Código estado carta 1
    printf("Digite o código do estado da primeira carta (Letras de A até H):\n");
    scanf(" %c", &estado_carta1);

    // Código carta 1
    printf("Digite o código da primeira carta (Números, de 01 até 04, ex.: A01):\n");
    scanf(" %s", codigo_carta1);

    // Nome da cidade carta 1
    printf("Digite o nome da cidade da primeira carta:\n");
    scanf("%s", cidade_carta1);

    // População carta 1
    printf("Digite a população da cidade da primeira carta:\n");
    scanf("%d", &populacao_carta1);

    // Area carta 1
    printf("Digite a área da cidade da primeira carta:\n");
    scanf("%f", &area_carta1);

    // PIB carta 1
    printf("Digite o PIB da cidade da primeira carta:\n");
    scanf("%f", &pib_carta1);

    // Pontos turísticos carta 1
    printf("Digite a quantidade de pontos turísticos da cidade da primeira carta:\n");
    scanf("%d", &pontosTuristicos_carta1);

    // Cadastro carta 2

    // Código estado carta 2
    printf("Digite o código do estado da segunda carta (valores de A até H):\n");
    scanf(" %c", &estado_carta2);

    // Código carta 2
    printf("Digite o código da segunda carta (Números, de 01 até 04, ex.: A01):\n");
    scanf(" %s", codigo_carta2);

    // Nome da cidade carta 2
    printf("Digite o nome da cidade da segunda carta:\n");
    scanf(" %s", cidade_carta2);

    // População carta 2
    printf("Digite a população da cidade da segunda carta:\n");
    scanf("%d", &populacao_carta2);

    // Area carta 2
    printf("Digite a área da cidade da segunda carta:\n");
    scanf("%f", &area_carta2);

    // PIB carta 2
    printf("Digite o PIB da cidade da segunda carta:\n");
    scanf("%f", &pib_carta2);

    // Pontos turísticos carta 2
    printf("Digite a quantidade de pontos turísticos da cidade da segunda carta:\n");
    scanf("%d", &pontosTuristicos_carta2);

    // Linha vazia
    printf("\n");

    // Mostra os valores da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Código: %c%s\n", estado_carta1, codigo_carta1);
    printf("Nome da cidade: %s\n", cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f KM²\n", area_carta1);
    printf("PIB: R$ %.2f\n", pib_carta1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_carta1);

    // Calcula a densidade popilacional
    densidadePopulacional_carta1 = (float) populacao_carta1 / area_carta1;

    // Exibe os valores da densidade populacional
    printf("Densidade populacional: %f\n", densidadePopulacional_carta1);

    // Calcula o PIB per capta
    pibPerCapita_carta1 = pib_carta1 / (float) populacao_carta1;

    // Exibe os valores do PIB per capita
    printf("PIB per capita: %f\n", pibPerCapita_carta1);

    // Linha vazia
    printf("\n");

    // Mostra os valores da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Código: %c%s\n", estado_carta2, codigo_carta2);
    printf("Nome da cidade: %s\n", cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f KM²\n", area_carta2);
    printf("PIB: R$ %.2f\n", pib_carta2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos_carta2);

    // Calcula a densidade popilacional
    densidadePopulacional_carta2 = (float) populacao_carta2 / area_carta2;

    // Exibe os valores da densidade populacional
    printf("Densidade populacional: %f\n", densidadePopulacional_carta2);

    // Calcula o PIB per capita
    pibPerCapita_carta2 = pib_carta2 / (float) populacao_carta2;

    // Exibe os valores do PIB per capita
    printf("PIB per capita: %f\n", pibPerCapita_carta2);

    return 0;

}
