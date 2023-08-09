#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int n1, int *v2, int n2) {
    int *v3 = (int*)malloc((n1 + n2) * sizeof(int));

    for (int i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }

    for (int i = 0; i < n2; i++) {
        v3[n1 + i] = v2[i];
    }

    return v3;
}

int main() {

    int n1, n2;

    printf("Informe o tamanho do primeiro vetor: ");
    scanf("%d", &n1);

    int *v1 = (int*)malloc(n1 * sizeof(int));

    printf("Informe os elementos do primeiro vetor:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Informe o tamanho do segundo vetor: ");
    scanf("%d", &n2);

    int *v2 = (int*)malloc(n2 * sizeof(int));
    if (v2 == NULL) {
        printf("Erro na aloca��o de mem�ria.\n");
        free(v1);
        return 1;
    }

    printf("Informe os elementos do segundo vetor:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int *v3 = uniao(v1, n1, v2, n2);

    printf("Vetor resultante:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    free(v1);
    free(v2);
    free(v3);

    return 0;
}
