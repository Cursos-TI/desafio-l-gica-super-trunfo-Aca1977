#include <stdio.h>

// Desafio Super Trunfo - Estados Brasileiros
// Tema 1 - Cadastro das Cartas

int main() {

    // Declaração das variaveis da Carta 1
    char estado1 [20]; 
    char codigo1 [5];
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
   

    // Declaração das variaveis da Carta 2
    char estado2 [20];
    char codigo2 [5];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // ------ Entrada da Carta 1 ------
    printf("Digite os dados da Carta 1:\n"); // imprimir dados formatados na tela (saída padrão, geralmente o console/terminal).
    printf("Nome do Estado: ");
    scanf("%s", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", &codigo1); // usada para ler dados de entrada fornecidos pelo usuário (normalmente pelo teclado) e armazenar esses dados em variáveis.

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1); 
    

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = (unsigned long int)( populacao1 / area1);

    printf("Densidade Populacional (hab/km2): %f\n", densidade_populacional1);

    pib_per_capita1 = (unsigned long int)(pib1*1000000000 / populacao1);
    printf("PIB per Capita (reais): %f\n", pib_per_capita1);


    // ------ Entrada da Carta 2 ------
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do Estado: ");
    scanf("%s", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (unsigned long int)(populacao2 / area2);
    printf("Densidade Populacional (hab/km2): %f\n", densidade_populacional2);

 
    pib_per_capita2 = (unsigned long int) (pib2*1000000000 / populacao2);
    printf("PIB per Capita (reais): %f\n", pib_per_capita2);


    // ----- Exibição dos Dados das Cartas -----
    // Carta 1:
    printf("\nCarta 1:\n"); 
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu hab\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Carta 2:
    printf("\nCarta 2:\n"); 
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu hab\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: reais %.2f reais\n", pib_per_capita2);

    // Valores pré definidos:
    populacao1 = 12325000;
    populacao2 = 6748000;
    

    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - Pirai: 12325.000\n");
    printf("Carta 2 - Arrozal: 6748.000\n");

    // Comparação de cartas (Atributo: População):
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 Pirai vanceu!");
    }
        else{
            printf("Resultado: Carta 2 - Arrozal venceu!");
        }
        return 0;
    }
