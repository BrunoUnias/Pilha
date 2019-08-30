#include <stdio.h>
#include <stdlib.h>

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


int main(int argc, char *argv[]) {
	return 0;
}
