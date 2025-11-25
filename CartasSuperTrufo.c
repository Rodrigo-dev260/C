#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  int carta1, p_turisticos1, populacao1;
  char estado1[20], codigo1[3], n_cidade1[20];
  float area_em_km1, pib1;

  // Dados da carta 2

  int carta2, p_turisticos2, populacao2;
  char estado2[20], codigo2[3], n_cidade2[20];
  float area_em_km2, pib2;
  
  // Área para entrada de dados

  printf("Bem vindo ao jogo Super Trunfo Países!\n");

  printf("Digite o número da carta:");
  scanf("%d", &carta1);

  printf("Digite a letra referênte ao Estado de A a H:");
  scanf("%s", estado1);

  printf("Digite o Código da carta:");
  scanf("%s", codigo1);

  printf("Digite o nome da Cidade:");
  scanf("%s", n_cidade1);

  printf("Digite o número da populacional:");
  scanf("%d", &populacao1);

  printf("Digite a área em Km²:");
  scanf("%f", &area_em_km1);

  printf("Digite i PIB da Cidade:");
  scanf("%f", &pib1);

  printf("Digite o número de pontos turisticos:");
  scanf("%d", &p_turisticos1);

  // Entrada de dados da carta 2.

  printf("Digite os dados da segunda carta.\n");
  printf("Digite o número da carta:");
  scanf("%d", &carta2);

  printf("Digite a letra referênte ao Estado de A a H:");
  scanf("%s", estado2);

  printf("Digite o código da carta:");
  scanf("%s", codigo2);

  printf("Digite o nome da Cidade:");
  scanf("%s", n_cidade2);

  printf("Digite o número populacional:");
  scanf("%f", &populacao2);

  printf("Digite a área em Km");
  
  
  // Área para exibição dos dados da cidade

return 0;
} 