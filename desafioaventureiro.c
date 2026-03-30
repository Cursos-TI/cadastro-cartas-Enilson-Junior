#include <stdio.h>

int main (){

    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pontosTuristicos1;
    float populacao1, area1, pib1, mediaden1, mediapibcap1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pontosTuristicos2;
    float area2, pib2, mediaden2, mediapibcap2, populacao2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1); 
    printf("Código da Carta (ex: A01):\n ");
    scanf("%s", codigo1);
    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]s", cidade1); 
    printf("População:\n ");
    scanf("%f", &populacao1);
    printf("Área (km²):\n ");
    scanf("%f", &area1);
    printf("PIB:\n ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos1);
    mediaden1 = populacao1 / area1;
    mediapibcap1 = pib1 / populacao1;
    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B03):\n ");
    scanf("%s", codigo2);
    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]s", cidade2);
    printf("População:\n ");
    scanf("%f", &populacao2);
    printf("Área (km²):\n ");
    scanf("%f", &area2);
    printf("PIB:\n ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos:\n ");
    scanf("%d", &pontosTuristicos2);
    mediaden2 = populacao1 / area1;
    mediapibcap2 = pib2 / populacao2;

    // --- Exibição dos Dados ---
    printf("\n==============================\n");
    printf("      CARTAS CADASTRADAS      \n");
    printf("==============================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n",mediaden1);
    printf("PIB per Capita: %.2f reais\n",mediapibcap1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n",mediaden2);
    printf("PIB per Capita: %.2f reais\n", mediapibcap2);
    return 0;
}