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
                        printf("1. Ver regras do jogo\n"); 
                        printf("2. Apresentar a população\n");
                        printf("3. Apresentar a área\n");
                        printf("4. Apresentar o Pib\n");
                        printf("5. Apresentar o número de pontos turisticos\n");
                        printf("6. Apresentar o Pib per capita\n");
                        printf("7. Apresentar a densidade populacional\n");
                        printf("8. Sair do jogo.\n");
                        printf("Escolha uma opção:\n");
                        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        
            printf("Ver as regras do jogo\n");
            printf("Sempre que uma opção for escolhida, os atributos serão comparados entre as cartas dos dois jogadores, o jogador com o maior valor de atributo escolhido vence a rodada.\n");
            break;
         
        case 2:
        
            printf("Apresentar a população\n");
            printf("%lu - %s\n", populacao1, cidade1); 
            printf("%lu - %s\n", populacao2, cidade2);
            break; 
        
        case 3:
            printf("Apresentar a área\n");
            printf("%d - %s\n", area1, cidade1); 
            printf("%d - %s\n", area2, cidade2);
            break; 
        
        case 4:
            printf("Apresentar o Pib\n");
            printf("%f - %s\n", pib1, cidade1); 
            printf("%f - %s\n", pib2, cidade2);
            break; 
            
        case 5:
            printf("Apresentar o número de pontos turísticos\n");
            printf("%d - %s\n", numerodospontosturisticos1, cidade1); 
            printf("%d - %s\n", numerodospontosturisticos2, cidade2);
            break; 
        
        case 6:
            printf("Apresentar o Pib per capita\n");
            pib_per_capita1 = (pib1 / populacao1);
            printf("O Pib per capita é: %.2f - %s\n", pib_per_capita1, cidade1);
            pib_per_capita2 = (pib2 / populacao2);
            printf("O Pib per capita é: %.2f - %s\n", pib_per_capita2, cidade2);
            break; 
        
        case 7:
            printf("Apresentar a densidade populacional\n");
            densidade_populacional1 = (populacao1 / area1);
            printf("A densidade populacional é: %f - %s\n", densidade_populacional1, cidade1);
            densidade_populacional2 = (populacao2 / area2);
            printf("A densidade populacional é: %f - %s\n", densidade_populacional2, cidade2);
            break; 

        case 8:
            printf("Saindo do Jogo...\n");
               

           
                }
               
                        
       
            
        
         return 0;
        }
