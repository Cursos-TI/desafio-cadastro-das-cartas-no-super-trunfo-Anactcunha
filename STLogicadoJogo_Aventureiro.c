#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

// variáveis carta 1
        int numerodacarta1 = 57, area1 = 432, numerodospontosturisticos1 = 25, opcao;
            float pib1 = 230060000.000, densidade_populacional1, pib_per_capita1;
                unsigned long int populacao1 = 18307950;
                    char estado1[50] = ("Paraná"), cidade1[50] = ("Londrina");
                        pib_per_capita1 = (pib1 / populacao1);
                            densidade_populacional1 = (populacao1 / area1);

// variáveis carta 2
        int numerodacarta2 = 37, area2 = 693, numerodospontosturisticos2 = 103;
            float pib2 = 629540000.000, densidade_populacional2, pib_per_capita2;
                unsigned long int populacao2 = 256420400;
                    char estado2[50] = ("Bahia"), cidade2[50] = ("Salvador");
                        pib_per_capita2 = (pib2 / populacao2);
                            densidade_populacional2 = (populacao2 / area2);

// realização do desafio em desenvolvendo a lógica do jogo nível aventureiro
                        printf("MENU INTERATIVO\n");
// o menu interativo tem o objetivo de apresentar os atributos a carta de cada jogador tem para que seja feita a comparação
                        printf("Menu de opções:\n");
                        printf("1. Cadastrar nova carta?\n");
                        printf("2. Ver regras do jogo:\n"); 
                        printf("3. Apresentar o número da carta:\n");
                        printf("4. Apresentar o nome do Estado e da Cidade:\n");
                        printf("5. Apresentar a população:\n");
                        printf("6. Apresentar a área:\n");
                        printf("7. Apresentar o Pib:\n");
                        printf("8. Apresentar o número de pontos turisticos:\n");
                        printf("9. Apresentar o Pib per capita:\n");
                        printf("10. Apresentar a densidade populacional:\n");
                        printf("Escolha uma opção;\n");
                        scanf("%d",&opcao);
 

       

                return 0;
                }
