#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *vetor;

    printf("Digite o numero de posicoes do vetor: ");
    scanf("%d", &n);

    vetor = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

   printf("\nPosicao | Conteudo | Endereco\n");
    for (int i = 0; i < n; i++) {
        printf("%d       | %d        | %p\n", i, vetor[i], (void *)&vetor[i]);
    }

    free(vetor);

    return 0;
}
