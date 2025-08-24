#include <stdio.h>

#include <locale.h>

#include <stdbool.h>

#include <stdlib.h>

int main(void) {

  // Código para leitura de acentos
  setlocale(LC_ALL, "Portuguese");

  // Informações da Carta 1
  char estadocarta1;
  char codigocarta1[4];
  char cidadecarta1[50];
  int atributo1;
  unsigned long int populacaocarta1;
  int nptcarta1;
  int opcaoMenu;
  float area_carta1;
  float pibcarta1;
  float densidade_populacionalcarta1;
  float inverso_densidade_populacionalcarta1;
  float pib_per_capta1;
  float superPoder1;
  float valor1a, valor1b, soma1;

  printf("Digite o estado da carta1:\n");
  scanf("%c", & estadocarta1);
  getchar();

  printf("Digite o código da carta1:\n");
  scanf("%s", & codigocarta1);
  getchar();

  printf("Digite o nome da cidade da carta1:\n");
  scanf("%[^\n]", & cidadecarta1);
  getchar();

  printf("Digite a população da carta1:\n");
  scanf("%ld", & populacaocarta1);
  getchar();

  printf("Digite a área da carta1:\n");
  scanf("%f", & area_carta1);
  getchar();

  printf("Digite o PIB da carta1:\n");
  scanf("%f", & pibcarta1);
  getchar();

  printf("Digite o número de pontos turísticos da carta1:\n");
  scanf("%d", & nptcarta1);
  getchar();

  densidade_populacionalcarta1 = (float) populacaocarta1 / area_carta1;
  pib_per_capta1 = (float) pibcarta1 / populacaocarta1;
  inverso_densidade_populacionalcarta1 = (float) area_carta1 / populacaocarta1;
  superPoder1 = (float) populacaocarta1 + area_carta1 + pibcarta1 + nptcarta1 + pib_per_capta1 + inverso_densidade_populacionalcarta1;

  // Informações da Carta 2
  char estadocarta2;
  char codigocarta2[4];
  char cidadecarta2[50];
  int atributo2;
  unsigned long int populacaocarta2;
  float area_carta2;
  float pibcarta2;
  float densidade_populacionalcarta2;
  float inverso_densidade_populacionalcarta2;
  float pib_per_capta2;
  int nptcarta2;
  float superPoder2;
  float valor2a, valor2b, soma2;
  float densidade_atributo;

  printf("Digite o estado da carta2:\n");
  scanf("%c", & estadocarta2);
  getchar();

  printf("Digite o código da carta2:\n");
  scanf("%s", & codigocarta2);
  getchar();

  printf("Digite o nome da cidade da carta2:\n");
  scanf("%[^\n]", & cidadecarta2);
  getchar();

  printf("Digite a população da carta2:\n");
  scanf("%ld", & populacaocarta2);
  getchar();

  printf("Digite a área da carta2:\n");
  scanf("%f", & area_carta2);
  getchar();

  printf("Digite o PIB da carta2:\n");
  scanf("%f", & pibcarta2);
  getchar();

  printf("Digite o número de pontos turísticos da carta2:\n");
  scanf("%d", & nptcarta2);
  getchar();

  densidade_populacionalcarta2 = (float) populacaocarta2 / area_carta2;
  pib_per_capta2 = (float) pibcarta2 / populacaocarta2;
  inverso_densidade_populacionalcarta2 = (float) area_carta2 / populacaocarta2;
  superPoder2 = (float) populacaocarta2 + area_carta2 + pibcarta2 + nptcarta2 + pib_per_capta2 + inverso_densidade_populacionalcarta2;

  // Impressão dos dados da Carta 1
  printf("Informações carta 1:\n");
  printf("Estado carta 1: %c\n", estadocarta1);
  printf("Código carta 1: %s\n", codigocarta1);
  printf("Cidade carta 1: %s\n", cidadecarta1);
  printf("População carta 1: %ld habitantes\n", populacaocarta1);
  printf("Área carta 1: %.2f km²\n", area_carta1);
  printf("PIB carta 1: %.2f bilhões de reais\n", pibcarta1);
  printf("Número de pontos turísticos carta 1: %d\n", nptcarta1);
  printf("Densidade populacional carta 1: %.2f \n", densidade_populacionalcarta1);
  printf("PIB per Capita carta 1: %.2f \n", pib_per_capta1);

  // Impressão dos dados da Carta 2
  printf("Informações carta 2:\n");
  printf("Estado carta 2: %c\n", estadocarta2);
  printf("Código carta 2: %s\n", codigocarta2);
  printf("Cidade carta 2: %s\n", cidadecarta2);
  printf("População carta 2: %ld habitantes\n", populacaocarta2);
  printf("Área carta 2: %.2f km²\n", area_carta2);
  printf("PIB carta 2: %.2f bilhões de reais\n", pibcarta2);
  printf("Número de pontos turísticos carta 2: %d\n", nptcarta2);
  printf("Densidade populacional carta 2: %.2f \n", densidade_populacionalcarta2);
  printf("PIB per Capita carta 2: %.2f \n", pib_per_capta2);

  // Comparação das Cartas
  printf("\nComparação de Cartas:\n");

  const char * vencedor_texto[2] = {
    "Carta 2 venceu", // índice 0 → falso
    "Carta 1 venceu" // índice 1 → verdadeiro
  };

  printf("População: %s (%d)\n", vencedor_texto[populacaocarta1 > populacaocarta2], populacaocarta1 > populacaocarta2);
  printf("Área: %s (%d)\n", vencedor_texto[area_carta1 > area_carta2], area_carta1 > area_carta2);
  printf("PIB: %s (%d)\n", vencedor_texto[pibcarta1 > pibcarta2], pibcarta1 > pibcarta2);
  printf("Pontos Turísticos: %s (%d)\n", vencedor_texto[nptcarta1 > nptcarta2], nptcarta1 > nptcarta2);

  // Aqui o critério é o contrário: menor densidade vence
  printf("Densidade Populacional: %s (%d)\n", vencedor_texto[densidade_populacionalcarta1 < densidade_populacionalcarta2], densidade_populacionalcarta1 < densidade_populacionalcarta2);

  printf("PIB per Capita: %s (%d)\n", vencedor_texto[pib_per_capta1 > pib_per_capta2], pib_per_capta1 > pib_per_capta2);
  printf("Super Poder: %s (%d)\n", vencedor_texto[superPoder1 > superPoder2], superPoder1 > superPoder2);

  // Menu comparativo
  while (1) {
    printf("\nEscolha um atributo para ser comparado:\n");
    printf("1 - Nomes das cidades\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB\n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica (menor vence)\n");
    printf("7 - Sair\n");
    printf("Resposta: ");
    scanf("%d", &opcaoMenu);

    switch (opcaoMenu) {
        case 1:
          printf("\nAs cidades escolhidas foram:\n");
          printf("Cidade 1: %s\n", cidadecarta1);
          printf("Cidade 2: %s\n", cidadecarta2);
          break;

        case 2:
          if (populacaocarta1 > populacaocarta2)
            printf("%s tem mais população.\n", cidadecarta1);
          else if (populacaocarta1 < populacaocarta2)
            printf("%s tem mais população.\n", cidadecarta2);
          else
            printf("As populações são iguais.\n");
          break;

        case 3:
          if (area_carta1 > area_carta2)
            printf("%s tem mais área.\n", cidadecarta1);
          else if (area_carta1 < area_carta2)
            printf("%s tem mais área.\n", cidadecarta2);
          else
            printf("As áreas são iguais.\n");
          break;

        case 4:
          if (pibcarta1 > pibcarta2)
            printf("%s tem mais PIB.\n", cidadecarta1);
          else if (pibcarta1 < pibcarta2)
            printf("%s tem mais PIB.\n", cidadecarta2);
          else
            printf("Os PIBs são iguais.\n");
          break;

        case 5:
          if (nptcarta1 > nptcarta2)
            printf("%s tem mais pontos turísticos.\n", cidadecarta1);
          else if (nptcarta1 < nptcarta2)
            printf("%s tem mais pontos turísticos.\n", cidadecarta2);
          else
            printf("O número de pontos turísticos é igual.\n");
          break;

        case 6:
          if (densidade_populacionalcarta1 < densidade_populacionalcarta2)
            printf("%s tem menor densidade populacional.\n", cidadecarta1);
          else if (densidade_populacionalcarta1 > densidade_populacionalcarta2)
            printf("%s tem menor densidade populacional.\n", cidadecarta2);
          else
            printf("As densidades populacionais são iguais.\n");
          break;

        case 7:
          printf("\nSaindo...\n");
          break;

        default:
          printf("Opção inválida. Tente novamente.\n");
    }

    if (opcaoMenu == 7) break;
  }

    // Escolha e comparação de atributos para ver quem ganha o jogo
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - População\n ");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica (menor vence)\n");
    scanf("%d", & atributo1);
    do {
      printf("\nEscolha o segundo atributo (diferente do atributo 1):\n");
      scanf("%d", & atributo2);
      if (atributo2 == atributo1) {
        printf("Você já escolheu esse atributo, tente outro!\n");
      }
    } while (atributo2 == atributo1);

    // Coleta de valores usando ternário
    valor1a = (atributo1 == 1) ? populacaocarta1 : (atributo1 == 2) ? area_carta1 : (atributo1 == 3) ? pibcarta1 : (atributo1 == 4) ? nptcarta1 : densidade_populacionalcarta1;
    valor2a = (atributo1 == 1) ? populacaocarta2 : (atributo1 == 2) ? area_carta2 : (atributo1 == 3) ? pibcarta2 : (atributo1 == 4) ? nptcarta2 : densidade_populacionalcarta2;
    valor1b = (atributo2 == 1) ? populacaocarta1 : (atributo2 == 2) ? area_carta1 : (atributo2 == 3) ? pibcarta1 : (atributo2 == 4) ? nptcarta1 : densidade_populacionalcarta1;
    valor2b = (atributo2 == 1) ? populacaocarta2 : (atributo2 == 2) ? area_carta2 : (atributo2 == 3) ? pibcarta2 : (atributo2 == 4) ? nptcarta2 : densidade_populacionalcarta2;

    // Comparação Individual dos valores
    if(atributo1 == 5) {
        if(valor1a < valor2a)
            printf("O vencedor é: %s\n", valor1a);
        else
            printf("O vencedor é: %s\n", valor2a);
    }
    else if(atributo2 == 5) {
        if(valor2a < valor1a)
            printf("O vencedor é: %s\n", valor2a);
        else
            printf("O vencedor é: %s\n", valor1a);
    }
    else {
        if(valor1a > valor2a)
            printf("O vencedor é: %s\n", valor1a);
        else
            printf("O vencedor é: %s\n", valor2a);
    }

    // Soma final dos valores
    soma1 = valor1a + valor1b;
    soma2 = valor2a + valor2b;

    // Resultado da soma
    printf("\n-> %.2f e %.2f (soma %.2f)\n", valor1a, valor1b, soma1);
    printf("\n-> %.2f e %.2f (soma %.2f)\n", valor2a, valor2b, soma2);

    // Decidindo o vencedor
    if (soma1 > soma2)
      printf("O vencedor é: %s\n", soma1);
    else if (soma2 > soma1)
      printf("O vencedor é: %s\n", soma2);
    else
      printf("Os jogadores empataram!\n");

  return 0;
}
