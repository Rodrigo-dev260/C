#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf 
// para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
        
        int carta1, carta2, p_turisticos1, p_turisticos2;
        unsigned long int populacao1, populacao2;
        char estado1, estado2, codigo1[4], codigo2[4], n_cidade1[20], n_cidade2[20];
        float area_em_km1, area_em_km2, densidade_populacional_1, densidade_populacional_2, PIB_per_capta_1, PIB_per_capta_2;
        double pib1, pib2;
        // Área para entrada de dados

        printf("Bem vindo ao jogo Super Trunfo Países!\n");

        printf("\nDigite o número da carta:");
        scanf("%d", &carta1);

        printf("Digite a letra referênte ao Estado de A a H:");
        scanf(" %c", &estado1);

        printf("Digite o Código da carta:");
        scanf("%3s", codigo1);

        printf("Digite o nome da Cidade:");
        getchar();
        scanf(" %[^\n]", n_cidade1);

        printf("Digite o número da população:");
        scanf("%u", &populacao1);

        printf("Digite a área em Km²:");
        scanf("%f", &area_em_km1);

        printf("Digite o PIB da Cidade:");
        scanf("%lf", &pib1);

        printf("Digite o número de pontos turisticos:");
        scanf("%d", &p_turisticos1);

        // Entrada de dados da carta 2.

        printf("\nDigite os dados da segunda carta.\n");

        printf("Digite o número da carta:");
        scanf("%d", &carta2);

        printf("Digite a letra referênte ao Estado de A a H:");
        scanf(" %c", &estado2);

        printf("Digite o código da carta:");
        scanf("%3s", codigo2);

        printf("Digite o nome da Cidade:");
        getchar();
        scanf(" %[^\n]", n_cidade2);


        printf("Digite o número população:");
        scanf("%u", &populacao2);

        printf("Digite a área em Km²:");
        scanf("%f", &area_em_km2);

        printf("Digite o PIB da Cidade:");
        scanf("%lf", &pib2);

        printf("Digite o número de pontos turisticos:");
        scanf("%d", &p_turisticos2);

        // Área de calculo

        densidade_populacional_1 = populacao1 / area_em_km1;

        densidade_populacional_2 = populacao2 / area_em_km2;

        PIB_per_capta_1 = (pib1 * 1000000000) / populacao1;

        PIB_per_capta_2 = (pib2 * 1000000000) / populacao2;

        //Comparação de cartas 

        vit_Populacao1 = (populacao1 > populacao2);

        // Área reservada a saídas do terminal

        printf("\n--- Resumo Carta 1 ---\n");
        printf("Carta: %d\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea:%.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capta: %.2f reais\n", carta1, estado1, codigo1, n_cidade1, populacao1, area_em_km1, pib1, p_turisticos1, densidade_populacional_1, PIB_per_capta_1);

        printf("\n--- Resumo Carta 2 ---\n");
        printf("Carta: %d\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea:%.2f km2\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capta: %.2f reais\n", carta2, estado2, codigo2, n_cidade2, populacao2, area_em_km2, pib2, p_turisticos2, densidade_populacional_2, PIB_per_capta_2);

        //Calculando 

        rDensidadeoPIB =  

        return 0;
        }