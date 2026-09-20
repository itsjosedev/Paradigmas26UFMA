#include <stdio.h>
float calcular_media(float soma, int qtd) {
    return soma / qtd;
}
char classificar(float media) {
    if (media >= 9.5) return 'A';
    if (media >= 8.0) return 'B';
    if (media >= 7.0) return 'C';
    if (media >= 6.0) return 'D';
    return 'E';
}
char* avaliar_aproveitamento(char classe) {
    if (classe == 'D' || classe == 'E') return "Não ap.";
    return "Aproveita";
}
int main() {
    char disc[50];
    int qtd;
    float soma = 0, nota;

    printf("Disciplina e qtd de notas: ");
    scanf("%s %d", disc, &qtd);

    for(int i = 0; i < qtd; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    char classe = classificar(calcular_media(soma, qtd));
    char* aprov = avaliar_aproveitamento(classe);

    printf("\nSaída: %s | %c | %s\n", disc, classe, aprov);

    return 0;
}
