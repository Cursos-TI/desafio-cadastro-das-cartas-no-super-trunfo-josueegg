#include <stdio.h>

int main(){
    int populacao, populacao2,  turistico, turistico2;
    float area, area2, pib, pib2;
    char cidade[100], cidade2[100], codigo[100], codigo2[100], estado[100], estado2[300];

    printf("Digite seu Estado:  \n");
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
    
    printf("Digite a área²: \n");
    scanf("%f" , &area);

    printf("Digite a 2área²: \n");
    scanf("%f" , &area2);

    printf("Digite a População: \n");
    scanf("%d" , &populacao);

    printf("Digite a segunda População: \n");
    scanf("%d" , &populacao2);

    printf("Nome do Estado:  %s - Código: %s - Cidade: %s - População: %d - Area²: %f\n"  , estado, codigo,  cidade, populacao,area);
    printf("Nome do Estado2: %s - Código2: %s - Cidade2: %s - População2: %d -  2Area²: %f" , estado2, codigo2, cidade2, populacao2, area2);


    return 0;

}