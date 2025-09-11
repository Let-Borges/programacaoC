#include <stdio.h>

int main(){
    char estado, codigo_carta[4], cidade[20]; 
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

    printf("Carta 2 \n");

    return 0;
}