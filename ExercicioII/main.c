
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char endereco[100];
    int matricula;
} estudante;

int main() {
    int num_estudantes;

    printf("Digite o numero de estudantes: ");
    scanf("%d", &num_estudantes);

    estudante vetor_estudantes[num_estudantes];

    for (int i = 0; i < num_estudantes; i++) {
        printf("\nDigite os detalhes do estudante %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", vetor_estudantes[i].nome); // Lê o nome com espaços

        printf("Endereco: ");
        scanf(" %[^\n]s", vetor_estudantes[i].endereco); // Lê o endereço com espaços

        printf("Matricula: ");
        scanf("%d", &vetor_estudantes[i].matricula);
    }

    printf("\nDetalhes dos estudantes:\n");

    for (int i = 0; i < num_estudantes; i++) {
        printf("\nEstudante %d:\n", i + 1);
        printf("Nome: %s\n", vetor_estudantes[i].nome);
        printf("Endereco: %s\n", vetor_estudantes[i].endereco);
        printf("Matricula: %d\n", vetor_estudantes[i].matricula);
    }

    return 0;
}
