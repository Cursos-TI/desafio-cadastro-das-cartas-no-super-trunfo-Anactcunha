#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha1, escolha2;
    int indiceCartaComputador;

// Dados das cartas (usando variaveis individuais para a comparação)
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;

    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;

    int pontosTuristicos1 = 25;
    int pontosTuristicos2 = 103;

    // variáveis carta 1 e 2 (as mesmas variáveis foram usadas no nível iniciante e intermediário.) 

//gerar número aleatório pois a comparação será entre carta escolhida pelo jogador e carta do computador
    srand(time(0));
    numeroComputador = rand() %5 +1; //número entre 1 e 5

    


// realização do desafio em desenvolvendo a lógica do jogo nível mestre
                        printf("MENU INTERATIVO\n");
/* Criação do menu interativo com a escolha de duas opções, o uso so switch foi a proposta da atividade com o objetivo de apresentar os atributos de carta que cada jogador tem para que seja feita a comparação*/
                        
//inicio do jogo
                        printf("Bem-vindo ao jogo Super Trunfo nível Mestre!\n");
                        // itens para escolha dos jogadores
                        printf("Você deve escolher um número e o tipo de comparação.\n");
                        printf("1. Número da carta:\n");
                        printf("2. População\n");
                        printf("3. Número de pontos turisticos\n");
                        printf("4. Sair do Jogo\n");
                        printf("Regras do jogo\n");
                        printf("Sempre que uma opção for escolhida, os atributos serão comparados entre as cartas dos dois jogadores, o jogador com o maior valor de atributo escolhido vence a rodada, exeto na densidade populacional, que vencerá quem tiver o menor valor.\n");
            //neste caso temos a apresentação com comparação de atributos.
                        printf("ESCOLHA A PRIMEIRA OPÇÃO:\n"); // aqui será inserido o número da opção escolhida
                        scanf("%d", &numeroJogador);
                        scanf("%d", &numeroComputador); // irá apresentar o número da opção escolhida
                        printf("ESCOLHA A SEGUNDA OPÇÃO:\n"); // idem primeira opção
                        scanf("%d", &numeroJogador);
                        scanf("%d", &numeroComputador); // idem primeira opção
                        
                        
            switch (tipoComparacao)
            {
                  
            case 1:
            /* no case 2 teremos a apresentação da opção do jogador com a apresentação subsequente dos valores do atributo escolhido e o if - if else e else trarão a comparação e a condição, com a opção de qualquer uma das duas vencer e a opção do empate caso nenhuma das condicionantes de  > 1 ou > 2 aconteçam*/
            printf("Você escolheu a opção maior!\n");
            resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
            break;
          
            case 2:
            printf("Você escolheu a opção maior!\n");
            resultado = populacao1 > populacao2 ? 1 : 0;
            break;
            
            case 3:
        
            printf("Você escolheu a opção maior!\n");
            resultado = numerodospontoturisticos1 > numerodospontosturisticos2 ? 1 : 0;
            break;
            
            case 4:
            printf("Você escolheu a opção maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;

            case 5: //opção de sair do jogo.
            printf("Saindo do Jogo...\n");
            break;

            default: // caso o jogoador insira uma opção que não tenha sido listada no menu.
            printf("Opção inválida. Tente novamente.\n");
            break;
             }
            printf("O número do computador é: %d e o numero do jogador é: %d\n", numeroComputador, numeroJogador);

            if (resultado == 1)
            {
            printf("Parabéns, você venceu!\n");
            } else {
            printf("Infelizmente, você perdeu!\n");
            }
            return 0;
            }    
        