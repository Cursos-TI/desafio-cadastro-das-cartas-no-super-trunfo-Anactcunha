#include <stdio.h>

int main(){
       
    
 // variáveis carta 1
        int numerodacarta1 = 57, area1, numerodospontosturisticos1 = 25;
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
              float pib2, densidade_populacional2,       pib_per_capita2, super_Poder2;
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


    printf("Comparação de cartas (Atributo: Pib per capita)\n");

    printf("Carta 1 - Londrina: %.2f\n", pib_per_capita1);
    printf("Carta 2 - Salvador: %.2f\n", pib_per_capita2);
    if (pib_per_capita1 > pib_per_capita2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}

    printf("Comparação de cartas (Atributo: Densidade populacional)\n");

    printf("Carta 1 - Londrina: %.3f\n", densidade_populacional1);
    printf("Carta 2 - Salvador: %.3f\n", densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2){
                printf("Resultado: Carta 1 (Londrina) venceu!\n");   
                }else {  
                printf("Resultado: Carta 2 (Salvador) venceu!\n");}
       

                return 0;
                }
