#include <stdio.h>

int main(){
    char codigo[50], codigo2[50], nome[50], nome2[50];
    char estado, estado2;
    int turismo, turismo2;
    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    float densidade, densidade2, pibcapta, pibcapta2;
    float superpoder1, superpoder2;

    printf("\nCarta 1\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo);
           
    printf("Estado: \n");
        scanf(" %c", &estado);
    
    printf("Cidade: \n");
        scanf("%s", nome);
        
    printf("População: \n");
        scanf("%lu", &populacao);
           
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo);
           
    printf("Area em km²: \n");
        scanf("%f", &area);
          
    printf("Pib: \n");
        scanf("%f", &pib); 

    printf("---------------\n");
    printf("Carta 2\n");
    
    printf("Qual será o código da carta: \n");
        scanf("%s", codigo2);
               
    printf("Estado: \n");
        scanf(" %c", &estado2);
        
    printf("Cidade: \n");
        scanf("%s", nome2);
            
    printf("População: \n");
        scanf("%lu", &populacao2);
               
    printf("Pontos de turismo: \n");
        scanf("%d", &turismo2);
               
    printf("Area em km²: \n");
        scanf("%f", &area2);
              
    printf("Pib: \n");
        scanf("%f", &pib2); 

        pibcapta = pib / populacao;
        pibcapta2 = pib2 / populacao2;
    
        densidade = populacao / area;
        densidade2 = populacao2 / area2;

        superpoder1 = populacao + area + pib + turismo + pibcapta;
        superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapta2;
    
    printf("---------------\n");

    printf("\nCarta 1\n");
    printf("Codigo: %s\n", codigo);
    printf("Estado: %c\n", estado);
    printf("Cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Pontos de turismo: %d\n", turismo);
    printf("Área: %.0f km²\n", area);
    printf("Pib: R$%.0f bi\n", pib);
    printf("A densidade populacional é de: %.0f hab/km²\n", densidade);
    printf("O pib per capta é: R$%.4f\n", pibcapta);
    printf("O super poder é: %.2f\n", superpoder1);

    printf("---------------\n");

    printf("\nCarta 2\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Pontos de turismo: %d\n", turismo2);
    printf("Área: %.0f km²\n", area2);
    printf("Pib: R$%.0f bi\n", pib2);
    printf("A densidade populacional é de: %.0f hab/km²\n", densidade2);
    printf("O pib per capta é: R$%.4f\n", pibcapta2); 
    printf("O super poder é: %.2f\n", superpoder2);

    printf("---------------\n");
    printf("\nComparação de cartas\n");
    printf("População: a carta %d venceu\n", populacao > populacao2);
    printf("turismo: a carta %d venceu\n", turismo > turismo2);
    printf("area: a carta %d venceu\n", area > area2);
    printf("pib: a carta %d venceu\n", pib > pib2);
    printf("densidade: a carta %d venceu\n", densidade > densidade2);
    printf("pib per capta: a carta %d venceu\n", pibcapta > pibcapta2);
    printf("super poder: a carta %d venceu\n", superpoder1 > superpoder2);

    if (superpoder1 > superpoder2){
        printf ("a carta 1 venceu");
    } else {
        printf ("a carta 2 venceu");
    }

    return 0;

    }
