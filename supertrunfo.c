#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char estado1[50];
    char estado2[50];
    char codigo1[10];
    char codigo2[10];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float densidade1;
    float densidade2;
    float pib1;
    float pib2;
    float pibpercapita1;
    float pibpercapita2;
    float super1;
    float super2;

    // carta 1
    printf("=== carta 1===\n");
    printf("estado:");
    scanf("%49[^\n]", estado1);
    getchar();
    printf("codigo:");
    scanf("%9[^\n]", codigo1);
    printf("populacao:");
    scanf("%d", &populacao1);
    printf("area:");
    scanf("%f", &area1);
    printf("densidade:");
    scanf("%f", &densidade1);
    getchar(); 
    printf("pib:");
    scanf("%f", &pib1);
    getchar();
    printf("pib per capita:");
    scanf("%f", &pibpercapita1);
    printf("super:");
    scanf("%f", &super1);
    getchar();
    
     // carta 2
     printf("=== carta 2===\n");
     printf("estado:");
     scanf("%49[^\n]", estado2);
     printf("codigo:");
     getchar();
     scanf("%9[^\n]", codigo2);
     getchar();
     printf("populacao:");
     scanf("%d", &populacao2);
     printf("area:");
     scanf("%f", &area2);
     printf("densidade:");
     scanf("%f", &densidade2);
     printf("pib:");
     scanf("%f", &pib2);
     printf("pib per capita:");
     scanf("%f", &pibpercapita2);
     printf("super:");
     scanf("%f", &super2);
     
     // calculos
     densidade1 = populacao1 / area1;
     densidade2 = populacao2 / area2;
     pibpercapita1 = pib1 / populacao1;
     pibpercapita2 = pib2 / populacao2;
     
     // exibir dados das cartas cadastradas
        printf("=== carta 1 ===\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("Densidade: %.2f\n", densidade1);
        printf("PIB: %.2f\n", pib1);
        printf("PIB per capita: %.2f\n", pibpercapita1);
    

        printf("=== carta 2 ===\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("Densidade: %.2f\n", densidade2);
        printf("PIB: %.2f\n", pib2);
        printf("PIB per capita: %.2f\n", pibpercapita2);
        
        // resultados
        int populacaoF = populacao1 > populacao2;
        int areaF = area1 > area2;
        int densidadeF = densidade1 > densidade2;
        int pibF = pib1 > pib2;
        int pibpercapitaF = pibpercapita1 > pibpercapita2;

        printf("=== Resultados ===\n");
        printf("População: %s\n", populacaoF ? "Carta 1" : "Carta 2");
        printf("Área: %s\n", areaF ? "Carta 1" : "Carta 2");
        printf("Densidade: %s\n", densidadeF ? "Carta 1" : "Carta 2");
        printf("PIB: %s\n", pibF ? "Carta 1" : "Carta 2");
        printf("PIB per capita: %s\n", pibpercapitaF ? "Carta 1" : "Carta 2");
   

        return 0;
 }

