#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Estrutura para armazenar os dados de uma carta de cidade
typedef struct {
    char estado[50];
    char codigo[10];
    char nome_cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

int main() {
    
    // Nível Novato - Cadastro Básico
    /*
    Carta carta1, carta2;

    printf("--- Nivel Novato: Cadastro Basico ---\n\n");
    
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area (km2): ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    printf("\n");

    // Exibição dos Dados das Cartas
    printf("Dados da Carta 1:\n");
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);
    printf("\n");

    printf("Dados da Carta 2:\n");
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);
    printf("\n");
    */

    // Nível Aventureiro - Cálculo de Atributos
    /*
    Carta cartaA, cartaB;

    printf("--- Nivel Aventureiro: Calculo de Atributos ---\n\n");
    
    // Dados de exemplo para simplificar a demonstração
    printf("Cadastro da Carta A:\n");
    printf("Populacao: ");
    scanf("%lu", &cartaA.populacao);
    printf("Area (km2): ");
    scanf("%f", &cartaA.area);
    printf("PIB: ");
    scanf("%f", &cartaA.pib);
    
    // Cálculo de novos atributos
    cartaA.densidade_populacional = cartaA.populacao / cartaA.area;
    cartaA.pib_per_capita = cartaA.pib / cartaA.populacao;
    printf("\n");

    // Cadastro da Carta B
    printf("Cadastro da Carta B:\n");
    printf("Populacao: ");
    scanf("%lu", &cartaB.populacao);
    printf("Area (km2): ");
    scanf("%f", &cartaB.area);
    printf("PIB: ");
    scanf("%f", &cartaB.pib);
    
    // Cálculo de novos atributos
    cartaB.densidade_populacional = cartaB.populacao / cartaB.area;
    cartaB.pib_per_capita = cartaB.pib / cartaB.populacao;
    printf("\n");

    // Exibição de todos os atributos, incluindo os calculados
    printf("Dados da Carta A:\n");
    printf("Populacao: %lu\n", cartaA.populacao);
    printf("Area: %.2f\n", cartaA.area);
    printf("Densidade Populacional: %.2f\n", cartaA.densidade_populacional);
    printf("PIB: %.2f\n", cartaA.pib);
    printf("PIB per Capita: %.2f\n", cartaA.pib_per_capita);
    printf("\n");

    printf("Dados da Carta B:\n");
    printf("Populacao: %lu\n", cartaB.populacao);
    printf("Area: %.2f\n", cartaB.area);
    printf("Densidade Populacional: %.2f\n", cartaB.densidade_populacional);
    printf("PIB: %.2f\n", cartaB.pib);
    printf("PIB per Capita: %.2f\n", cartaB.pib_per_capita);
    printf("\n");
    */

    // Nível Mestre - Comparação e Super Poder
    /*
    Carta cartaX, cartaY;

    printf("--- Nivel Mestre: Comparacao e Super Poder ---\n\n");
    
    // Dados de exemplo para simplificar a demonstração
    cartaX.populacao = 100000;
    cartaX.area = 50.0;
    cartaX.pib = 20.0;
    cartaX.pontos_turisticos = 5;
    cartaX.densidade_populacional = cartaX.populacao / cartaX.area;

    cartaY.populacao = 150000;
    cartaY.area = 60.0;
    cartaY.pib = 25.0;
    cartaY.pontos_turisticos = 4;
    cartaY.densidade_populacional = cartaY.populacao / cartaY.area;

    // Calculo do Super Poder
    cartaX.super_poder = (float)cartaX.populacao + cartaX.area + cartaX.pib + cartaX.pontos_turisticos + (1 / cartaX.densidade_populacional);
    cartaY.super_poder = (float)cartaY.populacao + cartaY.area + cartaY.pib + cartaY.pontos_turisticos + (1 / cartaY.densidade_populacional);

    // Comparacao e exibicao dos resultados
    printf("Comparacao de Populacao:\n");
    if (cartaX.populacao > cartaY.populacao) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("Comparacao de Area:\n");
    if (cartaX.area > cartaY.area) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("Comparacao de PIB:\n");
    if (cartaX.pib > cartaY.pib) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("Comparacao de Pontos Turisticos:\n");
    if (cartaX.pontos_turisticos > cartaY.pontos_turisticos) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("Comparacao de Densidade Populacional (menor valor vence):\n");
    if (cartaX.densidade_populacional < cartaY.densidade_populacional) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("Comparacao de Super Poder:\n");
    if (cartaX.super_poder > cartaY.super_poder) { printf("Carta X venceu.\n"); } else { printf("Carta Y venceu.\n"); }
    
    printf("\n");
    */

    return 0;
}