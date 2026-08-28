inicio
  leia(nome, idade, saldo, preco, qtd)
  total = preco * qtd

  se idade >= 18 e saldo >= total entao
    escreva("Sucesso! Produto(s): ", qtd, " | Valor: R$ ", total)
  senao se idade >= 18 e saldo < total entao
    escreva("Erro: Sem saldo suficiente")
  senao se idade < 18 e saldo >= total entao
    escreva("Erro: Cliente menor de idade")
  senao  se idade < 18 e saldo < total entao
    escreva("Erro: Menor de idade e sem saldo")
fim
