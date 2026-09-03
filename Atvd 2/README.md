POV -> Caixa Eletrônico
menu de opções,
|> Consultar Saldo
|> Depositar
|> Sacar 
|> Encerrrar

*\Inicio do Programa*\

*\ Escolha a operação *\

Variaveis:
    float saldo;
    int opção;
    float valor;
    encerrar = true;

mostrar opções: (1.Consultar Saldo | 2.Depositar | 3.sacar | 4.encerrar)
      ler opção:
  se opção for 1:
    mostrar saldo.
  se opção for 2:
    ler valor:
       se valor > 0 
       valor = valor + saldo
    senão: mostrar "valor invalido"
  se opção for 3:
    ler valor:
       se valor > saldo
       mostrar "saldo insuficiente"
       senão:
       saldo = saldo - valor
       mostrar "saque realizado"
  se opção for 4:
      encerrar = verdadeiro
      mostrar "sistema encerrado"
  *\fim do programa*\
   
