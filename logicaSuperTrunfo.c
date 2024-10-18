#include <stdio.h>
  int main() {
    char estado [50];
    int codigo;
    char nome [50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    printf("Desafio Super Trunfo - Países\n");
    printf("Digite o estado\n");
    scanf("%s", &estado);
    printf("Digite o Codigo\n");
    scanf("%d", &codigo);
    printf("Digite o nome\n");
    scanf("%s",&nome);
    printf("Digite a Populacao\n");
    scanf("%d", &populacao);
    printf("Digite a area\n");
    scanf("%f", &area);
    printf("Digite o PIB\n");
    scanf("%f", &PIB);
    printf("Digite os pontos turisticos\n");
    scanf("%d", &pontos_turisticos);
    printf("Dados cadastrados com sucesso\n");
    
   

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
