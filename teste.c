#include <stdio.h>

int main()
{
    float populacao1, populacao2, PIB_per_capta1, PIB_per_capta2, vit_PIB_PC, SuperPower_1, SuperPower_2;
    unsigned long int area1, area2;
    double pib1, pib2, densiPop1, densiPop2, vit_densiPop;
    int pontos_turisticos1, pontos_turisticos2;

    int vit_PTuristicos, vitoria_populacao;
    unsigned long int vitoria_area;
    double vitoria_pib;

    // Área para saída e  entrada de dados

    printf("Digite a polulação:\n");
    scanf("%f", &populacao1);

    printf("Digite a população:\n");
    scanf("%f", &populacao2);

    printf("Digite a área:\n");
    scanf("%lu", &area1);

    printf("Digite a área:\n");
    scanf("%lu", &area2);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib1);

    printf("Digite o PIB:\n");
    scanf("%lf", &pib2);

    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite os pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Área de cálculo densidade populacional percapta
    densiPop1 = (double) populacao1 / area1;

    densiPop2 = (double) populacao2 / area2; 

    // Área de cálculo PIB per capta
    PIB_per_capta1 = (pib1 * 1000000000) / populacao1;

    PIB_per_capta2 = (pib2 * 1000000000) / populacao2;

    // Área de cálculo carta de super poder

    SuperPower_1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIB_per_capta1;

    SuperPower_2 = populacao2 + area2 + pib2 + pontos_turisticos2 + PIB_per_capta2;


    vitoria_populacao = populacao1 > populacao2;

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu %d\n", vitoria_populacao);
    } else printf("População: Carta 2 venceu %d\n", vitoria_populacao);

    vitoria_area = area1 > area2;

    if (area1 > area2) {
        printf("Área: Carta 1 venceu %lu\n", vitoria_area);
    } else {
        printf("Área: Carta 2 venceu %lu\n", vitoria_area);
    }

    vitoria_pib = pib1 > pib2;

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu %.0lf\n", vitoria_pib); 
    } else {
        printf("PIB: Carta 2  venceu %.0lf\n");
    }

    vit_PTuristicos = pontos_turisticos1 > pontos_turisticos2;

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu %d\n",vit_PTuristicos);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu %d\n", vit_PTuristicos);
    }

    vit_densiPop = densiPop1 > densiPop2;

    if (densiPop1 < densiPop2) {
        printf("Densidade Populacional: Carta 1 venceu %lf\n", vit_densiPop);
    } else {
        printf("Densidade Populacional: Carta 2 venceu %lf\n", vit_densiPop);
    }

    vit_PIB_PC = PIB_per_capta1 > PIB_per_capta2;

    if (PIB_per_capta1 > PIB_per_capta2) {
        printf("PIB per Capta: Carta 1 venceu %lf\n", vit_PIB_PC);
        printf("PIB per Capta: Carta 2 venceu %lf\n", vit_PIB_PC);
    }

    return 0;
}