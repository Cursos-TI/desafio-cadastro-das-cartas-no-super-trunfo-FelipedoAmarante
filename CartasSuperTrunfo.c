#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Nivel Novato Super Trunfo em C: fundamentos e técnicas avançadas\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char Estado;
    char CodigodeCarta[3];
    char Cidade[50];
    int Populacao;
    float Areakm;
    float PIB;
    int NumeroPontosTuristicos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite seu Estado: \n");
    scanf("%c", &Estado);

    printf("Digite seu Código de Carta: \n");
    scanf("%s", &CodigodeCarta);

    printf("Digite sua Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a Quantidade de Habitantes: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area de km² da Cidade: \n");
    scanf("%f", &Areakm);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turisticos Cidade: \n");
    scanf("%d", &NumeroPontosTuristicos);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", CodigodeCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Area: %f km²\n", Areakm);
    printf("PIB: %f bilhões de reais\n", PIB);
    printf("Número de Pontos Turisticos: %d", NumeroPontosTuristicos);

    return 0;
}
