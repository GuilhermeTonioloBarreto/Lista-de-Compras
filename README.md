# Lista de Compras #
## Objetivo: Desenvolver uma lista de compras gerada automaticamente para o usuário, a partir da receita de comida registrada pelo usuário e a quantidade de vezes que o usuário irá consumí-la ##

### Utilize o modelo de receitas conforme figura abaixo e escreva: ###

<img src="/exemplo.PNG">

* O nome da receita como comentário
* Na variável "quantidade", escreva a quantidade de vezes que voce irá fazer a receita (0, 1, 2, 3 ...)
* Escreva um laço for idêntico ao dos exemplos abaixo
* Para cada alimento da receita, escreva:
	 		registrarAlimento("nome_do_alimento", quantidade_do_alimento, "unidade")
* "nome_do_alimento" e "unidade" são do tipo string. Assim, devem ficar entre aspas ""
* A variável quantidade_do_alimento eh do tipo int. Ela não pode ficar entre aspas
* Compile o programa no cmd utilizando a funcao 
	 		gcc main.c -o main
* Execute o arquivo main.exe criado
* Será criado uma lista de compras no formato .txt baseado nas receitas que voce irá fazer (e na quantidade de vezes que será feita)

