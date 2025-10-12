#include <stdio.h>
#include <stdlib.h>


int main() {

    int escolha1, escolha2, resultado;
    
// Dados das cartas (usando variaveis individuais para a comparação), as mesmas variáveis foram usadas no nível iniciante e intermediário.
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;

    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;

    int numerodepontosturisticos1 = 25;
    int numerodepontosturisticos2 = 103;

    

// realização do desafio em "desenvolvendo a lógica do jogo nível mestre"
                         printf("MENU INTERATIVO\n");
/* Criação do menu interativo com a escolha de duas opções, o uso so switch foi a proposta da atividade com o objetivo de apresentar os atributos de carta que cada jogador tem para que seja feita a comparação*/
                        
//inicio do jogo
        printf("Bem-vindo ao jogo Super Trunfo nível Mestre!\n");

                        
        
        // itens para escolha dos jogadores
        
        printf("Você escolherá 2 atributos para comparação.\n");
                        
        //neste caso temos a apresentação com comparação de atributos.
        printf("Opções para escolha:\n"); 
        printf("1. Numero da carta:\n");
        printf("2. Populacao:\n");
        printf("3. Numero de pontos turisticos:\n");
        printf("Digite sua primeira escolha:\n");
        scanf("%d", &escolha1);
        printf("Digite sua segunda escolha:\n");
        scanf("%d", &escolha2);  // Agora usa uma variável diferente para a segunda escolha
        //optei por separar as escolhas pra que o código rode em blocos (1 e 2 escolha)
        
        switch (escolha1) { // Usa a primeira escolha para o primeiro bloco
    
        case 1: //organizando os cases para que não fiquem repetidos e confusos, sempre após o resultado da escolha do jogador será apresentado a "escolha do computador".
        
        printf("1. numero da carta:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
        if (numerodacarta1 == numerodacarta2) {
            printf("As cartas empataram!\n");
        } else if (resultado == 1) {
            printf("A carta 1 é o numero maior e venceu a rodada!\n");
        } else {
            printf("A carta 2 é o numero maior e venceu a rodada!\n");
        }
        break;

        case 2:
        printf("2. população:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%lu\n", populacao1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%lu\n", populacao2);
        resultado = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 é o numero maior e venceu a rodada!\n");
            } else {
                printf("Carta 2 é o numero maior e venceu a rodada!\n");
            }
            break;
        case 3:

        printf("3. numero de pontos turísticos:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        resultado = numerodepontosturisticos1 > numerodepontosturisticos2 ? 1 : 0;
            if (numerodepontosturisticos1 == numerodepontosturisticos2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 é o numero maior e venceu a rodada!\n");
            } else {
                printf("Carta 2 é o numero maior e venceu a rodada!\n");
            }
            break;

            default: // caso o jogoador insira uma opção que não tenha sido listada no menu.
            printf("Opção inválida. Tente novamente.\n");
            break;
        }

// aqui começa o segundo bloco com a escolha, apresentação e comparação das opções
        
        switch (escolha2) { // Usa a segunda escolha para o segundo bloco
    
        case 1: 
        
        printf("\n1. numero da carta:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
        if (numerodacarta1 == numerodacarta2) {
            printf("As cartas empataram!\n");
        } else if (resultado == 1) {
            printf("A carta 1 é o numero maior e venceu a rodada!\n");
        } else {
            printf("A carta 2 é o numero maior e venceu a rodada!\n");
        }
        break;

        case 2:
        printf("\n2. população:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%lu\n", populacao1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%lu\n", populacao2);
        resultado = populacao1 > populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 é o numero maior e venceu a rodada!\n");
            } else {
                printf("Carta 2 é o numero maior e venceu a rodada!\n");
            }
            break;

        case 3:

        printf("\n3. numero de pontos turísticos:\n");
        printf("Você escolheu a carta 1! O número dela é: ""%d\n", numerodacarta1); 
        printf("O computador escolheu a carta 2! O número dela é: ""%d\n", numerodacarta2);
        resultado = numerodepontosturisticos1 > numerodepontosturisticos2 ? 1 : 0;
            if (numerodepontosturisticos1 == numerodepontosturisticos2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 é o numero maior e venceu a rodada!\n");
            } else {
                printf("Carta 2 é o numero maior e venceu a rodada!\n");
            }
            break;

            default: 
            printf("Opção inválida. Tente novamente.\n");
            break;    
        }
    
    return 0;
}