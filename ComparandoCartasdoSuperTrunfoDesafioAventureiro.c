#include <stdio.h>

int main() {

    char pais1[20];
    int populacao1;
    float area1;
    float PIB1;
    int Turi1;
    float Dens1;

    printf("*** Trunfo ***\n");
    printf("*** Jogador 1 ***\n");
    printf("Digite seu Pais: \n");
    scanf("%s", &pais1);

    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area de km² da Cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turisticos Cidade: \n");
    scanf("%d", &Turi1);

    Dens1 = (float)(populacao1 / area1);

    printf("Pais: %s\n", pais1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turisticos: %d\n", Turi1);
    printf("Densidade Populacional: %.2f hab/km²\n", Dens1);

    char pais2[20];
    int populacao2;
    float area2;
    float PIB2;
    int Turi2;
    float Dens2;

    printf("*** Trunfo ***\n");
    printf("*** Jogador 2 ***\n");
    printf("Digite seu Pais: \n");
    scanf("%s", &pais2);

    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area de km² da Cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a Quantidade de Pontos Turisticos Cidade: \n");
    scanf("%d", &Turi2);

    Dens2 = (float)(populacao2 / area2);

    printf("Pais: %s\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turisticos: %d\n", Turi2);
    printf("Densidade Populacional: %.2f hab/km²\n", Dens2);


    int escolhajogadores;

    printf("*** Trunfo ***\n");
    printf("Escolha uma opção de comparação:\n");
    printf("1. População\n");
    printf("2. Àrea\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha:\n");
    scanf("%d", &escolhajogadores);

    switch (escolhajogadores) {
        case 1:
            printf("Jogadores Escolheram: População - \n");
            printf("Pais 1: %s x Pais 2: %s\n", pais1, pais2);
            printf("Jogador 1: %d\n", populacao1);
            printf("Jogador 2: %d\n", populacao2);
            if (populacao1 == populacao2)
            {
            printf("### Jogo empatou! \n");
            } else if (populacao1 > populacao2)
            {
                printf("### Jogador 1 Venceu! \n");
            }   else {
                 printf("### Jogador 2 Venceu! \n");
            }
        break;
        case 2:
            printf("Jogadores Escolheram: Àrea - \n");
            printf("Pais 1: %s x Pais 2: %s\n", pais1, pais2);
            printf("Jogador 1: %.2f\n", area1);
            printf("Jogador 2: %.2f\n", area2);
            if (area1 == area2)
            {
            printf("### Jogo empatou! \n");
            } else if (area1 > area2)
            {
            printf("### Jogador 1 Venceu! \n");
            }   else {
             printf("### Jogador 2 Venceu! \n");
            }
        break;
        case 3:
            printf("Jogadores Escolheram: PIB - \n");
            printf("Pais 1: %s x Pais 2: %s\n", pais1, pais2);
            printf("Jogador 1: %.2f\n", PIB1);
            printf("Jogador 2: %.2f\n", PIB2);
            if (PIB1 == PIB2)
            {
            printf("### Jogo empatou! \n");
            } else if (PIB1 > PIB2)
            {
            printf("### Jogador 1 Venceu! \n");
            }   else {
             printf("### Jogador 2 Venceu! \n");
            }
        break;
        case 4:
            printf("Jogadores Escolheram: Número de Pontos Turísticos - \n");
            printf("Pais 1: %s x Pais 2: %s\n", pais1, pais2);
            printf("Jogador 1: %d\n", Turi1);
            printf("Jogador 2: %d\n", Turi2);
            if (Turi1 == Turi2)
            {
            printf("### Jogo empatou! \n");
            } else if (Turi1 > Turi2)
            {
            printf("### Jogador 1 Venceu! \n");
            }   else {
             printf("### Jogador 2 Venceu! \n");
            }
        break;
        case 5:
            printf("Jogadores Escolheram: Densidade demográfica - \n");
            printf("Pais 1: %s x Pais 2: %s\n", pais1, pais2);
            printf("Jogador 1: %.2f\n", Dens1);
            printf("Jogador 2: %.2f\n", Dens2);
            if (Dens1 == Dens2)
            {
            printf("### Jogo empatou! \n");
            } else if (Dens1 < Dens2)
            {
            printf("### Jogador 1 Venceu! \n");
            }   else {
             printf("### Jogador 2 Venceu! \n");
            }
        break;
        default:
            printf("Opção Invalida\n");
        break;
    }


    return 0;
}