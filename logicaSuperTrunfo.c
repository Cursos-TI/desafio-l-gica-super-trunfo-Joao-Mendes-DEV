#include<stdio.h>

int main (){

    char estado1, estado2, cidade1[50], cidade2[50], cod1[50], cod2[50];
    int pontosTuristicos1, pontosTuristicos2, escolha;
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

    //Aqui começa o exercício nível aventureiro onde o usuário vai digitar o número correspondente do atributo que ele quer comparar e em seguida o "if" vai comparar as duas cartas e dar o resultado.
    printf("\nAgora você vai escolher um atributo para comparar com o adversário: \n");
    printf("População - digite 1\n");
    printf("Área - digite 2\n");
    printf("PIB - digite 3\n");
    printf("Número de Pontos Turísticos - digite 4\n");
    printf("Densidade Populacional - digite 5\n");
    scanf("%d", &escolha);

    printf("\n%s - %s\n", cidade1, cidade2);

    if (escolha == 1){
        printf("\nPopulação\n");
        printf("Carta 1 = %d - Carta 2 = %d\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 Venceu!");
        }
        else if (populacao1 < populacao2){
            printf("Carta 2 Venceu!");
        }
        else {
            printf("Empate!");
        }
    }
    if (escolha == 2){
        printf("\nÁrea\n");
        printf("Carta 1 = %.2f - Carta 2 = %.2f\n", area1, area2);
        if (area1 > area2){
            printf("Carta 1 Venceu!");
        }
        else if (area1 < area2){
            printf("Carta 2 Venceu!");
        }
        else {
            printf("Empate!");
        }
    }
    if (escolha == 3){
        printf("\nPIB\n");
        printf("Carta 1 = %.2f - Carta 2 = %.2f\n", pib1, pib2);
        if (pib1 > pib2){
            printf("Carta 1 Venceu!");
        }
        else if (pib1 < pib2){
            printf("Carta 2 Venceu!");
        }
        else {
            printf("Empate!");
        }
    }
    if (escolha == 4){
        printf("\nNúmero de Pontos Turísticos\n");
        printf("Carta 1 = %d - Carta 2 = %d\n", pontosTuristicos1, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2){
            printf("Carta 1 Venceu!");
        }
        else if (pontosTuristicos1 < pontosTuristicos2){
            printf("Carta 2 Venceu!");
        }
        else {
            printf("Empate!");
        }
    }
    if (escolha == 5){
        printf("\nDensidade Populacional\n");
        printf("Carta 1 = %.2f - Carta 2 = %.2f\n", mediadp1, mediadp2);
        if (mediadp1 < mediadp2){
            printf("Carta 1 Venceu!");
        }
        else if (mediadp1 > mediadp2){
            printf("Carta 2 Venceu!");
        }
        else {
            printf("Empate!");
        }
    }
    
    return 0;
}
