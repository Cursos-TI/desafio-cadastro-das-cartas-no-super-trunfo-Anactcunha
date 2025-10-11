#include <stdio.h>

int main(){
       
    
 // variáveis carta 1
        int numerodacarta1 = 57, area1, numerodospontosturisticos1 = 25, opcao;
             float pib1, densidade_populacional1, pib_per_capita1, super_Poder1;
                unsigned long int populacao1; 
                    char estado1[50] = ("Paraná"), cidade1[50] = ("Londrina");  
                        area1 = 432;
                            populacao1 = 18307950;
                               numerodospontosturisticos1 = 25;
                                  pib1 = 230060000.000;
                                        pib_per_capita1 = (pib1 / populacao1);
                                                densidade_populacional1 = (populacao1 / area1);
// variáveis carta 2                                             
        int numerodacarta2 = 37, area2, numerodospontosturisticos2 = 103;
              float pib2, densidade_populacional2, pib_per_capita2, super_Poder2;
                    unsigned long int populacao2;
                        char estado2[50] = ("Bahia"), cidade2[50] = ("Salvador"); 
                            area2 = 693;
                                populacao2 = 256420400;
                                    numerodospontosturisticos2 = 103;
                                        pib2 = 629540000.000;
                                            pib_per_capita2 = (pib2 / populacao2);
                                                densidade_populacional2 = (populacao2 / area2);

                                            printf("Carta01 \n");

    printf("Digite o número da carta que pegou: \n");
    // o usuário vai digitar o numero da carta que pegou
    scanf("%d", &numerodacarta1);
        
    printf("Digite o nome do estado: \n");
    scanf ("%s", estado1);
    // o usuário digita o nome do estado que aparece na carta
    printf("Digite o nome da cidade: \n");
    scanf ("%s", cidade1);
    // o usuário digita o nome da cidade que aparece na carta

    printf("Digite a área da cidade em Km2: \n");
    // usuário digita numero da área da cidade 
    scanf ("%d", &area1);
   
    printf("Digite a população da cidade: \n");
    // usuário digita a população da cidade
    scanf("%lu", &populacao1);
    
    printf("Digite o número de pontos turísticos: \n");
     // o usuário vai digitar o numero de pontos turísticos
    scanf("%d", &numerodospontosturisticos1);
  
    printf("Digite o pib da cidade: \n");
      // o usuário vai digitar o pib da cidade
    scanf("%f", &pib1);
   
    // cálculo pib per capita Carta 1
    pib_per_capita1 = (pib1 / populacao1);
    printf("O Pib per capita é: %.2f\n", pib_per_capita1);
    
    //cálculo densidade populacional Carta 1
    densidade_populacional1 = (populacao1 / area1);
    printf("A densidade populacional é: %f\n", densidade_populacional1);
    

                printf("-------CARTA 1 CADASTRADA-------\n");
   

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
    scanf ("%d", &area2);
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
    

    printf(" -----------APRESENTAÇÃO/COMPARAÇÃO/RESULTADO COMPARAÇÃO DAS CARTAS-------------\n");
/* a partir daqui no terminal serão apresentadas as informações de forma que elas estejam organizadas de maneira lógica e que o usuário consiga entender da melhor forma sem repetição de informações como estava na versão anterior*/
    printf("Comparação de cartas (Atributo: Area em m2)\n");

    printf("Carta 1 - Londrina: %d\n", area1);
    printf("Carta 2 - Salvador: %d\n", area2);
    if (area1 > area2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}

    printf("Comparação de cartas (Atributo: População)\n");

    printf("Carta 1 - Londrina: %lu\n", populacao1);
    printf("Carta 2 - Salvador: %lu\n", populacao2);
    if (populacao1 > populacao2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}

    printf("Comparação de cartas (Atributo: Numero dos pontos turísticos)\n");
    printf("Carta 1 - Londrina: %d\n", numerodospontosturisticos1);
    printf("Carta 2 - Salvador: %d\n", numerodospontosturisticos2);
    if (numerodospontosturisticos1 > numerodospontosturisticos2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}

    printf("Comparação de cartas (Atributo: Pib)\n");

    printf("Carta 1 - Londrina: %.3f\n", pib1);
    printf("Carta 2 - Salvador: %.3f\n", pib2);
    if (pib1 > pib2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}
=======
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
    pib_per_capita1 = (float)(pib1 / populacao1);
    printf("O Pib per capita é: %f \n", pib_per_capita1);
    densidade_populacional1 = (float)(populacao1 / area1);
    printf("A densidade populacional é: %f \n", densidade_populacional1);
    printf("super_poder_carta1 = area1 + populacao1 + numerodospontosturisticos1 + pib1 + pib_per_capita1 + (1.0 / densidade_populacional1");
>>>>>>> Stashed changes


    printf("Comparação de cartas (Atributo: Pib per capita)\n");

<<<<<<< Updated upstream
    printf("Carta 1 - Londrina: %.2f\n", pib_per_capita1);
    printf("Carta 2 - Salvador: %.2f\n", pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}
=======
printf("############-\n");
    
    printf("carta2:\n");
    printf("Estado: %s.\n", estado2);
    printf("Cidade: %s.\n", cidade2);
    printf("Área: %f.\n", area2);
    printf("População: %.f.\n", populacao2);
    printf("Número dos pontos turísticos: %d.\n", numerodospontosturisticos2);
    printf("Pib: %f.\n", pib2);
    pib_per_capita2 = (float)(pib2 / populacao2);
    printf("O Pib per capita é: %f \n", pib_per_capita2);
    densidade_populacional2 = (float)(populacao2 / area2);
    printf("A densidade populacional é: %f \n", densidade_populacional2);
    printf("super_poder_carta2 = area2 + populacao2 + numerodospontosturisticos2 + pib2 + pib_per_capita2 + (1.0 / densidade_populacional2);");
>>>>>>> Stashed changes

    printf("Comparação de cartas (Atributo: Densidade populacional)\n");

    printf("Carta 1 - Londrina: %.3f\n", densidade_populacional1);
    printf("Carta 2 - Salvador: %.3f\n", densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}
// atualizações para realização do desafio em desenvolvendo a lógica do jogo nível aventureiro
                        printf("MENU INTERATIVO\n");
// o menu interativo tem o objetivo de apresentar os atributos a carta de cada jogador tem para que seja feita a comparação
                        printf("Menu de opções:\n");
                        printf("1. Cadastrar nova carta?\n");
                        printf("S-sim/ N-não\n");
                        printf("2. Ver regras do jogo:\n"); 
                        printf("3. Apresentar o número da carta:\n");
                        printf("4. Apresentar o nome do Estado e da Cidade:\n");
                        printf("5. Apresentar a população:\n");
                        printf("6. Apresentar a área:\n");
                        printf("7. Apresentar o Pib:\n");
                        printf("8. Apresentar o número de pontos turisticos:\n");
                        printf("9. Apresentar o Pib per capita:\n");
                        printf("10. Apresentar a densidade populacional:\n");
                        printf("Escolha uma opção;\n");
                        scanf("%d",&opcao);
 

<<<<<<< Updated upstream
       

                return 0;
                }
=======
                printf("area1 >= area2: %d\n", area1 >= area2);
                printf("populacao1 >= populacao2: %f\n", populacao1 >= populacao2);
                printf("numerodospontosturisticos1 >= numerodospontosturisticos2: %d\n", numerodospontosturisticos1 >= numerodospontosturisticos2);
                printf("pib1 >= pib2: %f\n", pib1 >= pib2);
                printf("pib_per_capita1 >= pib_per_capita2: %f\n", pib_per_capita1 >= pib_per_capita2);
                printf("densidade_populacional1 >= densidade_populacional2: %f\n", densidade_populacional1 >= densidade_populacional2);
                printf("O super Poder da carta 01 é: %.2f\n", super_Poder1);
                printf("O super poder da carta 02 é: %.2f\n", super_Poder2);
                
                
    return 0;
}
>>>>>>> Stashed changes
