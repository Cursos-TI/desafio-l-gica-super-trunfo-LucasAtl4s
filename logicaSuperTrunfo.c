#include <stdio.h>
#include <time.h>
#include <string.h>
int main() {
  short int opcao;
  // variaveis da carta 1 // 
  
  char pais1[30];
  char estado1[30];
   char codigocarta1[10];
   char cidade1[30];
   unsigned int populacao1;
   float areakm1;
   float pib1;
   int pontosdeturismo1;
  float densi1;
  float pibpc1;

   //variaveis da carta 2 //

   char pais2[30];
   char estado2[30];
   char codigocarta2[10];
   char cidade2[30];
   unsigned int populacao2;
   float areakm2;
   float pib2;
   int pontosdeturismo2;
float densi2;
float pibpc2;

  //  parte do codigo em que pede ao usuario dados das cartas usando printf e scanf //usei \n\n para pular 2 linhas
  
  printf("DESAFIO SUPER TRUNFO \n\n");
   
   printf(" DADOS DA CARTA 1 \n\n");
   
   printf("NOME DO País:\n");
   scanf(" %d", pais1);
   
   printf("NOME DO ESTADO:\n");
   scanf("%s", estado1);
   
   printf("CODIGO CARTA: \n");
   scanf("%s", codigocarta1);

   printf("NOME DA CIDADE: \n");
   scanf(" %[^\n]", cidade1);

   printf("NUMERO POPULAÇÃO: \n");
   scanf("%d", &populacao1);

   printf("AREA EM KM²: \n");
   scanf("%f", &areakm1);

   printf("PIB: \n");
   scanf("%f", &pib1);

  printf("PONTOS TURISTICOS: \n");
  scanf("%d", &pontosdeturismo1); 
  
 

  printf(" DADOS DA CARTA 2 \n\n");
   
printf("NOME DO País:\n");
   scanf("%d",pais2);

   printf("NOME DO ESTADO: \n");
   scanf("%s", estado2);
   
   printf("CODIGO CARTA: \n");
   scanf(" %s", codigocarta2);

   printf("NOME DA CIDADE: \n");
   scanf(" %[^\n]", cidade2);

   printf("NUMERO POPULAÇÃO: \n");
   scanf("%d", &populacao2);

   printf("AREA EM KM²: \n");
   scanf("%f", &areakm2);

   printf("PIB: \n");
   scanf("%f", &pib2);

  printf("PONTOS TURISTICOS: \n");
  scanf("%d", &pontosdeturismo2);

  //declarando informações pib per capita e densidade populacional
 densi1 = (float)populacao1 / areakm1;
 pibpc1= pib1 / (float)populacao1;

densi2 = (float)populacao2 / areakm2;
 pibpc2= pib2 / (float)populacao2;

  printf("\n\n");

  // DADOS DA CARTA 1

printf (" CARTA 1 \n");

printf("NOME DO País:  %d", pais1);

printf("NOME DO ESTADO: %s \n", estado1);

printf("CODIGO DA CARTA: %s \n", codigocarta1);

printf("NOME DA CIDADE: %s \n", cidade1);

printf("POPULAÇAO: %d \n", populacao1);

printf("AREA EM KM²: %.0f \n", areakm1);

printf("PIB: %.0f\n",pib1);

printf("PONTOS TURISTICOS: %d \n", pontosdeturismo1);

printf("Densidade populacional: %.4f km²\n", densi1);

printf("PIB per Capita: %.4f reais\n", pibpc1);

printf("\n\n");


//DADOS DA CARTA 2  


printf (" CARTA 2 \n");

printf("NOME DO País: %d", pais2);

printf("NOME DO ESTADO: %s \n", estado2);

printf("CODIGO DA CARTA: %s \n", codigocarta2);

printf("NOME DA CIDADE: %s \n", cidade2);

printf("POPULAÇAO: %d \n", populacao2);

printf("AREA EM KM²: %.0f \n", areakm2);

printf("PIB: %.0f\n",pib2);

printf("PONTOS TURISTICOS: %d \n", pontosdeturismo2);

printf("Densidade populacional: %.4f km²\n", densi2);

printf("PIB per Capita: %.4f reais\n", pibpc2);

printf("\n\n");

//comparando dados
printf("Menu interativo, Escolha Qual atributo comparar!\n");
printf("1 - população\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos turisticos\n");
printf("5 - Densidade demográfica\n");
scanf("%d",&opcao);

  printf("Carta 1: %s vs Carta 2: %s\n", pais1, pais2);

  switch(opcao){
  case 1:
   printf("\n Carta 1 População: %lu vs Carta 2 População: %lu\n", populacao1, populacao2);
    if (populacao1 > populacao2)
    {
        printf("A carta 1 Venceu!: %lu\n", populacao1);
    }
    else if (populacao1 < populacao2)
    {
        printf("A carta 2 Venceu!: %lu\n", populacao2);
    }
    else
    {
        printf("As cartas têm a mesma população: %lu\n", populacao1, populacao2);
    }
    break;
    case 2:
    printf("\nCarta 1 Área: %.2fkm² vs Carta 2 Área: %.2fkm²\n", areakm1, areakm2);
    if (areakm1 > areakm2)
    {
        printf("A carta 1 Venceu!: %.2fkm²\n", areakm1);
    }
    else if (areakm1 < areakm2)
    {
        printf("A carta 2 Venceu!: %.2fkm²\n", areakm2);
    }
    else
    {
        printf("As cartas têm a mesma área: Carta1: %.2fkm² Carta2: %.2fkm²\n", areakm1, areakm2);
    }
  break;
  case 3:
    printf("\nCarta 1 PIB: %.2f vs Carta 2 PIB: %.2f\n", pib1, pib2);
   
    if (pib1 > pib2)
    {
        printf("A carta 1 Venceu!: %.2f\n", pib1);
    }
    else if (pib1 < pib2)
    {
        printf("A carta 2 Venceu!: %.2f\n", pib2);
    }
    else
    {
        printf("As cartas tem o mesmo PIB: Carta 1: %.2f Carta2: %.2f \n", pib1, pib2);
    }
  break;
  case 4:
    printf("\nCarta 1 Pontos turísticos: %d vs Carta 2 Pontos turisticos: %d\n", pontosdeturismo1, pontosdeturismo2);
    if (pontosdeturismo1 > pontosdeturismo2)
    {
        printf("A carta 1 Venceu!: %d\n", pontosdeturismo1);
    }
    else if (pontosdeturismo1 < pontosdeturismo2)
    {
        printf("A carta 2 Venceu!: %d\n",pontosdeturismo2);
    }
    else
    {
        printf("As cartas têm o mesmo número de pontos turísticos: Carta1: %d Carta2: %d\n", pontosdeturismo1, pontosdeturismo2);
    }
break;
case 5:
    printf("\n Densidade Carta 1 : %.2fkm² vs Densidade Carta 2 : %.2fkm²\n", densi1, densi2);
    if (densi1 > densi2)
    {
        printf("A carta 2 Venceu!: %.2fkm²\n", densi1);
    }
    else if (densi1 < densi2)
    {
        printf("A carta 1 Venceu!: %.2fkm²\n", densi2);
    }
    else
    {
        printf("As cartas têm a mesma Densidade demográfica: Carta1: %.2fkm² Carta2: %.2fkm²\n", densi1, densi2);
    }
  break;


  }
return 0;
} 
