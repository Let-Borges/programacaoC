#include <stdio.h>

int main(){

    //variaveis para a 1° carta

    char estado, codigo_carta[4], cidade[20]; 
    int populacao, pontos_turisticos;
    float area, pib;

    //Indica que as informações de baixo são da 1° carta

    printf("Carta 1 \n"); 

    //A partir daqui ira aparecer no terminal as caracteristicas da 1° carta para o usuario preencher

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Código: ");
    scanf("%s", &codigo_carta);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos);

    //Imprime na tela os dados da 1° carta que foi preenchida pelo usuario

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turíticos: %d \n\n", pontos_turisticos);

    //variaveis para a 2° carta

    char estado2, codigo_carta2[4], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //Indica que as informações de baixo são da 2° carta

    printf("Carta 2 \n");

    //A partir daqui ira aparecer no terminal as caracteristicas da 2° carta para o usuario preencher

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", &codigo_carta2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Ponto Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Imprime na tela os dados da 2° carta que foi preenchida pelo usuario

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turíticos: %d \n", pontos_turisticos2);

    return 0;
}