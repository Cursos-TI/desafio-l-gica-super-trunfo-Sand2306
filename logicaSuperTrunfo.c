#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 100

typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CartaCidade;

void cadastrarCarta(CartaCidade *carta) {
    printf("Cadastro da Carta:\n");
    printf("Estado: ");
    scanf("%s", carta->estado);
    printf("Código: ");
    scanf("%d", &carta->codigo);
    printf("Nome da Cidade: ");
    scanf("%s", carta->nome);
    printf("População: ");
    scanf("%d", &carta->populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta->area);
    printf("PIB (em milhões): ");
    scanf("%f", &carta->pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    printf("Carta cadastrada com sucesso!\n\n");
}

void compararCartas(CartaCidade *carta1, CartaCidade *carta2, int criterio) {
    printf("Comparando cartas de %s e %s:\n", carta1->nome, carta2->nome);
    switch (criterio) {
        case 1: // População
            if (carta1->populacao > carta2->populacao) {
                printf("%s vence!\n", carta1->nome);
            } else {
                printf("%s vence!\n", carta2->nome);
            }
            break;
        case 2: // Área
            if (carta1->area > carta2->area) {
                printf("%s vence!\n", carta1->nome);
            } else {
                printf("%s vence!\n", carta2->nome);
            }
            break;
        case 3: // PIB
            if (carta1->pib > carta2->pib) {
                printf("%s vence!\n", carta1->nome);
            } else {
                printf("%s vence!\n", carta2->nome);
            }
            break;
        case 4: // Densidade Populacional
            // Densidade = População / Área
            float densidade1 = carta1->populacao / carta1->area;
            float densidade2 = carta2->populacao / carta2->area;
            if (densidade1 < densidade2) {
                printf("%s vence!\n", carta1->nome);
            } else {
                printf("%s vence!\n", carta2->nome);
            }
            break;
        default:
            printf("Critério inválido!\n");
            break;
    }
}

int main() {
    CartaCidade cartas[MAX_CIDADES];
    int totalCartas = 0;

    // Cadastrar duas cartas
    for (int i = 0; i < 2; i++) {
        cadastrarCarta(&cartas[totalCartas]);
        totalCartas++;
    }

    // Escolher critério de comparação
    int criterio;
    printf("Escolha o critério de comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Densidade Populacional\n");
    printf("Digite o número do critério: ");
    scanf("%d", &criterio);

    // Comparar as cartas cadastradas
    compararCartas(&cartas[0], &cartas[1], criterio);

    return 0;
}
