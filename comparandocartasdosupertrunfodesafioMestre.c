#include <stdio.h>

int main() {
    int primeiraescolha, segundaescolha;
    char pais1[20], pais2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int Turi1, Turi2;
    float Dens1, Dens2;

    printf ("*** Trunfo ***\n");
    printf ("Escolha duas opção de comparação:\n");
    printf ("1. População\n");
    printf ("2. Àrea\n");
    printf ("3. PIB\n");
    printf ("4. Número de Pontos Turísticos\n");
    printf ("5. Densidade demográfica\n");
    printf ("Escolha a primeira:\n");
    scanf ("%d", &primeiraescolha);

    switch (primeiraescolha) {
        case 1:
            printf("Primeira Categoria Escolhida: População - \n");

            printf("Jogadores 1 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais1);
            printf("Jogadores 2 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais2);

            printf("Jogadores 1 Digite o Número de Habitantes:\n");
            scanf("%d", &populacao1);
            printf("Jogadores 2 Digite o Número de Habitantes:\n");
            scanf("%d", &populacao2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Primeira Categoria Escolhida: Área - \n");

            printf("Jogadores 1 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais1);
            printf("Jogadores 2 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais2);

            printf("Jogadores 1 Digite a Área km²:\n");
            scanf("%f", &area1);
            printf("Jogadores 2 Digite a Área km²:\n");
            scanf("%f", &area2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
            printf("Jogador 1: %.2fkm²\n", area1);
            printf("Jogador 2: %.2fkm²\n", area2);

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
            printf("Primeira Categoria Escolhida: PIB - \n");

            printf("Jogadores 1 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais1);
            printf("Jogadores 2 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais2);

            printf("Jogadores 1 Digite o PIB:\n");
            scanf("%f", &PIB1);
            printf("Jogadores 2 Digite o PIB:\n");
            scanf("%f", &PIB2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Primeira Categoria Escolhida: Número de Pontos Turísticos - \n");

            printf("Jogadores 1 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais1);
            printf("Jogadores 2 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais2);

            printf("Jogadores 1 Digite o Número de Pontos Turísticos:\n");
            scanf("%d", &Turi1);
            printf("Jogadores 2 Digite o Número de Pontos Turísticos:\n");
            scanf("%d", &Turi2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Primeira Categoria Escolhida: Densidade demográfica - \n");

            printf("Jogadores 1 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais1);
            printf("Jogadores 2 Digite o nome do Pais Escolhido:\n");
            scanf("%s", &pais2);

            printf("Jogadores 1 Digite a Densidade demográfica:\n");
            scanf("%f", &Dens1);
            printf("Jogadores 2 Digite a Densidade demográfica:\n");
            scanf("%f", &Dens2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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

    printf ("1. População\n");
    printf ("2. Àrea\n");
    printf ("3. PIB\n");
    printf ("4. Número de Pontos Turísticos\n");
    printf ("5. Densidade demográfica\n");
    printf ("Escolha a segunda:\n");
    scanf ("%d", &segundaescolha);

    switch (segundaescolha) {
        case 1:
            printf("Segunda Categoria Escolhida: População - \n");

            printf("Jogadores 1 Digite o Número de Habitantes:\n");
            scanf("%d", &populacao1);
            printf("Jogadores 2 Digite o Número de Habitantes:\n");
            scanf("%d", &populacao2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Segunda Categoria Escolhida: Área - \n");

            printf("Jogadores 1 Digite a Área km²:\n");
            scanf("%f", &area1);
            printf("Jogadores 2 Digite a Área km²:\n");
            scanf("%f", &area2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
            printf("Jogador 1: %.2f km²\n", area1);
            printf("Jogador 2: %.2f km²\n", area2);

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
            printf("Segunda Categoria Escolhida: PIB - \n");

            printf("Jogadores 1 Digite o PIB:\n");
            scanf("%f", &PIB1);
            printf("Jogadores 2 Digite o PIB:\n");
            scanf("%f", &PIB2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Segunda Categoria Escolhida: Número de Pontos Turísticos - \n");

            printf("Jogadores 1 Digite o Número de Pontos Turísticos:\n");
            scanf("%d", &Turi1);
            printf("Jogadores 2 Digite o Número de Pontos Turísticos:\n");
            scanf("%d", &Turi2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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
            printf("Segunda Categoria Escolhida: Densidade demográfica - \n");

            printf("Jogadores 1 Digite a Densidade demográfica:\n");
            scanf("%f", &Dens1);
            printf("Jogadores 2 Digite a Densidade demográfica:\n");
            scanf("%f", &Dens2);

            printf("Pais 1: %s\n", pais1);
            printf("Pais 2: %s\n", pais2);
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