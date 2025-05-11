#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {

    printf("Desafio Super Trunfo!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Nivel Novato
    char estado[50], estado1[50];
    char cidade[50], cidade1[50];
    char nome[50], nome1[50];
    int populacao, populacao1;
    float area, area1;
    float pib, pib1;
    int pontosT, pontosT1;
    int opcao;

    // Nivel Aventureiro
    float densidadeP, densidadeP1;
    float pibCapita, pibCapita1;
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Nivel Novato
    printf("Digite a sigla do Estado: \n");
    scanf("%s", &estado);
    printf("Digite o código da Cidade: \n");
    scanf("%s", &cidade);
    printf("Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("População da Cidade: \n");
    scanf("%d", &populacao);
    printf("Área da Cidade: \n");
    scanf("%f", &area);
    printf("PIB da Cidade: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontosT);


    printf("Digite a sigla de outro Estado: \n");
    scanf("%s", &estado1);
    printf("Digite o código de outra Cidade: \n");
    scanf("%s", &cidade1);
    printf("Nome da Cidade: \n");
    scanf("%s", &nome1);
    printf("População da Cidade: \n");
    scanf("%d", &populacao1);
    printf("Área da Cidade: \n");
    scanf("%f", &area1);
    printf("PIB da Cidade: \n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontosT1);

    // Nivel Aventureiro
    densidadeP = populacao / area;
    pibCapita = pib / populacao;


    densidadeP1 = populacao1 / area1;
    pibCapita1 = pib1 / populacao1;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Nivel Novato
    printf("Código do Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", cidade);
    printf("Nome: %s\n", nome);
    printf("Populção: %d hab\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: R$ %.2f\n", pibCapita);
    printf("Pontos Túristicos: %d Locais\n\n", pontosT);


    printf("Código do Estado: %s\n", estado1);
    printf("Código da Cidade: %s\n", cidade1);
    printf("Nome: %s\n", nome1);
    printf("Populção: %d hab\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("PIB per Capita: R$ %.2f\n", pibCapita1);
    printf("Pontos Túristicos: %d Locais\n\n", pontosT1);

    // Nivel Aventureiro
    // printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP);
    // printf("PIB per Capita: R$ %.2f\n", pibCapita);
    

    printf("Vamos começar a comparação de atributos no Super Trunfo!!\n");
    printf("Escolha uma das opções a baixo para ser comparado: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    scanf("%d", &opcao);


    switch (opcao)
    {
    case 1:
        printf("Comparação das Cartas (Populção)\n");
        printf("Carta, %s%s - %s: %d hab\n", estado, cidade, nome, populacao);
        printf("Carta, %s%s - %s: %d hab\n", estado1, cidade1, nome1, populacao1);

    if(populacao == populacao1){
        
        printf("Empate");
    } else if (populacao > populacao1)
    {
        printf("Carta, %s%s Venceu!!\n", estado, cidade);
    } else
    {
        printf("Carta, %s%s Venceu!!\n", estado1, cidade1);
    }
        break;
    
    case 2:
        printf("Comparação das Cartas (Área)\n");
        printf("Carta, %s%s - %s: %.2f Km²\n", estado, cidade, nome, area);
        printf("Carta, %s%s - %s: %.2f Km²\n", estado1, cidade1, nome1, area1);

    if(area == area1){
        
        printf("Empate");
    } else if (area > area1)
    {
        printf("Carta, %s%s Venceu!!\n", estado, cidade);
    } else
    {
        printf("Carta, %s%s Venceu!!\n", estado1, cidade1);
    }
        break;

    case 3:
        printf("Comparação das Cartas (PIB)\n");
        printf("Carta, %s%s - %s: R$ %.2f\n", estado, cidade, nome, pib);
        printf("Carta, %s%s - %s: R$ %.2f\n", estado1, cidade1, nome1, pib1);

    if(pib == pib1){
        
        printf("Empate");
    } else if (pib > pib1)
    {
        printf("Carta, %s%s Venceu!!\n", estado, cidade);
    } else
    {
        printf("Carta, %s%s Venceu!!\n", estado1, cidade1);
    }
        break;

    case 4:
        printf("Comparação das Cartas (Pontos Túristicos)\n");
        printf("Carta, %s%s - %s: %d Locais\n", estado, cidade, nome, pontosT);
        printf("Carta, %s%s - %s: %d Locais\n", estado1, cidade1, nome1, pontosT1);

    if(pontosT == pontosT1){
        
        printf("Empate");
    } else if (pontosT > pontosT1)
    {
        printf("Carta, %s%s Venceu!!\n", estado, cidade);
    } else
    {
        printf("Carta, %s%s Venceu!!\n", estado1, cidade1);
    }
        break;

    case 5:
        printf("Comparação das Cartas (Densidade Populacional)\n");
        printf("Carta, %s%s - %s: %.2f hab/Km²\n", estado, cidade, nome, densidadeP);
        printf("Carta, %s%s - %s: %.2f hab/Km²\n", estado1, cidade1, nome1, densidadeP1);

    if(densidadeP == densidadeP1){
        
        printf("Empate");
    } else if (densidadeP < densidadeP1)
    {
        printf("Carta, %s%s Venceu!!\n", estado, cidade);
    } else
    {
        printf("Carta, %s%s Venceu!!\n", estado1, cidade1);
    }
        break;
    default:
        printf("Opção Inválida!\n");
        break;
    }

    return 0;
}
