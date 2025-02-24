#include <stdio.h>

struct Carta {
    char codigo[4];
    char estado[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Digite o codigo da primeira carta (ex: AB01): ");
    scanf("%s", carta1.codigo);
    printf("Digite o estado: ");
    scanf("%s", carta1.estado);
    printf("Digite a cidade: ");
    scanf("%s", carta1.cidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cadastro da segunda carta
    printf("Digite o codigo da segunda carta (ex: AB02): ");
    scanf("%s", carta2.codigo);
    printf("Digite o estado: ");
    scanf("%s", carta2.estado);
    printf("Digite a cidade: ");
    scanf("%s", carta2.cidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibição dos dados das cartas
    printf("\nDados da primeira carta:\n");
    printf("Codigo: %s\n", carta1.codigo);
    printf("Estado: %s\n", carta1.estado);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\nDados da segunda carta:\n");
    printf("Codigo: %s\n", carta2.codigo);
    printf("Estado: %s\n", carta2.estado);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

    return 0;
}
