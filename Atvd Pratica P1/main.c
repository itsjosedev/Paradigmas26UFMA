#include <stdio.h>
#include <stdlib.h>
// Programa para Calcular a média e verificar a aprovação de alunos
float calcularMedia(float n1, float n2){
    return (n1+n2)/2;
}

int verificarAprovacao(float media){
    if(media >= 7){
       return 1;
    }else{
       return 0;
    }
}

void MostrarResultado(char nome[], float media){
    printf("\nAluno: %s\n",nome);
    printf("Média: %.2f\n", media);
    if(verificarAprovacao(media)){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
}

int main(){
   char nome[70];
   float nota1, nota2, media;
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome);
        printf("Digite a 1° nota: ");
        scanf("%f", &nota1);
        printf("Digite a 2° nota: ");
        scanf("%f", &nota2);
  media = calcularMedia(nota1, nota2);
  MostrarResultado(nome, media);
return 0;
}
