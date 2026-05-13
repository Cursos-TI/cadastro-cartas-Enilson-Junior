#include <stdio.h>

int main (){

    // Declaração de variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int pontosTuristicos1;
    float area1, mediaden1, mediapibcap1, pib1, superpoder1;
    unsigned long int populacao1;

    // Declaração de variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int pontosTuristicos2;
    float area2, mediaden2, mediapibcap2, pib2, superpoder2;
    unsigned long int populacao2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H):\n ");
    scanf(" %c", &estado1); 
    printf("Codigo da Carta (ex: A01):\n ");
    scanf("%s", codigo1);
    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]s", cidade1); 
    printf("Populacao:\n ");
    scanf("%lu", &populacao1);
    printf("Area (km²):\n ");
    scanf("%f", &area1);
    printf("PIB:\n ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos:\n ");
    scanf("%d", &pontosTuristicos1);
    mediaden1 = (float)populacao1 / area1;
    mediapibcap1 = pib1 / populacao1;
    superpoder1= (float)populacao1+ area1 + pib1 + pontosTuristicos1 + mediapibcap1 + (1.0f/mediaden1);
    printf("\n");

    // --- Cadastro da Carta 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H):\n ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B03):\n ");
    scanf("%s", codigo2);
    printf("Nome da Cidade:\n ");
    scanf(" %[^\n]s", cidade2);
    printf("Populacao:\n ");
    scanf("%lu", &populacao2);
    printf("Area (km²):\n ");
    scanf("%f", &area2);
    printf("PIB:\n ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turisticos:\n ");
    scanf("%d", &pontosTuristicos2);
    mediaden2 = (float)populacao2 / area2;
    mediapibcap2 = pib2 / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + mediapibcap2 + (1.0f / mediaden2);

    // --- Exibição dos Dados ---
    printf("\n==============================\n");
    printf("      CARTAS CADASTRADAS      \n");
    printf("==============================\n");

    // Exibição Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %f\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n",mediaden1);
    printf("PIB per Capita: %.2f reais\n",mediapibcap1);

    // Exibição Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %f\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n",mediaden2);
    printf("PIB per Capita: %.2f reais\n", mediapibcap2);
    
    
    // Exibição Resultado Final
    printf("\n==============================\n");
    printf("        RESULTADO FINAL       \n");
    printf("==============================\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", mediaden1 < mediaden2); 
    printf("PIB per Capita: %d\n", mediapibcap1 > mediapibcap2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);


    return 0;

}