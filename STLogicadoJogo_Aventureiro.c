#include <stdio.h>



int main(){

// variáveis carta 1 (as mesmas variáveis foram usadas no nível iniciante e intermediário.) 
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
/* A criação do menu interativo o uso so switch foi a proposta da atividade com o objetivo de apresentar os atributos de carta que cada jogador tem para que seja feita a comparação*/
                        
                        printf("Menu de opções:\n");
                        // itens para escolha dos jogadores
                        printf("1. Ver regras do jogo\n"); 
                        printf("2. Apresentar o número da carta:\n");
                        printf("3. Apresentar nome da cidade e estado\n");
                        printf("4. Apresentar a população\n");
                        printf("5. Apresentar a área\n");
                        printf("6. Apresentar o Pib\n");
                        printf("7. Apresentar o número de pontos turisticos\n");
                        printf("8. Apresentar o Pib per capita\n");
                        printf("9. Apresentar a densidade populacional\n");
                        printf("10. Sair do jogo.\n");
                        printf("ESCOLHA UMA OPÇÃO:\n"); // aqui será inserido o número da opção escolhida
                        scanf("%d", &opcao); // irá apresentar o número da opção escolhida
        switch (opcao)
        {
            case 1:
        /* quando o jogador escolhe a opção 1, aparecerá a mensagem que representa a escolha (neste caso ver as regras e terá como resposta automática a apresentação resumida do jogo)*/
            printf("Ver as regras do jogo\n");
            printf("Sempre que uma opção for escolhida, os atributos serão comparados entre as cartas dos dois jogadores, o jogador com o maior valor de atributo escolhido vence a rodada, exeto na densidade populacional, que vencerá quem tiver o menor valor.\n");
            //neste caso temos somente apresentação sem comparação de atributos.
            break;
         
            case 2:
            /* no case 2 teremos a apresentação da opção do jogador com a apresentação subsequente dos valores do atributo escolhido e o if - if else e else trarão a comparação e a condição, com a opção de qualquer uma das duas vencer e a opção do empate caso nenhuma das condicionantes de  > 1 ou > 2 aconteçam*/
            printf("Apresentar o número da carta\n");
            printf("Carta 1: %d\n",numerodacarta1);
            printf("Carta 2: %d\n", numerodacarta2);
            if (numerodacarta1 > numerodacarta2) {
                printf("A carta 1 venceu! (carta com maior número).\n");
            } else if (numerodacarta2 > numerodacarta1) {
                printf("A carta 2 venceu! (carta com maior número).\n");
            } else {
                printf("Empatou! As cartas tem o mesmo número.\n");
            }
            break;
            
            case 3:
            // temos somente apresentação sem comparação dos aatributos.
            printf("Apresentar nome da cidade e estado\n");
            printf("Carta 1: %s - %s\n", estado1, cidade1);
            printf("Carta 2: %s - %s\n", estado2, cidade2);
            break;

            case 4:
        
            printf("Apresentar a população\n");
            printf("Carta 1: %lu - %s\n", populacao1, cidade1); 
            printf("Carta 2: %lu - %s\n", populacao2, cidade2);
            printf("Comparando as populações:\n");
             if (populacao1 > populacao2) {
                printf("A Carta 1 venceu! (maior população).\n");
            } else if (populacao2 > populacao1) {
                printf("A Carta 2 venceu! (maior população).\n");
            } else {
                printf("Empatou! As cartas têm a mesma população.\n");
            }
            break; 
        
            case 5:

            printf("Apresentar a área\n");
            printf("%d - %s\n", area1, cidade1); 
            printf("%d - %s\n", area2, cidade2);
            printf("Comparando as áreas:\n");
            if (area1 > area2) {
                printf("A carta 1 venceu! (maior área).\n");
            } else if (area2 > area1) {
                printf("A carta 2 venceu! (maior área).\n");
            } else {
                printf("Empatou! As cartas tem áreas iguais.\n");
            }
            break; 
        
            case 6:
            printf("Apresentar o Pib\n");
            printf("%f - %s\n", pib1, cidade1); 
            printf("%f - %s\n", pib2, cidade2);
            printf("Comparando os Pibs:\n");
            if (pib1 > pib2) {
                printf("A carta 1 venceu! (maior Pib).\n");
            } else if (pib2 > pib1) {
                printf("A carta 2 venceu! (maior pib).\n");
            } else {
                printf("Empatou! As cartas tem Pibs iguais.\n");
            }
            break; 
            
            case 7:
            printf("Apresentar o número de pontos turísticos\n");
            printf("Cidade 1: %d - %s\n", numerodospontosturisticos1, cidade1); 
            printf("Cidade 2: %d - %s\n", numerodospontosturisticos2, cidade2);
            printf("Comparando o número de pontos turísticos:\n");
            if (numerodospontosturisticos1 > numerodospontosturisticos2) {
                printf("A carta 1 venceu! (maior número de pontos turísticos).\n");
            } else if (numerodospontosturisticos2 > numerodospontosturisticos1) {
                printf("A carta 2 venceu! (maior número de pontos turísticos).\n");
            } else {
                printf("Empatou! As cartas tem o mesmo número de pontos turísticos.\n");
            }
            break; 
        
            case 8:
            printf("Apresentar o Pib per capita\n");
            pib_per_capita1 = (pib1 / populacao1);
            printf("O Pib per capita é: %.2f - %s\n", pib_per_capita1, cidade1);
            pib_per_capita2 = (pib2 / populacao2);
            printf("O Pib per capita é: %.2f - %s\n", pib_per_capita2, cidade2);
            printf("Comparando os Pibs per capita:\n");
            if (pib_per_capita1 > pib_per_capita2) {
                printf("A carta 1 venceu! (maior Pib per capita).\n");
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("A carta 2 venceu! (maior pib per capita).\n");
            } else {
                printf("Empatou! As cartas tem Pibs per capita iguais.\n");
            }
            break; 
        
            case 9: //apresentação e comparação com a condição de vencer o menor valor 
            printf("Apresentar a densidade populacional\n");
            densidade_populacional1 = (populacao1 / area1);
            printf("A densidade populacional é: %f - %s\n", densidade_populacional1, cidade1);
            densidade_populacional2 = (populacao2 / area2);
            printf("A densidade populacional é: %f - %s\n", densidade_populacional2, cidade2);
            printf("Comaparando as densidades populacionais:\n");
            if (densidade_populacional1 < densidade_populacional2) {
                printf("A carta 1 venceu! (menor densidade populacional).\n");
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("A carta 2 venceu! (menor densidade populacional).\n"); 
            } else {
                printf("Empatou! As cartas tem densidade populacionais iguais.\n");
            }
            break; 

            case 10: //opção de sair do jogo.
            printf("Saindo do Jogo...\n");
            break;

            default: // caso o jogoador insira uma opção que não tenha sido listada no menu.
            printf("Opção inválida. Tente novamente.\n");
            break;

        }
            return 0;            

}
               
                        
       
            
        
        