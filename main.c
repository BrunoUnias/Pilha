#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ElementoLista{
	char *dado;
	struct ElementoLista *seguinte;
	
}Elemento;

typedef struct ListaDetectada{
	Elemento *inicio;
	int tamanho;
	
}Pilha;

void inicialização(Pilha *monte){
	monte->inicio = NULL;
	monte->tamanho = 0;
	
}

int empilhar(Pilha *monte,char *dado){
	Elemento *novo_elemento;
	if((novo_elemento = (Elemento *) malloc(sizeof(Elemento))) == NULL)
	return -1;
	if((novo_elemento->dado = (char *) malloc(50 *sizeof(char))) == NULL)
	return -1;
	
	strcpy(novo_elemento->dado,dado);
	novo_elemento->proximo = monte->inicio;
	monte->inicio = novo_elemento;
	monte->tamanho++;
	
}

int desempilhar(Pilha *monte){
	Elemento *remov_elemento;
	if(monte->tamanho == 0)
	return -1;
	remov_elemento = monte->inicio;
	tas->inicio = tas->inicio->proximo;
	free(remov_elemento->dado);
	free(remov_elemento);
	monte->tamanho--;
	return 0;
	
}


int main(int argc, char *argv[]) {
	return 0;
}
