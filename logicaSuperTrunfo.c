#include <stdio.h>
  int main() {
    
    
    char estado, estadob [50];
    int codigo, codigob;
    char nome, nomeb[50];
    int populacaoA, populacaoB;
    float area, areab;
    float PIB, PIBb;
    int pontos_turisticos, pontos_turisticosb;
    printf("Desafio Super Trunfo - Países\n");
    printf("Digite o estado\n");
    scanf("%s", &estado);
    printf("Digite o estado2\n");
    scanf("%s", &estadob);
    printf("Digite o Codigo\n");
    scanf("%d", &codigo);
    printf("Digite o Codigo2\n");
    scanf("%d", &codigob);
    printf("Digite o nome\n");
    scanf("%s",&nome);
    printf("Digite o nome2\n");
    scanf("%s",&nomeb);
    printf("Digite a Populacao\n");
    scanf("%d", &populacaoA);
    printf("Digite a Populacao2\n");
    scanf("%d", &populacaoB);
    printf("Digite a area\n");
    scanf("%f", &area);
    printf("Digite a area2\n");
    scanf("%f", &areab);
    printf("Digite o PIB\n");
    scanf("%f", &PIB);
    printf("Digite o PIB2\n");
    scanf("%f", &PIBb);
    printf("Digite os pontos turisticos\n");
    scanf("%d", &pontos_turisticos);
    printf("Digite os pontos turisticos2\n");
    scanf("%d", &pontos_turisticosb);
    printf("Dados cadastrados com sucesso\n");
   
   
   if (populacaoA > populacaoB)
   
   {
    printf("Cidade 1 tem populacao maior que cidade 2\n");
   }
   
    
   

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
