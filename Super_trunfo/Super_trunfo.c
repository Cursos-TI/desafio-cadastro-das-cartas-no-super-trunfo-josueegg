#include <stdio.h>

int main(){
    int populacao, populacao2,  turistico, turistico2;
    float area, area2, pib, pib2;
    char cidade, cidade2, codigo, codigo2, estado, estado2[300];

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

    printf("Digite a População: \n");
    scanf("%d" , &populacao);

    printf("Digite a segunda População: \n");
    scanf("%d" , &populacao2);

    printf("Nome do Estado: %s - Código:  %s - Cidade: %s - População: %d" , estado, codigo,  cidade, populacao);

    return 0;









}