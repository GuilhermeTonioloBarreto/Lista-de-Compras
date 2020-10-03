#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// Variaveis Globais
int qnt = 60; // Numero máximo de alimentos que podem ser registrados
char alimentos[60][50];
float indice[60];
char unidade[60][50];

void inicializarArrays(){
	// Atribui a string "" para todos os elementos do array de strings alimentos[][50] e unidade[][50]
	for(int i = 0; i < qnt; i++){
		strcpy(alimentos[i], "");
		strcpy(unidade[i], "");
	}

	// Zera todos os elementos do vetor de inteiros
	for(int i = 0; i < qnt; i++)
		indice[i] = 0.0;
}

int checarStringNoArray(char nomeAlimento[]){
	// Funcao que checa se a string nomeAlimento[] estah dentro do array de strings alimentos[][50]
	// Retorna a localizacao da string se a string estiver dentro do array
	// Retorna -1 se a string nao estiver dentro do array
	for(int i = 0; i < qnt; i++)
		if(strcmp(alimentos[i], nomeAlimento) == 0)
			return i;
	return -1;
}

int addStringNoArray(char nomeAlimento[], float qntAlimento, char un[]){
	// Funcao que adiciona a string nomeAlimento[] na ultima posicao vazia do array de strings alimentos[][50]
	// Retorna 1 se a string for adicionada no array
	// O programa se encerra automaticamente se a string nao for adicionada no array
	for(int i = 0; i < qnt; i++)
		if(strcmp(alimentos[i], "") == 0){
			strcpy(alimentos[i], nomeAlimento);
			indice[i] += qntAlimento;
			strcpy(unidade[i], un);
			return 1;
		}
	printf("Nao foi possivel adicionar o alimento no array de string\n");
	printf("Aumente o numero de alimentos nas variaveis globais do programa\n");
	exit(1);
}

void atualizarIndice(int i, float qntAlimento){
	indice[i] += qntAlimento;
}

void registrarAlimento(char nomeAlimento[], float qntAlimento, char un[]){
	int i = checarStringNoArray(nomeAlimento);
	if(i == -1)
		addStringNoArray(nomeAlimento, qntAlimento, un);
	else
		atualizarIndice(i, qntAlimento);
}
