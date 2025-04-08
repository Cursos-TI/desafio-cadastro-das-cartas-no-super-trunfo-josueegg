#include <stdio.h>

int main(){
    char cidade[100], cidade2[100], codigo[100], codigo2[100], estado[100], estado2[300];
    float populacao, populacao2,  turistico, turistico2;
    float area, area2, pib, pib2;
    float densidade, densidade2; 
    float capita, capita2;


    printf("Digite o seu Estado:  \n");
    scanf("%s" , &estado);

    printf("Digite o segundo Estado:  \n");
    scanf("%s" , &estado2);

    printf("Digite o Código: \n");
    scanf("%s" , &codigo);

    printf("Digite o segundo Código: \n");
    scanf("%s" , &codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s" , &cidade);

    printf("Digite sua segunda Cidade: \n");
    scanf("%s" , &cidade2);

    printf("Digite o PIB: \n");
    scanf("%f" , &pib);

    printf("Digite o PIB2: \n");
    scanf("%f" , &pib2);
    
    printf("Digite a área²: \n");
    scanf("%f" , &area);

    printf("Digite a 2área²: \n");
    scanf("%f" , &area2);

    printf("Digite a População: \n");
    scanf("%f" , &populacao);
    
    printf("Digite a segunda População: \n");
    scanf("%f" , &populacao2);

    capita = pib/populacao;
    capita2 = pib2/populacao2;

    densidade = populacao/area;
    densidade2 = populacao2/area2; 
    
     
    printf("Nome do Estado:  %s - Código: %s - Cidade: %s - População: %f - Area²: %f - PIB: %f\n"  , estado, codigo,  cidade, populacao,area, pib);
    printf("A média percapita é: %.2f\n", capita);
    printf("A média de  densidade populacional é: %.2f\n", densidade);
    printf("Nome do Estado2: %s - Código2: %s - Cidade2: %s - População2: %f -  2Area²: %f - PIB2: %f\n" , estado2, codigo2, cidade2, populacao2, area2);
    printf("A média percapita é: %.2f\n", capita2);
    printf("A média de densidade papulacional é: %.2f\n", densidade2);


    return 0;

}