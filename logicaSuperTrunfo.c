#include<stdio.h>

int main (){

    char estado1, estado2, cidade1[50], cidade2[50], cod1[50], cod2[50];
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2, mediadp1, mediadp2, mediapib1, mediapib2;
    unsigned long int populacao1, populacao2;

    printf("Digite os Dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &estado1);
    printf("Código: ");
    scanf("%s", cod1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    mediadp1 = populacao1 / area1;
    mediapib1 = pib1 * 1000000000 / populacao1; //alterei a unidade do pib

    printf("\nDigite os Dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", cod2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    mediadp2 = populacao2 / area2;
    mediapib2 = pib2 * 1000000000 / populacao2; //alterei a unidade do pib

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", cod1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadp1);
    printf("PIB per Capita: %.2f reais\n", mediapib1);
    
    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadp2);
    printf("PIB per Capita: %.2f reais\n", mediapib2);

    float total1 = 0;
    total1 = (float)populacao1 + (area1 * 1000) + (pib1 * 1000000000) + pontosTuristicos1 + mediapib1 - mediadp1; //transformei as unidades de area e pib para melhor visualização
    
    float total2 = 0;
    total2 = (float)populacao2 + (area2 * 1000) + (pib2 * 1000000000) + pontosTuristicos2 + mediapib2 - mediadp2; //transformei as unidades de area e pib para melhor visualização

    //Fiz a comparação de todos os dados das cartas
    
    printf("\nComparação de Cartas:\n");
    printf("\nPopulação: Carta1 - %s: %u\n Carta2 - %s: %u\n", cidade1, populacao1, cidade2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nÁrea: Carta1 - %s: %.2f\n Carta2 - %s: %.2f\n", cidade1, area1, cidade2, area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nPIB: Carta1 - %s: %.2f\n Carta2 - %s: %.2f\n", cidade1, pib1, cidade2, pib2);
    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nPontos turísticos: Carta1 - %s: %d\n Carta2 - %s: %d\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2);
    if(pontosTuristicos1 > pontosTuristicos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    
    printf("\nDensidade populacional: Carta1 - %s: %.2f\n Carta2 - %s: %.2f\n", cidade1, mediadp1, cidade2, mediadp2);
    if(mediadp1 < mediadp2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    printf("\nPIB per capita: Carta1 - %s: %.2f\n Carta2 - %s: %.2f\n", cidade1, mediapib1, cidade2, mediapib2);
    if(mediapib1 > mediapib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
