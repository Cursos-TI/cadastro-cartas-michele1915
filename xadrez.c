
#include <stdio.h>

int main() {
    char carta='A';
    char codigo_da_carta[50]="AO1";
    char nome_da_cidade[50]= "vitoria";
    int populacao= 20000000;
    float area= 20000.0;
    float pib= 3.000;
    int numero_de_pontos_turisticos=50;

    printf("=== Carta da Cidade ===\n");
    printf("Carta: %c\n", carta);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);

    return 0;
}
