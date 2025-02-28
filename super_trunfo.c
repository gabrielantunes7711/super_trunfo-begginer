#include <stdio.h>

int main() {
    // First card status
    char state1;
    char code1[4];
    char city1[20];
    int population1;
    float area1;
    float gdp1;
    int attractions1;
    float population_density1;
    float gdp_per_capita1;

    // First card input and output
    printf("Digite as informacoes da primeira carta:\n \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &state1);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", code1);

    printf("Digite o nome da cidade: ");
    scanf("%19s", city1);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &population1);

    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &gdp1);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &attractions1);

    population_density1 = (float) population1 / area1;
    gdp_per_capita1 = (float) gdp1 / population1;

    printf("\n--- Informacoes da Primeira Carta ---\n");
    printf("Estado: %c\n", state1);
    printf("Codigo da Carta: %s\n", code1);
    printf("Nome da Cidade: %s\n", city1);
    printf("Populacao: %d\n", population1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", gdp1);
    printf("Numero de Pontos Turisticos: %d\n", attractions1);
    printf("Densidade Populacional: %.2f hab/km²\n", population_density1);
    printf("PIB per Capita: %.2f reais\n", gdp_per_capita1);

    // Second card status
    char state2;
    char code2[4];
    char city2[20];
    int population2;
    float area2;
    float gdp2;
    int attractions2;
    float population_density2;
    float gdp_per_capita2;

    printf("\n \n ----------------- \n \n");

    // Second card input and output
    printf("\nDigite as informacoes da segunda carta:\n \n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &state2);

    printf("Digite a letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%3s", code2);

    printf("Digite o nome da cidade: ");
    scanf("%19s", city2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &population2);

    printf("Digite a area da cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade: ");
    scanf("%f", &gdp2);

    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &attractions2);

    population_density2 = (float) population2 / area2;
    gdp_per_capita2 = (float) gdp2 / population2;

    printf("\n--- Informacoes da Segunda Carta ---\n");
    printf("Estado: %c\n", state2);
    printf("Codigo da Carta: %s\n", code2);
    printf("Nome da Cidade: %s\n", city2);
    printf("Populacao: %d\n", population2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", gdp2);
    printf("Numero de Pontos Turisticos: %d\n", attractions2);
    printf("Densidade Populacional: %.2f hab/km²\n", population_density2);
    printf("PIB per Capita: %.2f reais\n", gdp_per_capita2);

    return 0;
}
