#include <stdio.h>

int main(){

    char Estado1 = 'A';
    char CodigodeCarta1[3] = "A01";
    char Cidade1[50] = "SP";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int Turi1 = 50;
    float Dens1;
    float PIBper1;

    Dens1 = (float)(populacao1 / area1);
    PIBper1 = (float)((PIB1 * 1000000000) / populacao1);

    printf("Cartas:\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodigodeCarta1);
    printf("Nome da Cidade: %s\n", Cidade1);

    char Estado2 = 'B';
    char CodigodeCarta2[3] = "B01";
    char Cidade2[50] = "RJ";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int Turi2 = 30;
    float Dens2;
    float PIBper2;

    Dens2 = (float)(populacao2 / area2);
    PIBper2 = (float)((PIB2 * 1000000000) / populacao2);

    printf("Carta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodigodeCarta2);
    printf("Nome da Cidade: %s\n", Cidade2);

    printf("População:\n");
    printf("Carta 1 - São Paulo (SP): %lu\n", populacao1);
    printf("Carta 2 - Rio de Janeiro (RJ): %lu\n", populacao2);
    if( populacao1 > populacao2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Area km²:\n");
    printf("Carta 1 - São Paulo (SP): %.2f km²\n", area1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f km²\n", area2);
    if( area1 > area2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("PIB:\n");
    printf("Carta 1 - São Paulo (SP): %.2f bilhões de reais\n", PIB1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f bilhões de reais\n", PIB2);
    if( PIB1 > PIB2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("N° Pontos Turisticos:\n");
    printf("Carta 1 - São Paulo (SP): %d\n", Turi1);
    printf("Carta 2 - Rio de Janeiro (RJ): %d\n", Turi2);
    if( Turi1 > Turi2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("Densidade Populacional:\n");
    printf("Carta 1 - São Paulo (SP): %.2f hab/km²\n", Dens1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f hab/km²\n", Dens2);
    if( Dens1 < Dens2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }

    printf("PIB per Capta:\n");
    printf("Carta 1 - São Paulo (SP): %.2f reais\n", PIBper1);
    printf("Carta 2 - Rio de Janeiro (RJ): %.2f reais\n", PIBper2);
    if( PIBper1 > PIBper2 ){
        printf("Resultado: Carta 1 venceu!\n");
    } else {
        printf("Resultado: Carta 2 venceu!\n");
    }


    return 0;
}