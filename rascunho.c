#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha, resultado;
    
    // Dados das cartas
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;

    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;

    int numerodepontosturisticos1 = 25;
    int numerodepontosturisticos2 = 103;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Escolha 2 atributos para comparar.\n");
    
    // --- Primeira Escolha ---
    printf("\n--- Primeira Escolha ---\n");
    printf("1. Numero da carta\n");
    printf("2. Populacao\n");
    printf("3. Numero de pontos turisticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            printf("\nOpcao escolhida: Numero da carta\n");
            printf("Carta 1 (Seu valor): %d\n", numerodacarta1);
            printf("Carta 2 (Valor do outro jogador): %d\n", numerodacarta2);
            resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
            if (numerodacarta1 == numerodacarta2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada!\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        case 2:
            printf("\nOpcao escolhida: Populacao\n");
            printf("Carta 1 (Seu valor): %lu\n", populacao1);
            printf("Carta 2 (Valor do outro jogador): %lu\n", populacao2);
            // Lógica de populacao (menor valor vence)
            resultado = populacao1 < populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada! (Menor populacao vence)\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        case 3:
            printf("\nOpcao escolhida: Numero de pontos turisticos\n");
            printf("Carta 1 (Seu valor): %d\n", numerodepontosturisticos1);
            printf("Carta 2 (Valor do outro jogador): %d\n", numerodepontosturisticos2);
            resultado = numerodepontosturisticos1 > numerodepontosturisticos2 ? 1 : 0;
            if (numerodepontosturisticos1 == numerodepontosturisticos2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada!\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        default:
            printf("\nOpcao invalida.\n");
            break;
    }
    
    // --- Segunda Escolha ---
    printf("\n--- Segunda Escolha ---\n");
    printf("1. Numero da carta\n");
    printf("2. Populacao\n");
    printf("3. Numero de pontos turisticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            printf("\nOpcao escolhida: Numero da carta\n");
            printf("Carta 1 (Seu valor): %d\n", numerodacarta1);
            printf("Carta 2 (Valor do outro jogador): %d\n", numerodacarta2);
            resultado = numerodacarta1 > numerodacarta2 ? 1 : 0;
            if (numerodacarta1 == numerodacarta2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada!\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        case 2:
            printf("\nOpcao escolhida: Populacao\n");
            printf("Carta 1 (Seu valor): %lu\n", populacao1);
            printf("Carta 2 (Valor do outro jogador): %lu\n", populacao2);
            // Lógica de populacao (menor valor vence)
            resultado = populacao1 < populacao2 ? 1 : 0;
            if (populacao1 == populacao2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada! (Menor populacao vence)\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        case 3:
            printf("\nOpcao escolhida: Numero de pontos turisticos\n");
            printf("Carta 1 (Seu valor): %d\n", numerodepontosturisticos1);
            printf("Carta 2 (Valor do outro jogador): %d\n", numerodepontosturisticos2);
            resultado = numerodepontosturisticos1 > numerodepontosturisticos2 ? 1 : 0;
            if (numerodepontosturisticos1 == numerodepontosturisticos2) {
                printf("As cartas empataram!\n");
            } else if (resultado == 1) {
                printf("Carta 1 venceu a rodada!\n");
            } else {
                printf("Carta 2 venceu a rodada!\n");
            }
            break;
            
        default:
            printf("\nOpcao invalida.\n");
            break;
    }
    
    return 0;
}
//printf("Escolha a segunda opção:\n"); // idem primeira opção
        //scanf("%d", &escolha2); // idem primeira opção
/*printf("****Regras do jogo****\n");   
        printf("Sempre que uma opção for escolhida, os atributos serão comparados entre as cartas dos dois jogadores, o jogador com o maior valor de atributo escolhido vence a rodada, exeto na densidade populacional, que vencerá quem tiver o menor valor.\n");*/