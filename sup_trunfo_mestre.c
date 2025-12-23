#include <stdio.h>

int main(){
  // Entrada principal
  unsigned long int populacao1, populacao2;
  unsigned long int area1, area2;
  double pib1, pib2; // em bilhões
  int pontos_turisticos1, pontos_turisticos2;
  
  // Derivados
  double densiPop1, densiPop2;
  double PIB_per_capta1, PIB_per_capta2;
  double superPower1, superPower2;
  double inv_dens1, inv_dens2;

  // Área para saída e  entrada de dados

  printf("Digite a polulação da carta 1:\n");
  scanf("%lu", &populacao1);

  printf("Digite a população da carta 2:\n");
  scanf("%lu", &populacao2);

  printf("Digite a área da carta 1:\n");
  scanf("%lu", &area1);

  printf("Digite a área da carta 2:\n");
  scanf("%lu", &area2);

  printf("Digite o PIB da carta 1:\n");
  scanf("%lf", &pib1);

  printf("Digite o PIB da carta 2:\n");
  scanf("%lf", &pib2);

  printf("Digite os pontos turisticos da carta 1:\n");
  scanf("%d", &pontos_turisticos1);

  printf("Digite os pontos turisticos da carta 2:\n");
  scanf("%d", &pontos_turisticos2);

  // Área de cálculo densidade populacional percapta
  densiPop1 = (double) populacao1 / area1;

  densiPop2 = (double) populacao2 / area2; 

  // Área de cálculo PIB per capta
  PIB_per_capta1 = (pib1 * 1000000000) / populacao1;

  PIB_per_capta2 = (pib2 * 1000000000) / populacao2;

  // Área de cálculo carta de super poder

  superPower1 = populacao1 + area1 + pib1 + pontos_turisticos1 + PIB_per_capta1 + (1 / densiPop1);

  superPower2 = populacao2 + area2 + pib2 + pontos_turisticos2 + PIB_per_capta2 + (1 / densiPop2);

    printf("Comparação de Cartas:\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
        } else {
            printf("População: Carta 2 venceu (0)\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
        } else {
            printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n"); 
    } else {
        printf("PIB: Carta 2  venceu (0)\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densiPop1 < densiPop2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }

    if (PIB_per_capta1 > PIB_per_capta2) {
        printf("PIB per Capta: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capta: Carta 2 venceu (0)\n");
    }

    if (superPower1 > superPower2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}