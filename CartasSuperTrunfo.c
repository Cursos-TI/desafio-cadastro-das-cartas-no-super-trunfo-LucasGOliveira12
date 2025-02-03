#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Super Trunfo!\n");
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Nivel Novato
    char estado[50];
    char cidade [50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosT;

    //Nivel Aventureiro
    float densidadeP;
    float pibCapita;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Nivel Novato
    printf("Digite o código do Estado: \n");
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

    //Nivel Aventureiro
    densidadeP = populacao / area;
    pibCapita = pib / populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Nivel Novato
    printf("Código do Estado: %s\n", estado);
    printf("Código da Cidade: %s\n", cidade);
    printf("Nome: %s\n", nome);
    printf("Populção: %d\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP);
    printf("PIB: R$ %.2f\n", pib);
    printf("PIB per Capita: R$ %.2f\n", pibCapita);
    printf("Pontos Túristicos: %d Locais\n", pontosT);

    /* Nivel Aventureiro
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadeP);
    printf("PIB per Capita: R$ %.2f\n", pibCapita);
    */
    return 0;
}
