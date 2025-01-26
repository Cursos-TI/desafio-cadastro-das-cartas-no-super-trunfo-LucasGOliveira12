#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    printf("Desafio Super Trunfo!\n");
    printf("Novo commit\n")
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int cidade;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontost;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da Cidade: \n");
    scanf("%d", &cidade);
    printf("Nome da Cidade: \n");
    scanf("%s", &nome);
    printf("População da Cidade: \n");
    scanf("%d", &populacao);
    printf("Área da Cidade: \n");
    scanf("%f", &area);
    printf("PIB da Cidade: \n");
    scanf("%f", &pib);
    printf("Número de pontos turísticos da Cidade: \n");
    scanf("%d", &pontost);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da Cidade: %d\n", cidade);
    printf("Nome: %s\n", nome);
    printf("Populção: %d Milhões\n", populacao);
    printf("Área: %f Km²\n", area);
    printf("PIB: R$ %f\n", pib);
    printf("Pontos Túristicos: %d Locais\n", pontost);


    return 0;
}
