#include <stdio.h>
#include <locale.h>

int main(void) {

    // Código para leitura de acentos
    setlocale(LC_ALL, "Portuguese");

    // Informações da Carta 1
    char estadocarta1;
    char codigocarta1[4];
    char cidadecarta1[50];
    unsigned long int populacaocarta1;
    int nptcarta1;
    float area_carta1;
    float pibcarta1;
    float densidade_populacionalcarta1;
    float inverso_densidade_populacionalcarta1;
    float pib_per_capta1;
    float superPoder1;

    printf("Digite o estado da carta1:\n");
    scanf("%c", &estadocarta1);
    getchar();

    printf("Digite o código da carta1:\n");
    scanf("%s", codigocarta1);
    getchar();

    printf("Digite o nome da cidade da carta1:\n");
    scanf("%[^\n]", cidadecarta1);
    getchar();

    printf("Digite a população da carta1:\n");
    scanf("%ld", &populacaocarta1);
    getchar();

    printf("Digite a área da carta1:\n");
    scanf("%f", &area_carta1);
    getchar();

    printf("Digite o PIB da carta1:\n");
    scanf("%f", &pibcarta1);
    getchar();

    printf("Digite o número de pontos turísticos da carta1:\n");
    scanf("%d", &nptcarta1);
    getchar();

    densidade_populacionalcarta1 = (float)populacaocarta1 / area_carta1;
    pib_per_capta1 = (float)pibcarta1 / populacaocarta1;
    inverso_densidade_populacionalcarta1 = (float)area_carta1 / populacaocarta1;
    superPoder1 = (float)populacaocarta1 + area_carta1 + pibcarta1 + nptcarta1 + pib_per_capta1 + inverso_densidade_populacionalcarta1;

    // Informações da Carta 2
    char estadocarta2;
    char codigocarta2[4];
    char cidadecarta2[50];
    unsigned long int populacaocarta2;
    float area_carta2;
    float pibcarta2;
    float densidade_populacionalcarta2;
    float inverso_densidade_populacionalcarta2;
    float pib_per_capta2;
    int nptcarta2;
    float superPoder2;

    printf("Digite o estado da carta2:\n");
    scanf("%c", &estadocarta2);
    getchar();

    printf("Digite o código da carta2:\n");
    scanf("%s", codigocarta2);
    getchar();

    printf("Digite o nome da cidade da carta2:\n");
    scanf("%[^\n]", cidadecarta2);
    getchar();

    printf("Digite a população da carta2:\n");
    scanf("%ld", &populacaocarta2);
    getchar();

    printf("Digite a área da carta2:\n");
    scanf("%f", &area_carta2);
    getchar();

    printf("Digite o PIB da carta2:\n");
    scanf("%f", &pibcarta2);
    getchar();

    printf("Digite o número de pontos turísticos da carta2:\n");
    scanf("%d", &nptcarta2);
    getchar();

    densidade_populacionalcarta2 = (float)populacaocarta2 / area_carta2;
    pib_per_capta2 = (float)pibcarta2 / populacaocarta2;
    inverso_densidade_populacionalcarta2 = (float)area_carta2 / populacaocarta2;
    superPoder2 = (float)populacaocarta2 + area_carta2 + pibcarta2 + nptcarta2 + pib_per_capta2 + inverso_densidade_populacionalcarta2;


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


    //Comparação das Cartas
    printf("\nComparação de Cartas:\n");

    const char* vencedor_texto[2] = {
        "Carta 2 venceu", // índice 0 → falso
        "Carta 1 venceu"  // índice 1 → verdadeiro
    };

    printf("População: %s (%d)\n", vencedor_texto[populacaocarta1 > populacaocarta2], populacaocarta1 > populacaocarta2);
    printf("Área: %s (%d)\n", vencedor_texto[area_carta1 > area_carta2], area_carta1 > area_carta2);
    printf("PIB: %s (%d)\n", vencedor_texto[pibcarta1 > pibcarta2], pibcarta1 > pibcarta2);
    printf("Pontos Turísticos: %s (%d)\n", vencedor_texto[nptcarta1 > nptcarta2], nptcarta1 > nptcarta2);

    // Aqui o critério é o contrário: menor densidade vence
    printf("Densidade Populacional: %s (%d)\n", vencedor_texto[densidade_populacionalcarta1 < densidade_populacionalcarta2], densidade_populacionalcarta1 < densidade_populacionalcarta2);

    printf("PIB per Capita: %s (%d)\n", vencedor_texto[pib_per_capta1 > pib_per_capta2], pib_per_capta1 > pib_per_capta2);
    printf("Super Poder: %s (%d)\n", vencedor_texto[superPoder1 > superPoder2], superPoder1 > superPoder2);

    return 0;
}
