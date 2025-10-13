#include <stdio.h>
#include <stdlib.h>


int main() {
    int escolha1, escolha2;
    long long soma1 = 0; // Usando long long para garantir que a soma não estoure
    long long soma2 = 0;
    
// Dados das cartas (usando variaveis individuais para a comparação)
    int numerodacarta1 = 57;
    int numerodacarta2 = 37;

    unsigned long populacao1 = 18307950;
    unsigned long populacao2 = 256420400;

    int numerodepontosturisticos1 = 25;
    int numerodepontosturisticos2 = 103;

    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Você escolherá 2 atributos para somar os valores e depois comparar as somas.\n");
    
    // Primeira escolha
    printf("\n--- Primeira Escolha ---\n");
    printf("Opções para escolha:\n");
    printf("1. Numero da carta:\n");
    printf("2. Populacao:\n");
    printf("3. Numero de pontos turisticos:\n");
    printf("Digite sua primeira escolha: ");
    scanf("%d", &escolha1);
    
    switch (escolha1) {
        case 1:
            printf("\nOpcao escolhida: Numero da carta\n");
            soma1 = (long long)numerodacarta1 + numerodacarta2;
            printf("A soma dos numeros das cartas eh: %lld\n", soma1);
            break;
            
        case 2:
            printf("\nOpcao escolhida: Populacao\n");
            soma1 = (long long)populacao1 + populacao2;
            printf("A soma das populacoes eh: %lld\n", soma1);
            break;
            
        case 3:
            printf("\nOpcao escolhida: Numero de pontos turisticos\n");
            soma1 = (long long)numerodepontosturisticos1 + numerodepontosturisticos2;
            printf("A soma dos pontos turisticos eh: %lld\n", soma1);
            break;
            
        default:
            printf("\nOpcao invalida. A primeira soma sera 0.\n");
            break;
    }
    
    // Segunda escolha
    printf("\n--- Segunda Escolha ---\n");
    printf("Opções para escolha:\n");
    printf("1. Numero da carta:\n");
    printf("2. Populacao:\n");
    printf("3. Numero de pontos turisticos:\n");
    printf("Digite sua segunda escolha: ");
    scanf("%d", &escolha2);
    
    switch (escolha2) {
        case 1:
            printf("\nOpcao escolhida: Numero da carta\n");
            soma2 = (long long)numerodacarta1 + numerodacarta2;
            printf("A soma dos numeros das cartas eh: %lld\n", soma2);
            break;
            
        case 2:
            printf("\nOpcao escolhida: Populacao\n");
            soma2 = (long long)populacao1 + populacao2;
            printf("A soma das populacoes eh: %lld\n", soma2);
            break;
            
        case 3:
            printf("\nOpcao escolhida: Numero de pontos turisticos\n");
            soma2 = (long long)numerodepontosturisticos1 + numerodepontosturisticos2;
            printf("A soma dos pontos turisticos eh: %lld\n", soma2);
            break;
            
        default:
            printf("\nOpcao invalida. A segunda soma sera 0.\n");
            break;
    }

    // Comparação das somas
    printf("\n--- Resultado Final ---\n");
    if (soma1 > soma2) {
        printf("A soma da primeira escolha (%lld) eh maior que a soma da segunda escolha (%lld)!\n", soma1, soma2);
    } else if (soma2 > soma1) {
        printf("A soma da segunda escolha (%lld) eh maior que a soma da primeira escolha (%lld)!\n", soma2, soma1);
    } else {
        printf("As somas sao iguais (%lld)!\n", soma1);
    }
    
    return 0;
}