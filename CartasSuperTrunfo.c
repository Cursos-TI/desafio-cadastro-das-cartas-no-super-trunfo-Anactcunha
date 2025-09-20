#include <stdio.h>

int main(){
       
    
 // variáveis carta 1
        int numerodacarta1, numerodospontosturisticos1;
             float area1, pib1, densidade_populacional1, pib_per_capita1, super_Poder1;
                unsigned long int populacao1; 
                    char estado1[50], cidade1[50];  
                        area1 = 432;
                            populacao1 = 1830795000;
                               numerodospontosturisticos1 = 25;
                                  pib1 = 230060000.000;
                                        pib_per_capita1 = (pib1 / populacao1);
                                                densidade_populacional1 = (populacao1 / area1);
// variáveis carta 2                                             
        int numerodacarta2, numerodospontosturisticos2;
                float area2, pib2, densidade_populacional2, pib_per_capita2, super_Poder2;
                    unsigned long int populacao2;
                        char estado2[50], cidade2[50]; 
                            area2 = 693;
                                populacao2 = 2564204000;
                                    numerodospontosturisticos2 = 103;
                                        pib2 = 629540000.000;
                                            pib_per_capita2 = (pib2 / populacao2);
                                                densidade_populacional2 = (populacao2 / area2);

                                            printf("Carta01 \n");

    printf("Digite o número da carta que pegou: \n");
    // o usuário vai digitar o numero da carta que pegou
    scanf("%d", &numerodacarta1);
        if (numerodacarta1 > numerodacarta2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }
        
    printf("Digite o nome do estado: \n");
    scanf ("%s", estado1);
    // o usuário digita o nome do estado que aparece na carta
    printf("Digite o nome da cidade: \n");
    scanf ("%s", cidade1);
    // o usuário digita o nome da cidade que aparece na carta

    printf("Digite a área da cidade em Km2: \n");
    // usuário digita numero da área da cidade 
    scanf ("%f", &area1);
    if (area1 > area2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }
    
    printf("Digite a população da cidade: \n");
    // usuário digita a população da cidade
    scanf("%lu", &populacao1);
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }
    printf("Digite o número de pontos turísticos: \n");
     // o usuário vai digitar o numero de pontos turísticos
    scanf("%d", &numerodospontosturisticos1);
   if (numerodospontosturisticos1 > numerodospontosturisticos2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }
    printf("Digite o pib da cidade: \n");
      // o usuário vai digitar o pib da cidade
    scanf("%f", &pib1);
   if (pib1 > pib2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }

    // cálculo pib per capita Carta 1
    pib_per_capita1 = (pib1 / populacao1);
    printf("O Pib per capita é: %.2f\n", pib_per_capita1);
    if (pib_per_capita1 > pib_per_capita2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }
    //cálculo densidade populacional Carta 1
    densidade_populacional1 = (populacao1 / area1);
    printf("A densidade populacional é: %f\n", densidade_populacional1);
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Carta 1 venceu!\n");
    } else {
         printf("Carta 2 venceu!");
        }


                                    printf("-------CARTA 1 CADASTRADA-------\n");
    printf("----------------\n");

                                        printf("Carta02 \n");

    printf("Digite o número da carta que pegou: \n");
    scanf(" %d", &numerodacarta2);
    // o usuário vai digitar o numero da carta que pegou
    printf("Digite o nome do estado: \n");
    scanf ("%s", estado2);
    // o usuário digita o nome do estado que aparece na carta
    printf("Digite o nome da cidade: \n");
    scanf ("%s", cidade2);
    // o usuário digita o nome da cidade que aparece na carta
    printf("Digite a área da cidade em Km2: \n");
    scanf ("%f", &area2);
    // usuário digita numero da área da cidade 
    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);
    // usuário digita a população da cidade
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodospontosturisticos2);
    // o usuário vai digitar o numero de pontos turísticos
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);
    // o usuário vai digitar o pib da cidade

     // cálculo pib per capita Carta 2
    pib_per_capita2 = (pib2 / populacao2);
    printf("O Pib per capita é: %.2f\n", pib_per_capita2);
    // cálculo densidade populacional carta 2
    densidade_populacional2 = (populacao2 / area2);
    printf("A densidade populacional é: %f\n", densidade_populacional2);
    
    

    printf("-------CARTA 2 CADASTRADA-------\n");
    printf("----------------\n");

    printf("População: %lu\n", populacao1);
    printf("Número dos pontos turísticos: %d\n", numerodospontosturisticos1);
    printf("Pib: %.3f\n", pib1);
    pib_per_capita1 = (pib1 / populacao1);
    printf("O Pib per capita é: %.3f\n", pib_per_capita1);
    densidade_populacional1 = (populacao1 / area1);
    printf("A densidade populacional é: %.3f\n", densidade_populacional1);

       


    printf("-------CARTA 1 APRESENTADA-------\n");

    printf("População: %lu\n", populacao2);
    printf("Número dos pontos turísticos: %d\n", numerodospontosturisticos2);
    printf("Pib: %.3f\n", pib2);
    pib_per_capita2 = (pib2 / populacao2);
    printf("O Pib per capita é: %.3f\n", pib_per_capita2);
    densidade_populacional2 = (populacao2 / area2);
    printf("A densidade populacional é: %.3f\n", densidade_populacional2);


    printf("-------CARTA 2 APRESENTADA-------\n");
    printf("----------------\n");

                                printf("COMPARAÇÃO DAS CARTAS2\n");
                //comparação utilizando if / else;

                 
                printf("area1 > area2: %d\n", area1 > area2);
                printf("populacao1 > populacao2: %d\n", populacao1 > populacao2);
                printf("numerodospontosturisticos1 > numerodospontosturisticos2: %d\n", numerodospontosturisticos1 > numerodospontosturisticos2);
                printf("pib1 > pib2: %d\n", pib1 > pib2);
                printf("pib_per_capita1 > pib_per_capita2: %d\n", pib_per_capita1 >= pib_per_capita2);
                printf("densidade_populacional1 < densidade_populacional2: %d\n", densidade_populacional1 <= densidade_populacional2);

                printf("COMPARAÇÃO DAS CARTAS CARTA 2 / CARTA 1\n");

                printf("area2 > area1: %d\n", area2 > area1);
                printf("populacao2 > populacao1: %d\n", populacao2 > populacao1);
                printf("numerodospontosturisticos2 > numerodospontosturisticos1: %d\n", numerodospontosturisticos2 > numerodospontosturisticos1);
                printf("pib2 > pib1: %d\n", pib2 > pib1);
                printf("pib_per_capita2 > pib_per_capita1: %d\n", pib_per_capita2 >= pib_per_capita1);
                printf("densidade_populacional2 < densidade_populacional1: %d\n", densidade_populacional2 <= densidade_populacional1);

                printf("---------------RESULTADO DA COMPARAÇÃO DAS CARTAS\n-------------");
                // aqui a comparação das cartas irá gerar a mensagem que informa qual carta venceu
                printf("Área:\n");
                if (area1 > area2){
                printf("Carta 1 venceu!\n");   
                }else {  
                printf("Carta 2 venceu!\n");}
                
                printf("populacao:\n");
                if (populacao1 > populacao2){
                printf("Carta 1 venceu!\n");   
                }else {  
                printf("Carta 2 venceu!\n");}
                
                printf("Número de pontos turísticos: \n");
                if (numerodospontosturisticos1 > numerodospontosturisticos2) {
                printf("Carta 1 venceu!\n");   
                }else {
                printf("Carta 2 venceu!\n");} 
                
                printf("Pib da cidade: \n");
                if (pib1 > pib2) {
                printf("Carta 1 venceu!\n");  
                } else { 
                printf("Carta 2 venceu!\n");}

                printf("Pib per capita: \n");
                if (pib_per_capita1 > pib_per_capita2) {
                printf("Carta 1 venceu!\n");   
                } else {  
                printf("Carta 2 venceu!\n");}
                
                printf("Densidade populacional: ");
                if (densidade_populacional1 < densidade_populacional2) {
                printf("Carta 1 venceu!\n");   
                } else {  
                printf("Carta 2 venceu!\n");
                }

                return 0;
                }
