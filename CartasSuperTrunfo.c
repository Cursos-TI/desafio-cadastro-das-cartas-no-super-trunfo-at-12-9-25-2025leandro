#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha

#include  <stdio.h>

int main(){

// Declaração das variáveis para a Carta 1
    
char Estado1[8]; 
char código1[4]; 
char nomeCidade1[7];
int populaçâo1; pontosTurísticos1;
float área1; pib1;
    
// Declaração das variáveis para a Carta 2
   
char Estado2[6];  
char código2[4]; 
char nomeCidade2[9];
int populção2; pontosTurísticos2;
float área2; pib2;


// Entrada de dados para a Carta 1
   
printf("Digite o Estado1: ");
printf("Digite o código1: ");
printf("Digite o nome da cidade1: ");
printf("Digite a população1: ");
printf("Digite o pontosTurísticos1: ");
printf("Digite a área1: ");
printf("Digite o pib1: ");

// Entrada de dados para a Carta 2
   
printf("Digite o Estado2: ");
printf("Digite o código2: ");
printf("Digite o nome da cidade2: ");
printf("Digite a população2: ");
printf("Digite o pontosTurísticos2: ");
printf("Digite a área2: ");
printf("Digite o pib2: ");

// Exibição dos dados da Carta 1
  
scanf ("%s", Estado1);
scanf("%s", &código1);
scanf("%s", &nomeCidade1) 
scanf("%d", &população1);
scanf("%d", &pontosTurísticos1);
scanf("%f", &área1);
scanf("%f", &pib1);

// Exibição dos dados da Carta 2
    
scanf("%s", Estado2);
scanf("%s", &código2);
scanf("%s", &nomeCidade2);
scanf("%d", &população2);
scanf("%d", &pontosTurísticos2);
scanf("%f", &área2);
scanf("%f", &pib2);

 return 0;

}
