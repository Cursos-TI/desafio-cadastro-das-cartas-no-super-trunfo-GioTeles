#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Tema 1 -> Cadastro das cartas \n");

    /* Declaração das variáveis presentes nas cartas. Nas linhas 10, 11 e 12 há o uso dos números '1' e '2' para diferenciar as variáveis
    pertencentes as cartas 1 e 2, respectivamente. */

    char Estado_1, Estado_2, Codigo_Da_Carta_1[4], Codigo_Da_Carta_2[4], Cidade_1[50], Cidade_2[50];
    unsigned long int Populacao_1, Populacao_2; 
    int Pontos_Turisticos_1, Pontos_Turisticos_2;
    float Area_1, Area_2, PIB_1, PIB_2, Densidade_Populacional_1, Densidade_Populacional_2, PIB_per_Capita_1, PIB_per_Capita_2;
    float Super_Poder_1, Super_Poder_2;

    // Cadastrando os dados da carta 1

    printf("\nDigite a letra que representa o Estado da carta: \n");
    scanf(" %c", &Estado_1);

    printf("Digite o código da carta: (Máximo de 3 caracteres) \n");
    scanf("%s", Codigo_Da_Carta_1);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(Cidade_1, 50, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao_1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &Pontos_Turisticos_1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area_1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB_1);

    Densidade_Populacional_1 = (float) Populacao_1 / Area_1; // Calculando a densidade populacional da cidade 1

    PIB_per_Capita_1 = (float) PIB_1 / Populacao_1; // Calculando o PIB per Capita da cidade 1

    Super_Poder_1 = (float) Populacao_1 + Area_1 + PIB_1 + Pontos_Turisticos_1 + PIB_per_Capita_1 + (1.0f / Densidade_Populacional_1); // Calculando o super poder da carta 1

    // Cadastrando os dados da carta 2

    printf("\nDigite a letra que representa o Estado da carta: \n");
    scanf(" %c", &Estado_2);

    printf("Digite o código da carta: (Máximo de 3 caracteres) \n");
    scanf("%s", Codigo_Da_Carta_2);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(Cidade_2, 50, stdin);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &Populacao_2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &Pontos_Turisticos_2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB_2);

    Densidade_Populacional_2 = (float) Populacao_2 / Area_2; // Calculando a densidade populacional da cidade 2

    PIB_per_Capita_2 = (float) PIB_2 / Populacao_2; // Calculando o PIB per Capita da cidade 2

    Super_Poder_2 = (float) Populacao_2 + Area_2 + PIB_2 + Pontos_Turisticos_2 + PIB_per_Capita_2 + (1.0f / Densidade_Populacional_2); // Calculando o super poder da carta 2

    // Exibindo as informações cadastradas da carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_Da_Carta_1);
    printf("Nome da Cidade: %s\n", Cidade_1);
    printf("População: %lu \n", Populacao_1);
    printf("Área: %.2f km²\n", Area_1);
    printf("PIB: %.2f de reais\n", PIB_1);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_1);
    printf("Super Poder: %.2f\n", Super_Poder_1);

    // Exibindo as informações cadastradas da carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_Da_Carta_2);
    printf("Nome da Cidade: %s\n", Cidade_2);
    printf("População: %lu \n", Populacao_2);
    printf("Área: %.2f km²\n", Area_2);
    printf("PIB: %.2f de reais\n", PIB_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_Populacional_2);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita_2);
    printf("Super Poder: %.2f\n", Super_Poder_2);

      // Comparações
    printf("\nResultado das Comparações:\n");
    printf("População: %d\n", Populacao_1 > Populacao_2);
    printf("Área: %d\n", Area_1 > Area_2);
    printf("PIB: %d\n", PIB_1 > PIB_2);
    printf("Pontos Turísticos: %d\n", Pontos_Turisticos_1 > Pontos_Turisticos_2);
    printf("PIB per Capita: %d\n", PIB_per_Capita_1 > PIB_per_Capita_2);
    printf("Densidade Populacional: %d\n", Densidade_Populacional_1 < Densidade_Populacional_2); // menor vence
    printf("Super Poder: %d\n", Super_Poder_1 > Super_Poder_2);

    return 0;
}