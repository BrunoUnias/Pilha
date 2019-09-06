#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ElementoPilha{
	int *dado;
	struct Pilha *seguinte;
	
}Elemento;

typedef struct Lista{
	Elemento *inicio;
	int tamanho;
	
}Pilha;

void inicializar(Pilha *monte){
	monte->inicio = NULL;
	monte->tamanho = 0;
	
}

int empilhar(Pilha *monte,int *inicio){
	Elemento *novo;
	if((novo = (Elemento *) malloc(sizeof(Elemento))) == NULL)
	return -1;
	if((novo->dado = (int *) malloc(50 *sizeof(int))) == NULL)
	return -1;
	
	monte->inicio = novo;
	novo->seguinte = monte->inicio;
	monte->inicio = novo;
	monte->tamanho++;
	
}

int desempilhar(Pilha *monte){
	Elemento *remove_elemento;
	if(monte->tamanho == 0)
	return -1;
	remove_elemento = monte->inicio;
	monte->inicio = monte->inicio->seguinte;
	//free(remove_elemento->dado);
	free(remove_elemento);
	monte->tamanho--;
	return 0;
	
}

void exibirPilha(Pilha *monte){
	Elemento *corrente;
	int i;
	Pilha *curso = monte->inicio;
	for(i = 0; i<curso->tamanho;i++){
		printf("\t\t%s\n",corrente->dado);
		curso = corrente->seguinte;
		
	}
}

int main() {
	int opc,a;
	Pilha *i;
	
	printf("Escolha a opcao.");
	printf("1-empilhar\n2-desempilhar\n3-exibir\n4-sair");
	scanf("%d",&opc);
	switch(opc){
		case 1:
			empilhar(i,a);
			break;
		case 2:
			desempilhar(i);
			break;
		case 3:
			exibirPilha(i);
			break;
	}
	return 0;
}
