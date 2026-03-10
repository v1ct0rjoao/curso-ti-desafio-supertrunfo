#include <stdio.h>
#include <string.h>

int main() {
    // --- DECLARAÇÃO DE VARIÁVEIS (CARTA 1) ---
    char estado1;
    char codigo1[5];          // Aumentado para 5 para garantir espaço (Ex: A01 + \0)
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // --- DECLARAÇÃO DE VARIÁVEIS (CARTA 2) ---
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // ================= CADASTRO DA CARTA 1 =================
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);   

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);     // Strings não precisam de '&' no scanf

    getchar();                // Limpa o buffer antes do fgets
    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o "Enter" do final da string

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ================= CADASTRO DA CARTA 2 =================
    printf("\n--- CADASTRO DA CARTA 2 ---\n");

   
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    getchar();
    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ================= EXIBIÇÃO DOS DADOS =================
    printf("\n========================================\n");
    printf("           DADOS DAS CARTAS\n");
    printf("========================================\n");

    // Exibição Carta 1
    printf("CARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("----------------------------------------\n");

    // Exibição Carta 2
    printf("CARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}