#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Tema 1 -> Cadastro das cartas \n");

    /* Declaração das variáveis presentes nas cartas. Nas linhas 10, 11 e 12 há o uso dos números '1' e '2' para diferenciar as variáveis
    pertencentes as cartas 1 e 2, respectivamente. */

    char Estado_1, Estado_2, Codigo_Da_Carta_1[4], Codigo_Da_Carta_2[4], Cidade_1[30], Cidade_2[30];
    int Populacao_1, Populacao_2, Pontos_Turisticos_1, Pontos_Turisticos_2;
    float Area_1, Area_2, PIB_1, PIB_2;

    // Cadastrando os dados da carta 1

    printf("Digite a letra que representa o Estado da carta: \n");
    scanf(" %c", &Estado_1);

    printf("Digite o código da carta: (Máximo de 3 caracteres) \n");
    scanf("%s", Codigo_Da_Carta_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade_1);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao_1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &Pontos_Turisticos_1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area_1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB_1);

    // Cadastrando os dados da carta 2

    printf("\nDigite a letra que representa o Estado da carta: \n");
    scanf(" %c", &Estado_2);

    printf("Digite o código da carta: (Máximo de 3 caracteres) \n");
    scanf("%s", Codigo_Da_Carta_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Cidade_2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &Populacao_2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &Pontos_Turisticos_2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &Area_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &PIB_2);

    // Exibindo as informações cadastradas da carta 1

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", Estado_1);
    printf("Código: %s\n", Codigo_Da_Carta_1);
    printf("Cidade: %s\n", Cidade_1);
    printf("População: %d de habitantes\n", Populacao_1);
    printf("Número de Pontos Turisticos: %d\n", Pontos_Turisticos_1);
    printf("Área: %f km²\n", Area_1);
    printf("PIB: %f de reais\n", PIB_1);

    // Exibindo as informações cadastradas da carta 2

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", Estado_2);
    printf("Código: %s\n", Codigo_Da_Carta_2);
    printf("Cidade: %s\n", Cidade_2);
    printf("População: %d de habitantes\n", Populacao_2);
    printf("Número de Pontos Turísticos: %d\n", Pontos_Turisticos_2);
    printf("Área: %f km²\n", Area_2);
    printf("PIB: %f de reais\n", PIB_2);

    return 0;
}