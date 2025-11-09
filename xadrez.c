
#include <stdio.h>

int main() {
    char carta;
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    printf("digite número da sua carta: \n");
    scanf("%c", &carta);
    
    printf("digite o código da sua carta: \n");
    scanf("%s", &codigo_da_carta);

    printf("digite o nome da cidade: \n");
    scanf ("%s", &nome_da_cidade);

    printf("digite o tamanho da populacao: \n");
    scanf ("%d", &populacao);

    printf("digite o tamanho da area da cidade: \n");
    scanf ("%f", &area);

    printf("digite o valor do pib: \n");
    scanf ("%f", &pib);

    printf("digite o numero de pontos turisticos: \n");
    scanf ("%d", &numero_de_pontos_turisticos);


    printf("=== Carta da Cidade ===\n");
    printf("Carta: %c\n", carta);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}
