#include <stdio.h>

int main() {
    int populacao;
    char codigo[5];
    char estado[20];
    char cidade[20];
    float area;
    float pib;
    int pt;

    printf("Digite o código da sua carta: \n");
    scanf("%s", codigo);

    printf("Digite o estado da sua carta: \n");
    scanf("%s", estado);

    printf("Digite a cidade da sua carta: \n");
    scanf("%s", cidade);

    printf("Digite a população da sua carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área em m2 da sua carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos tem sua carta: \n");
    scanf("%d", &pt);

    printf("\n--- Informações da Carta ---\n");
    printf("Código da carta: %s\n", codigo);
    printf("Estado da carta: %s\n", estado);
    printf("Cidade da carta: %s\n", cidade);
    printf("População da carta: %d\n", populacao);
    printf("Área da carta: %.2f m2\n", area);
    printf("PIB da carta: %.2f\n", pib);
    printf("Pontos turísticos da carta: %d\n", pt);

    return 0;
}
