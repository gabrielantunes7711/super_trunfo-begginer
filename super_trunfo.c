#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    float super_power1;

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
    super_power1 = (float) population1 + area1 + gdp1 + attractions1 + gdp_per_capita1 - population_density1;

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
    printf("Super Poder: %.2f\n", super_power1);

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
    float super_power2;

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
    super_power2 = (float) population2 + area2 + gdp2 + attractions2 + gdp_per_capita2 - population_density2;

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
    printf("Super Poder: %.2f\n", super_power2);

    printf("\n--- Comparação de Cartas: ---\n");
    printf("População: Carta %d venceu (%d)\n", (population1 > population2) ? 1 : 2, population1 > population2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (gdp1 > gdp2) ? 1 : 2, gdp1 > gdp2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (attractions1 > attractions2) ? 1 : 2, attractions1 > attractions2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (population_density1 < population_density2) ? 1 : 2, population_density1 > population_density2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (gdp_per_capita1 > gdp_per_capita2) ? 1 : 2, gdp_per_capita1 > gdp_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_power1 > super_power2) ? 1 : 2, super_power1 > super_power2);

    printf("\n--- Comparação de cartas (Atributo: Super Poder): ---\n");
    printf("Carta 1 - %s: %.2f\n", city1, super_power1);
    printf("Carta 2 - %s: %.2f\n", city2, super_power2);
   
    if (super_power1 > super_power2) {
      printf("Resultado: Carta 1 %s venceu!\n\n", city1);
    } else {
      printf("Resultado: Carta 1 %s venceu!\n\n", city2);
    }

    unsigned int attibute_choice;

    printf("\n--- Escolha um atributo para comparar: ---\n");
    printf("1 - Nome da cidade\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");
    scanf("%u", &attibute_choice);

    switch (attibute_choice)
    {
    case 1:
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
        printf("Super Poder: %.2f\n", super_power1);

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
        printf("Super Poder: %.2f\n", super_power2);
        break;
    case 2: 
        printf("Atributo selecionado: População\n");
        printf("%s: %d\n", city1, population1);
        printf("%s: %d\n", city2, population2);

        if (population1 == population2) {
            printf("Empate!\n");
        } else if(population1 > population2) {
            printf("Resultado: Carta 1 %s venceu!\n", city1);
        } else {
            printf("Resultado: Carta 2 %s venceu!\n", city2);
        }
        break;
    case 3: 
        printf("Atributo selecionado: Área\n");
        printf("%s: %.2f\n", city1, area1);
        printf("%s: %.2f\n", city2, area2);

        if (area1 == area2) {
            printf("Empate!\n");
        } else if(area1 > area2) {
            printf("Resultado: Carta 1 %s venceu!\n", city1);
        } else {
            printf("Resultado: Carta 2 %s venceu!\n", city2);
        }
        break;
    case 4: 
        printf("Atributo selecionado: PIB\n");
        printf("%s: %.2f\n", city1, gdp1);
        printf("%s: %.2f\n", city2, gdp2);

        if (gdp1 == gdp2) {
            printf("Empate!\n");
        } else if(gdp1 > gdp2) {
            printf("Resultado: Carta 1 %s venceu!\n", city1);
        } else {
            printf("Resultado: Carta 2 %s venceu!\n", city2);
        }
        break;
    case 5: 
        printf("Atributo selecionado: Número de pontos turísticos\n");
        printf("%s: %d\n", city1, attractions1);
        printf("%s: %d\n", city2, attractions2);
        
        if (attractions1 == attractions2) {
            printf("Empate!\n");
        } else if(attractions1 > attractions2) {
            printf("Resultado: Carta 1 %s venceu!\n", city1);
        } else {
            printf("Resultado: Carta 2 %s venceu!\n", city2);
        }
        break;
    case 6: 
        printf("Atributo selecionado: Densidade demográfica\n");
        printf("%s: %.2f\n", city1, population_density1);
        printf("%s: %.2f\n", city2, population_density2);

        if (population_density1 == population_density2) {
            printf("Empate!\n");
        } else if(population_density1 < population_density2) {
            printf("Resultado: Carta 1 %s venceu!\n", city1);
        } else {
            printf("Resultado: Carta 2 %s venceu!\n", city2);
        }
        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    unsigned int attibute_choice1, attibute_choice2;
    char *attribute_name1 = malloc(50 * sizeof(char));
    char *attribute_name2 = malloc(50 * sizeof(char));
    float attribute_value1_card1, attribute_value2_card1, attribute_value1_card2, attribute_value2_card2;

    printf("\n--- Comparação da soma de dois atributos: ---\n");

    printf("\n--- Escolha o primeiro atributo: ---\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%u", &attibute_choice1);

    switch (attibute_choice1)
    {
    case 1: 
        attribute_value1_card1 = population1;
        attribute_value1_card2 = population2;
        attribute_name1 = "População";
       
        break;
    case 2: 
        attribute_value1_card1 = area1;
        attribute_value1_card2 = area2;
        attribute_name1 = "Área";

        break;
    case 3: 
        attribute_value1_card1 = gdp1;
        attribute_value1_card2 = gdp2;
        attribute_name1 = "PIB";

        break;
    case 4: 
        attribute_value1_card1 = attractions1;
        attribute_value1_card2 = attractions2;
        attribute_name1 = "Número de pontos turísticos";

        break;
    case 5: 
        attribute_value1_card1 = population_density1 * -1;
        attribute_value1_card2 = population_density1 * -1;
        attribute_name1 = "Densidade demográfica";

        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    printf("\n--- Escolha o segundo atributo: ---\n");
    if (attibute_choice1 != 1) printf("1 - População\n");
    if (attibute_choice1 != 2) printf("2 - Área\n");
    if (attibute_choice1 != 3) printf("3 - PIB\n");
    if (attibute_choice1 != 4) printf("4 - Número de pontos turísticos\n");
    if (attibute_choice1 != 5) printf("5 - Densidade demográfica\n");
    
    scanf("%u", &attibute_choice2);

    switch (attibute_choice2)
    {
    case 1: 
        attribute_value2_card1 = population1;
        attribute_value2_card2 = population2;
        attribute_name2 = "População";
       
        break;
    case 2: 
        attribute_value2_card1 = area1;
        attribute_value2_card2 = area2;
        attribute_name2 = "Área";

        break;
    case 3: 
        attribute_value2_card1 = gdp1;
        attribute_value2_card2 = gdp2;
        attribute_name2 = "PIB";

        break;
    case 4: 
        attribute_value2_card1 = attractions1;
        attribute_value2_card2 = attractions2;
        attribute_name2 = "Número de pontos turísticos";

        break;
    case 5: 
        attribute_value2_card1 = population_density1 * -1;
        attribute_value2_card2 = population_density2 * -1;
        attribute_name2 = "Densidade demográfica";

        break;
    default:
        printf("Opção inválida\n");
        break;
    }

    float result1, result2;

    printf("\nResultado da comparação entre %s e %s\n", city1, city2);
    printf("%s:\n", city1);
    printf("%s: %.2f\n", attribute_name1, attribute_value1_card1);
    printf("%s: %.2f\n", attribute_name2, attribute_value2_card1);

    printf("\n%s:\n", city2);
    printf("%s: %.2f\n", attribute_name1, attribute_value1_card2);
    printf("%s: %.2f\n", attribute_name2, attribute_value2_card2);

    result1 = attribute_value1_card1 + attribute_value2_card1;
    result2 = attribute_value1_card2 + attribute_value2_card2;

    if (result1 == result2) {
       printf("Empate!");
    } else if (result1 > result2){
       printf("A carta 1 venceu!");
    } else {
       printf("A carta 2 venceu!");
    }

    return 0;
}
