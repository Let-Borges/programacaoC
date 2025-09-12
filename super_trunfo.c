#include <stdio.h>

int main(){
    char estado, codigo_carta[4], cidade[20]; //
    int populacao, pontos_turisticos;
    float area, pib;

    printf("Carta 1 \n");

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

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de Pontos Turíticos: %d \n\n", pontos_turisticos);

    char estado2, codigo_carta2[4], cidade2[20];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    printf("Carta 2 \n");

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

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turíticos: %d", pontos_turisticos2);

    return 0;
}