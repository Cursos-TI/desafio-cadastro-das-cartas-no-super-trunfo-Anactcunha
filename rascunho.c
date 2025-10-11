#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolha1, escolha2;
    int cartaComputador;
    long somaJogador = 0;
    long somaComputador = 0;

    // Dados das cartas
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;
    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;
    int numerodepontosturisticos1 = 25;
    int numerodepontosturisticos2 = 103;

    srand(time(0));
    cartaComputador = rand() % 2; // 0 ou 1

    printf("Bem-vindo ao jogo Super Trunfo nivel Mestre!\n");
    printf("Escolha DOIS atributos para comparacao.\n");

    // Lógica para mostrar qual carta é de quem
    if (cartaComputador == 0) {
        printf("Sua carta: %d | Carta do computador: %d\n", numerodacarta2, numerodacarta1);
    } else {
        printf("Sua carta: %d | Carta do computador: %d\n", numerodacarta1, numerodacarta2);
    }

    printf("Primeira escolha de atributo:\n");
    printf("1. Numero da carta\n");
    printf("2. Populacao\n");
    printf("3. Numero de pontos turisticos\n");
    scanf("%d", &escolha1);

    printf("Segunda escolha de atributo:\n");
    if (escolha1 == 1) {
        printf("2. Populacao\n");
        printf("3. Numero de pontos turisticos\n");
    } else if (escolha1 == 2) {
        printf("1. Numero da carta\n");
        printf("3. Numero de pontos turisticos\n");
    } else if (escolha1 == 3) {
        printf("1. Numero da carta\n");
        printf("2. Populacao\n");
    }
    scanf("%d", &escolha2);

    // Soma dos atributos (primeira escolha)
    if (escolha1 == 1) {
        somaJogador += (cartaComputador == 0) ? numerodacarta2 : numerodacarta1;
        somaComputador += (cartaComputador == 0) ? numerodacarta1 : numerodacarta2;
    } else if (escolha1 == 2) {
        somaJogador += (cartaComputador == 0) ? populacao2 : populacao1;
        somaComputador += (cartaComputador == 0) ? populacao1 : populacao2;
    } else if (escolha1 == 3) {
        somaJogador += (cartaComputador == 0) ? numerodepontosturisticos2 : numerodepontosturisticos1;
        somaComputador += (cartaComputador == 0) ? numerodepontosturisticos1 : numerodepontosturisticos2;
    }

    // Soma dos atributos (segunda escolha)
    if (escolha2 == 1) {
        somaJogador += (cartaComputador == 0) ? numerodacarta2 : numerodacarta1;
        somaComputador += (cartaComputador == 0) ? numerodacarta1 : numerodacarta2;
    } else if (escolha2 == 2) {
        somaJogador += (cartaComputador == 0) ? populacao2 : populacao1;
        somaComputador += (cartaComputador == 0) ? populacao1 : populacao2;
    } else if (escolha2 == 3) {
        somaJogador += (cartaComputador == 0) ? numerodepontosturisticos2 : numerodepontosturisticos1;
        somaComputador += (cartaComputador == 0) ? numerodepontosturisticos1 : numerodepontosturisticos2;
    }

    // Resultado final
    printf("\n--- Resultados ---\n");
    printf("Soma da sua carta: %ld\n", somaJogador);
    printf("Soma da carta do computador: %ld\n", somaComputador);

    if (somaJogador > somaComputador) {
        printf("Parabéns, você venceu!\n");
    } else if (somaComputador > somaJogador) {
        printf("Infelizmente, você perdeu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}


printf("3. numero de pontos turisticos\n");
        printf("%d\n", numerodepontosturisticos1);
        printf("numero da carta do computador:\n","%d\n", numerodepontosturisticos2);
