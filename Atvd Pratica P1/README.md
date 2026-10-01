ALUNOS: José Mauro Santos Borges e Wesley Oliveira Ferreira

----------------------------------------------------------------------------------

Programa feito para a atvd prática 1:

float calcularMedia(float n1, float n2)
Nessa função utilizamos o return da função trazendo a operação da função sem atribuir esse valor a uma variável, fazendo uso do paradigma funcional sempre que eu tenho a mesma entrada e tenho também a mesma saida, evitando efeitos colaterais.

-----------------------------------------------------------------------------------

void MostrarResultado(char nome[], float media)
Nessa função fazemos uso do paradigma imperativo, utilizando estruturas de controle como if e comandos em sequencia.

--------------------------------------------------------------------------------------
int verificarAprovacao(float media)
Ela é função do paradigma funcional pois recebe a média e retorna um valor.

--------------------------------------------------------------------------------------

Na função main utilizamos a mutabilidade do paradigma imperativo com o uso de variáveis que tem seu valor alterado ao longo do programa com atribuições.

---------------------------------------------------------------------------------------

   char nome[70];
   float nota1, nota2, media;
        printf("Digite o nome do aluno: ");
        scanf("%s", &nome);
        printf("Digite a 1° nota: ");
        scanf("%f", &nota1);
        printf("Digite a 2° nota: ");
        scanf("%f", &nota2);

Dentro da função main temos uma caracteristica marcante do paradigma imperativo que é a entrada de dados.














pesquisa IA: Em C, a principal forma de diferenciar os paradigmas imperativo e funcional é observar como o programa realiza suas operações e organiza a solução do problema.

## 1. Paradigma imperativo

O paradigma imperativo descreve como o programa deve executar uma tarefa, por meio de uma sequência de instruções que alteram o estado do programa.

### Características

* Utiliza comandos em sequência.

* Faz uso de variáveis que podem ter seus valores alterados.

* Utiliza estruturas de controle, como `if`, `while` e `for`.

* Emprega atribuições, como `x = x + 1`.

* O programa é organizado em procedimentos e funções.

Exemplo em C:

C

```
#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 10; i++) {
        soma = soma + i;
    }

    printf("%d", soma);

    return 0;
}
```

Como reconhecer: o programa executa um laço, altera o valor de `soma` a cada repetição e controla explicitamente os passos para chegar ao resultado.

## 2. Paradigma funcional

O paradigma funcional prioriza a avaliação de funções, buscando calcular resultados a partir de valores de entrada, com menos alterações no estado do programa.

### Características

* Utiliza funções para realizar cálculos.

* Prioriza funções que retornam resultados.

* Busca evitar alterações de variáveis e estados compartilhados.

* Valoriza a imutabilidade dos dados.

* Pode utilizar recursividade no lugar de laços de repetição.

* Favorece funções puras: para a mesma entrada, produzem sempre a mesma saída, sem efeitos colaterais.

Exemplo em C:

C

```
#include <stdio.h>

int soma(int n) {
    if (n == 1)
        return 1;

    return n + soma(n - 1);
}

int main() {
    printf("%d", soma(10));

    return 0;
}
```

Como reconhecer: a função `soma` calcula o resultado por meio de chamadas recursivas, retornando valores sem utilizar uma variável acumuladora que é modificada a cada repetição.

Observação: C não é uma linguagem puramente funcional. Esse exemplo utiliza recursos de programação funcional, mas também pode ser considerado um programa escrito em uma linguagem procedural.

## 3. Comparação direta

|
Característica

|

Imperativo

|

Funcional

|
| --- | --- | --- |
|

Foco principal

|

Como executar

|

Como calcular

|
|

Variáveis

|

Podem ser alteradas

|

Preferencialmente imutáveis

|
|

Repetição

|

`for`, `while`

|

Recursividade, entre outras técnicas

|
|

Estado

|

Frequentemente modificado

|

Busca evitar modificações

|
|

Funções

|

Podem modificar variáveis externas

|

Preferencialmente puras

|
|

Exemplo típico

|

Acumulador em um laço

|

Cálculo recursivo

|

## 4. Como identificar em uma questão de prova?

É imperativo quando você vê:

`x = x + 1`, variáveis sendo atualizadas, laços e instruções que determinam passo a passo a execução.

É funcional quando você vê:

Funções que recebem valores e retornam resultados, recursividade e pouca ou nenhuma alteração de estado.

Atenção: um programa em C pode combinar os dois paradigmas. A simples presença de uma função não significa que o programa seja funcional, pois funções também são utilizadas na programação imperativa.

Resumo para memorizar: imperativo = comandos e mudanças de estado; funcional = funções, resultados e preferência por evitar mudanças de estado.



