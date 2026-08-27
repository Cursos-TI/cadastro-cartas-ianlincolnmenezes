#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado, nome_cidade[21], codigo_carta[4];
int populacao, n_pontos_turisticos;
float area, pib;

char estado2, nome_cidade2[21], codigo_carta2[4];
int populacao2, n_pontos_turisticos2;
float area2, pib2;
  // Área para entrada de dados CARTA 1
printf("Insira os dados para a Carta 1: \n");

printf("Estado da carta: \n");
scanf("%c", &estado);

printf("Código para a carta: \n");
scanf("%s", codigo_carta);

getchar(); // Limpar o buffer do teclado antes de ler a string

printf("Nome da da cidade: \n");
fgets(nome_cidade, 21, stdin); // Usando fgets para ler o nome da cidade
nome_cidade[strcspn(nome_cidade, "\n")] = 0;

printf("População da cidade: \n");
scanf("%d", &populacao);

printf("Área da cidade: \n");
scanf("%f", &area);

printf("PIB da cidade: \n");
scanf("%f", &pib);

printf("Número de pontos turísticos: \n");
scanf("%d", &n_pontos_turisticos);

getchar(); // Limpar o buffer do teclado antes de ler a próxima carta

// Área para entrada de dados CARTA 2
printf("Insira os dados para a Carta 2: \n");

printf("Estado da carta: \n");
scanf("%c", &estado2);

printf("Código para a carta: \n");
scanf("%s", codigo_carta2);

getchar(); // Limpar o buffer do teclado antes de ler a string

printf("Nome da da cidade: \n");
fgets(nome_cidade2, 21, stdin); // Usando fgets para ler o nome da cidade
nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;

printf("População da cidade: \n");
scanf("%d", &populacao2);

printf("Área da cidade: \n");
scanf("%f", &area2);

printf("PIB da cidade: \n");
scanf("%f", &pib2);

printf("Número de pontos turísticos: \n");
scanf("%d", &n_pontos_turisticos2);

  // Área para exibição dos dados da cidade
printf("\nCarta 1: \n\n");
printf("Estado: %c \n\n", estado);
printf("Código da carta: %c%s \n\n", estado, codigo_carta);
printf("Nome da cidade: %s \n\n", nome_cidade);
printf("População: %d \n\n", populacao);
printf("Área: %.2f km² \n\n", area);
printf("PIB: %.2f bilhões de reais \n\n", pib);
printf("Número de pontos turísticos: %d \n\n", n_pontos_turisticos);

printf("\nCarta 2: \n\n");
printf("Estado: %c \n\n", estado2);
printf("Código da carta: %c%s \n\n", estado2, codigo_carta2);
printf("Nome da cidade: %s \n\n", nome_cidade2);
printf("População: %d \n\n", populacao2);
printf("Área: %.2f km² \n\n", area2);
printf("PIB: %.2f bilhões de reais \n\n", pib2);
printf("Número de pontos turísticos: %d \n\n", n_pontos_turisticos2);


return 0;
} 
