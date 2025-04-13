int main(){
    
    int pontosTuristicos1, pontosTuristicos2;
    long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidadeDemografica1, densidadeDemografica2, pibPerCapita1, pibPerCapita2;
    char estado1, codigoCarta1[3], codigo1[3], cidade1[20], estado2, codigoCarta2[3], codigo2[3], cidade2[20];

    printf("Insira as informações da carta 1: \n");

    printf("Digite o nome do Estado (A-H): \n");
    fflush(stdin); 
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (01-04): \n");
    scanf("%s", &codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    densidadeDemografica1 = populacao1/area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    printf("\n\n");

    printf("Insira as informações da carta 2: \n");

    printf("Digite o nome do Estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (01-04): \n");
    scanf("%s", &codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosTuristicos2);
    
    densidadeDemografica2 = populacao2/area2;
    pibPerCapita2 = pib2 / populacao2;
    
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparar PIB

    if(pibPerCapita1 > pibPerCapita2){
        printf("Carta 1 %s venceu! \n", cidade1 );
    }
    if(pibPerCapita1 < pibPerCapita2){
        printf("Carta 2 %s venceu! \n", cidade2 );
    } 
    
    if(pibPerCapita1 == pibPerCapita2) {
        printf("Deu empate!");
    }
    
    return 0;

}
