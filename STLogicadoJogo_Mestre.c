#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int escolha, resultado;
    
// Dados das cartas (usando variaveis individuais para a comparação)
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;

    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;

    int numerodepontosturisticos1 = 25;
    int numerodepontosturisticos2 = 103;

    // variáveis carta 1 e 2 (as mesmas variáveis foram usadas no nível iniciante e intermediário.).

// realização do desafio em "desenvolvendo a lógica do jogo nível mestre"
                        printf("MENU INTERATIVO\n");
/* Criação do menu interativo com a escolha de duas opções, o uso so switch foi a proposta da atividade com o objetivo de apresentar os atributos de carta que cada jogador tem para que seja feita a comparação*/
                        
//inicio do jogo
        printf("Bem-vindo ao jogo Super Trunfo nível Mestre!\n");

                        
        
        // itens para escolha dos jogadores
        
        printf("Escolha um atributo para comparação.\n");
                        
        //neste caso temos a apresentação com comparação de atributos.
         
        printf("1. Numero da carta:\n");
        printf("2. Populacao:\n");
        printf("3. Numero de pontos turisticos:\n");
        printf("Escolha a primeira opção:\n");
        scanf("%d", &escolha1);  // irá apresentar o número da opção escolhida
        printf("Escolha a segunda opção:\n"); // idem primeira opção
        scanf("%d", &escolha2); // idem primeira opção
        
    

        if (escolha1 == 1) {
        printf("1. numero da carta:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        printf("3. Numero de pontos turísticos\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodepontosturisticos1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodepontosturisticos2);
        
        } else if (escolha1 == 2) {
        printf("2. População: ");
        printf("Você escolheu a carta 1! O número dela é: ""%lu\n", populacao1);
        printf("O computador escolheu a carta 2! O número dela é: " "%lu\n", populacao2);
        printf("3. Numero de pontos turísticos\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodepontosturisticos1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodepontosturisticos2);
        
        } else if (escolha1 == 3) {
        printf("1. numero da carta\n");
        printf("Você escolheu a carta 1! O número dela é: " "%d\n", numerodacarta1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodacarta2);
        printf("2. população\n");
        printf("Você escolheu a carta 1! O número dela é: " "%lu\n", populacao1);
        printf("O computador escolheu a carta 2! O número dela é: " "%lu\n", populacao2);
        }

         if (escolha2 == 1) {
        printf("1. numero da carta:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        printf("3. Numero de pontos turísticos\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodepontosturisticos1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodepontosturisticos2);
        
        } else if (escolha2 == 2) {
        printf("2. População: ");
        printf("Você escolheu a carta 1! O número dela é: ""%lu\n", populacao1);
        printf("O computador escolheu a carta 2! O número dela é: " "%lu\n", populacao2);
        printf("3. Numero de pontos turísticos\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodepontosturisticos1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodepontosturisticos2);
        
        } else if (escolha2 == 3) {
        printf("1. numero da carta\n");
        printf("Você escolheu a carta 1! O número dela é: " "%d\n", numerodacarta1);
        printf("O computador escolheu a carta 2! O número dela é: " "%d\n", numerodacarta2);
        printf("2. população\n");
        printf("Você escolheu a carta 1! O número dela é: " "%lu\n", populacao1);
        printf("O computador escolheu a carta 2! O número dela é: " "%lu\n", populacao2);
        }

        switch (tipoComparacao)
            {
                  
            case 1:
            /* no case 2 teremos a apresentação da opção do jogador com a apresentação subsequente dos valores do atributo escolhido e o if - if else e else trarão a comparação e a condição, com a opção de qualquer uma das duas vencer e a opção do empate caso nenhuma das condicionantes de  > 1 ou > 2 aconteçam*/
            if (numerodacarta1 > numerodacarta2) {
                printf("Carta 1 venceu!\n");
            } else if (numerodacarta1 < numerodacarta2) {
                printf("Carta 2 venceu!\n");
            } else if (numerodacarta1 == numerodacarta2) {
                printf("As cartas empataram!\n");
            }

            printf("Você escolheu a opção maior!\n");
            resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
            break;
          
            case 2:
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu!\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 venceu!\n");
            } else if (populacao1 == populacao2) {
                printf("As cartas empataram!\n");
            }
            printf("Você escolheu a opção maior!\n");
            resultado = populacao1 > populacao2 ? 1 : 0;
            break;
            
            case 3:
            if (numerodepontosturisticos1 > numerodepontosturisticos2) {
                printf("Carta 1 venceu!\n");
            } else if (numerodepontosturisticos1 < numerodepontosturisticos2) {
                printf("Carta 2 venceu!\n");
            } else  if (numerodepontosturisticos1 == numerodepontosturisticos2) {
                printf("As cartas empataram!\n");
            }
        
            printf("Você escolheu a opção maior!\n");
            resultado = numerodepontosturisticos1 > numerodepontosturisticos2 ? 1 : 0;
            break;
            
            default: // caso o jogoador insira uma opção que não tenha sido listada no menu.
            printf("Opção inválida. Tente novamente.\n");
            break;
             }
            

            if (resultado == 1)
            {
            printf("Parabéns, você venceu!\n");
            } else {
            printf("Infelizmente, você perdeu!\n");
            }
            return 0;
         }