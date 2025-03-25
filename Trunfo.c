#include <stdio.h>


  int main(){
      char Estado1[50];                                     // letra do Estado (A a H)
      char Estado2[50];                                    // letra do Estado (A a H)
      char codigo1[4];                          // Código da carta (A01)
      char codigo2[4];
      char cidade1[50];                        // Nome da cidade
      char cidade2[50];
      int populacao1;                         // Populaçao da cidade
      int populacao2;
      float Area1;                                   // Área da cidade em Km²
      float Area2;
      float pib1;                                     // PIB da cidade
      float pib2;
      int pontosturisticos1;             // Número de pontos turísticos na cidade
      int pontosturisticos2;


      printf("VAMOS AO JOGO SUPER TRUNFO DOS PAÍSES \n\n");
  printf("Digite os dados da Carta 1");
  printf("\n");
  printf("Digite o estado (uma letra de A - H): ");
  scanf("%s", &Estado1);
  printf("Digite o Codigo da Carta (01 - 08): ");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade1);
  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao1);
  printf("Area em Km²: ");
  scanf("%f", &Area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Pontos Turisticos: ");
  scanf("%d", &pontosturisticos1);

  printf("\n");
  
  printf("Digite os dados da Carta 2 \n");
  printf("\n");
  printf("Digite o estado (uma letra de A - H): ");
  scanf("%s", &Estado2);
  printf("Digite o Codigo da Carta (01 - 08): ");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade2);
  printf("Digite a populacao da cidade: ");
  scanf("%d", &populacao2);
  printf("Area em Km²: ");
  scanf("%f", &Area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Pontos Turisticos: ");
  scanf("%d", &pontosturisticos2);

printf("\n");

  printf("Carta 1: \n");
  printf("Estado: %s \n", Estado1);
  printf("Código: %s, %s \n", Estado1, codigo1);
  printf("Nome da cidade: %s \n",cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area em Km²: %f km²\n", Area1);
  printf("PIB: %f bilhoes de Reais\n", pib1);
  printf("Pontos Turisticos: %d \n", pontosturisticos1);

  printf("\n");

  printf("Carta 2: \n");
  printf("Estado: %s \n", Estado2);
  printf("Código: %s, %s \n", Estado2, codigo2);
  printf("Nome da cidade: %s \n",cidade2);
  printf("Populacao: %d \n", populacao2);
  printf("Area em Km²: %f km²\n", Area2);
  printf("PIB: %f bilhoes de Reais\n", pib2);
  printf("Pontos Turisticos: %d \n", pontosturisticos2);

  return 0;

  }