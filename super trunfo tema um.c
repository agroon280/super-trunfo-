#include <stdio.h>

 int main() {
int populacao1, populacao2, turismo1,turismo2;
float area1, area2, pib1, pib2;

char codigo1[10] ,codigo2[10], cidade1[10],cidade2[10], estado1[10], estado2[10];
//criadas as variaveis, prossiga para o proximo passo, para usar printf e scanf

//escrever as variaveis separadamente
printf("digite o estado:\n");
scanf("%s[^\n]", estado1);

printf("digite o estado:\n");
scanf("%s[\n]", estado2);

printf("digite o codigo:\n");//A letra do estado seguida de um número
scanf("%s[\n]", codigo1);

printf("digite o codigo:\n");
scanf("%s[\n]", codigo2);

printf("digite a cidade:\n");
scanf("%s[\n]", cidade1);

printf("digite a cidade:\n");
scanf("%s[\n]", cidade2);

printf("digite a populaçao:\n");
scanf("%d", &populacao1);

printf("digite a populaçao: \n");
scanf("%d", &populacao2);

printf("digite area km²: \n ");
scanf("%f", &area1);

printf("digite area km²: \n ");
scanf("%f", &area2 );

printf("digite o PIB: \n ");
scanf("%f", &pib1);

printf("digite o PIB: \n ");
scanf("%f", &pib2);

printf("digite pontos turisticos : \n");
scanf("%d", &turismo1);

printf("digite pontos turisticos : \n");
scanf("%d", &turismo2);


//terminado o segundo estagio do codigo, fazer a parte final de saida das informaçoes

//DADOS CARTA 1
printf("Estado: %9s \n", estado2);
printf("codigo: %9s \n", codigo1);
printf("cidade: %9s \n", cidade1);
printf("Populaçao: %d milhoes \n", populacao1);
printf("area: %.2f km² \n", area1);
printf("PIB: %.2f Bilhoes de reais \n", pib1);
printf("Turismo: %d lugares 2\n", turismo1);
printf("\n");

//DADOS CARTA 2
printf("Estado: %9s \n", estado2);
printf("codigo: %9s \n", codigo2);
printf("cidade: %9s \n", cidade2);
printf("Populaçao: %d milhoes \n", populacao2);
printf("area: %.2f km² \n", area2);
printf("PIB: %.2f Bilhoes de reais \n", pib2);
printf("Turismo: %d lugares \n", turismo2);
return 0;

 }
