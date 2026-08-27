solicita o nome do cliente, idade, saldo disponivel, preço do produto e quantidade desejada:

	Situações:
1- cliente idade e saldo
2- cliente idade e !saldo
3- cliente !idade e saldo
4- cliente !idade e !saldo

gerar comprovante:
(se o cliente conseguiu comprar o pronto, exibir o valor e quantidade do produto;
 se o cliente não conseguiu, mostar o motivo.)

===================================================================================================

variaveis:

nomeCliente
idadeCliente
saldoDisponivel
precoProduto
quantidadeProduto

principal:

receber nomeCliente
receber idadeCliente
receber saldoDisponivel
receber precoProduto
receber quantidadeProduto


se idadeCliente >= 18 e saldoDisponivel >= (precoProduto * quantidadeProduto):

	escreva("Compra efetuada")


se idadeCliente >= 18 e saldoDisponivel < (precoProduto * quantidadeProduto):
	
	escreva("Compra não efetuada: Cliente sem saldo sulficiente")


se idadeCliente < 18 e saldoDisponivel >= (precoProduto * quantidadeProduto):

	escreva("Compra não efetuada: Cliente menor de idade")

se idadeCliente < 18 e saldoDisponivel < (precoProduto * quantidadeProduto):

	escreva("Compra não efetuada: Cliente menor de idade e sem saldo sulficiente")
