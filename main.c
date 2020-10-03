#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "funcoes.c"

int main(){
	int quantidade = 0;
	inicializarArrays();
	FILE *fp;

	// Lista de Ingredientes


	// Arroz, feijao e Ovo
	quantidade = 1;
	for(int i = 0; i < quantidade; i++){
		registrarAlimento("arroz", 0.4, "kg");
		registrarAlimento("feijao", 0.2, "kg");
		registrarAlimento("ovo", 2, "un");
	}

	// Arroz, feijao e salada
	quantidade = 1;
	for(int i = 0; i < quantidade; i++){
		registrarAlimento("arroz", 0.4, "kg");
		registrarAlimento("feijao", 0.2, "kg");
		registrarAlimento("salada", 2, "un");
	}


	// Abrir arquivo .txt
	fp = fopen("lista_de_compras.txt", "w");

	// Exibir lista de compras e salva-la em .txt
	printf("Lista de Compras\n\n");
	fprintf(fp, "Lista de Compras\n\n");

	for(int i = 0; i < qnt; i++){
		if(strcmp(alimentos[i], "") != 0){
			printf("( ) %-15s = %4.2f %s\n", alimentos[i], indice[i], unidade[i]);
			fprintf(fp, "( ) %-15s = %4.2f %s\n", alimentos[i], indice[i], unidade[i]);
		}
	}

	// Fechar arquivo .txt
	fclose(fp);

	printf("\nSeu arquivo .txt jah foi gerado\n");
	//printf("Digite qualquer tecla para encerrar o programa ...\n");
	//getchar();

	return 0;
}