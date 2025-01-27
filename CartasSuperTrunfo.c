#include <stdio.h>

int main() {
    int populacao;
    char codigo[5];
    char estado[20];
    char cidade[20];
    float area;
    float pib;
    int PT;

    printf("Digite o codigo da sua carta: \n");
    scanf("%s", &codigo);

    printf("Digite o estado da sua carta: \n");
    scanf("%s", &estado);
 
    printf("Digite a cidade da sua carta: \n");
    scanf("%s", &cidade);

    printf("Digite a populacao da sua carta: \n");
    scanf("%d", &populacao);

    printf("Digite a área em m2 da sua carta: \n");
    scanf("%f", &area);

    printf("Digite o PIB da sua carta: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos tem sua carta: \n");
    scanf("%d", &PT);

    return 0;
}
