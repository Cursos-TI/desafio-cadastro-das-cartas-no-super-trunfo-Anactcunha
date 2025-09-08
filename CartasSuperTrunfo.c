#include <stdio.h>



 // variáveis carta 1
        int numerodacarta1, numerodospontosturisticos1;
             float area1, pib1, densidade_populacional1, pib_per_capita1, super_Poder1;
                unsigned long int populacao1; 
                    char estado1[50], cidade1[50];  
                        area1 = 432;
                            populacao1 = 1830795000;
                               numerodospontosturisticos1 = 25;
                                  pib1 = 23006.000;
                                        pib_per_capita1 = (float)(pib1 / populacao1);
                                                densidade_populacional1 = (float)(populacao1 / area1);
// variáveis carta 2                                             
        int numerodacarta2, numerodospontosturisticos2;
                float area2, pib2, densidade_populacional2, super_Poder2;
                    unsigned long int populacao2;
                        char estado2[50], cidade2[50];  
                            float ;
                                float pib_per_capita2;
                                    area2 = 693;
                                        populacao2 = 2564204000;
                                            numerodospontosturisticos2 = 103;
                                                pib2 = 62954.000;
                                                    pib_per_capita2 = (float)(pib2 / populacao2);
                                                        densidade_populacional2 = (float)(populacao2 / area2);


                                            printf("Carta01 \n");

    printf("Digite o número da carta que pegou: \n");
    scanf("%d", &numerodacarta1);
    // o usuário vai digitar o numero da carta que pegou
    printf("Digite o nome do estado: \n");
    scanf ("%s", estado1);
    // o usuário digita o nome do estado que aparece na carta
    printf("Digite o nome da cidade: \n");
    scanf ("%s", cidade1);
    // o usuário digita o nome da cidade que aparece na carta
    printf("Digite a área da cidade: \n");
    scanf ("%f", &area1);
    // usuário digita numero da área da cidade 
    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao1);
    // usuário digita a população da cidade
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodospontosturisticos1);
    // o usuário vai digitar o numero de pontos turísticos
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib1);
    // o usuário vai digitar o pib da cidade


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
    printf("Digite a área da cidade: \n");
    scanf ("%f", &area2);
    // usuário digita numero da área da cidade 
    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao2);
    // usuário digita a população da cidade
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodospontosturisticos2);
    // o usuário vai digitar o numero de pontos turísticos
    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib2);
    // o usuário vai digitar o pib da cidade
    
    

    printf("-------CARTA 2 CADASTRADA-------\n");
    printf("----------------\n");

    // cálculo pib per capita Carta 1
    pib_per_capita1 = (float)(pib1 / populacao1);
    printf("O Pib per capita é: %f \n", pib_per_capita1);

    //cálculo densidade populacional Carta 1
    densidade_populacional1 = (float)(populacao1 / area1);
    printf("A densidade populacional é: %f \n", densidade_populacional1);

    // cálculo pib per capita Carta 2
    pib_per_capita2 = (float)(pib2 / populacao2);
    printf("O Pib per capita é: %f \n", pib_per_capita2);

    // cálculo densidade populacional carta 2
    densidade_populacional2 = (float)(populacao2 / area2);
    printf("A densidade populacional é: %f \n", densidade_populacional2);


    printf("############-\n");
    //a partir de agora o código é para exibir os dados inseridos em cada carta (1 e 2)

    printf("carta1:\n");
    //apresentação da carta
    printf("Estado: %s.\n", estado1);
    // dados inseridos sobre o nome do estado que consta na carta
    printf("Cidade: %s.\n", cidade1);
    // dados inseridos sobre o nome da cidade que consta na carta
    printf("Área: %f.\n", area1);
    // dados inseridos sobre a área da cidade que consta na carta
    printf("População: %f.\n", populacao1);
    // dados inseridos sobre a população da cidade que consta na carta
    printf("Número dos pontos turísticos: %d.\n", numerodospontosturisticos1);
    // dados inseridos sobre o número de pontos turísticos que consta na carta
    printf("Pib: %f.\n", pib1);
    // dados inseridos sobre o pib da cidade que consta na carta


    printf("-------CARTA 1 APRESENTADA-------\n");
    printf("----------------\n");

printf("############-\n");
    
    printf("carta2:\n");
    printf("Estado: %s.\n", estado2);
    printf("Cidade: %s.\n", cidade2);
    printf("Área: %f.\n", area2);
    printf("População: %.f.\n", populacao2);
    printf("Número dos pontos turísticos: %d.\n", numerodospontosturisticos2);
    printf("Pib: %f.\n", pib2);
    

    printf("-------CARTA 2 APRESENTADA-------\n");
    printf("----------------\n");

                                printf("COMPARAÇÃO DAS CARTAS");
printf("############-\n");

                printf("area1 >= area2: %d\n", area1 >= area2);
                printf("populacao1 >= populacao2: %f\n", populacao1 >= populacao2);
                printf("numerodospontosturisticos1 >= numerodospontosturisticos2: %d\n", pontosturisticos1 >= pontosturisticos2);
                printf("pib1 >= pib2: %f\n", pib1 >= pib2);
                printf("pib_per_capita1 >= pib_per_capita2: %f\n", pib_per_capita1 >= pib_per_capita2);
                printf("densidade_populacional1 >= densidade_populacional2: %f\n", densidade_populacional1 >= densidade populacional2);
                
    return 0;
}
