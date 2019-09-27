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

void inicializacao(Pilha *monte){
	monte->inicio = NULL;
	monte->tamanho = 0;
	
}

int empilhar(Pilha *monte, char *dado){
	Elemento *novo_elemento;
	if((novo_elemento = (Elemento *)malloc(sizeof(Elemento))) == NULL)
	return -1;
	if((novo_elemento->dado = (char *) malloc(50 *sizeof(char))) == NULL)
	return -1;
	
	strcpy(novo_elemento->dado,dado);
	novo_elemento->seguinte = monte->inicio;
	monte->inicio = novo_elemento;
	monte->tamanho++;
	
}

int desempilhar(Pilha *monte){
	Elemento *remove_elemento;
	if(monte->tamanho == 0)
	return -1;
	remove_elemento = monte->inicio;
	monte->inicio = monte->inicio->seguinte;
	free(remove_elemento->dado);
	free(remove_elemento);
	monte->tamanho--;
	return 0;
	
}

void exibirPilha(Pilha *monte){
	Elemento *corrente;
	int i;
	Pilha *curso = monte->inicio;
	for(i=0;i<monte->tamanho;++i){
	printf("\t\t%s\n", corrente->dado);
 	curso = corrente->seguinte;
 	
}

}

int main(){
	
    
    return 0;
}

