#include <stdio.h>

int main(){

    char Estado1;
    char CodigodeCarta1[3];
    char Cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int Turi1;
    float Dens1;
    float PIBper1;
    float Super1;

    printf("Digite seu Estado: \n");
    scanf("%c", &Estado1);

    printf("Digite seu Código de Carta: \n");
    scanf("%s", &CodigodeCarta1);

    printf("Digite sua Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Area de km² da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turisticos Cidade: \n");
    scanf("%d", &Turi1);

    Dens1 = (float)(populacao1 / area1);
    PIBper1 = (float)((PIB1 * 1000000000) / populacao1);
    Super1 = (float)(populacao1 + area1 + PIB1 + Turi1 + PIBper1 - Dens1);

    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigodeCarta1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", Turi1);
    printf("Densidade Populacional: %.2f hab/km²\n", Dens1);
    printf("PIB per Capita: %.2f reais\n", PIBper1);
    printf("Super Poder %.2f\n", Super1);

    char Estado2;
    char CodigodeCarta2[3];
    char Cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int Turi2;
    float Dens2;
    float PIBper2;
    float Super2;

    printf("Digite seu Estado: \n");
    scanf("%c", &Estado2);

    printf("Digite seu Código de Carta: \n");
    scanf("%s", &CodigodeCarta2);

    printf("Digite sua Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Area de km² da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a Quantidade de Pontos Turisticos Cidade: \n");
    scanf("%d", &Turi2);

    Dens2 = (float)(populacao2 / area2);
    PIBper2 = (float)((PIB2 * 1000000000) / populacao2);
    Super2 = (float)(populacao2 + area2 + PIB2 + Turi2 + PIBper2 - Dens2);

    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigodeCarta2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", Turi2);
    printf("Densidade Populacional: %.2f hab/km²\n", Dens2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);
    printf("Super Poder %.2f\n", Super2);

    unsigned long int ComPopul = populacao1 > populacao2;
    int ComArea = area1 > area2;
    int ComPIB = PIB1 > PIB2;
    int ComTuri = Turi1 > Turi2;
    int ComDens = Dens1 < Dens2;
    int ComPIBper = PIBper1 > PIBper2;
    int ComSuper = Super1 > Super2;

    printf("Comparação de Cartas:");
    printf("População: %d\n", ComPopul);
    printf("Area: %d\n", ComArea);
    printf("PIB: %d\n", ComPIB);
    printf("Pontos Turisticos: %d\n", ComTuri);
    printf("Densidade Populacional: %d\n", ComDens);
    printf("PIB per Capita: %d\n", ComPIBper);
    printf("Super Poder: %d\n", ComSuper);

    return 0;
}