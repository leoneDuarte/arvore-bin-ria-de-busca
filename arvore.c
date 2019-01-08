#include"arvore.h"
//criando arvore vazia
void criarArvore(Titem **Raiz){
		*Raiz = NULL;
}

void inserir(Titem **Raiz, int valor,int maiores, int menores){	
	if(*Raiz == 0){		
		*Raiz = (Titem *)malloc(sizeof(Titem));		
		(*Raiz)->menor = NULL;
		(*Raiz)->maior = NULL;
		(*Raiz)->valor = valor;
	}else{
		if(menores <= maiores){
			inserir((&(*Raiz)->menor), valor,maiores,menores);
			
		}else if(menores >= maiores){
			inserir((&(*Raiz)->maior),valor,maiores,menores);
		}
	}
}

//exibindo arvore
void exibir(Titem **Raiz){
	Titem *Aux;
	Aux = *Raiz;
	printf("ESQUERDA: ");
	while (Aux != NULL){ 
		printf("[%d]",Aux->valor);		
		Aux = Aux->menor;		
	}
}

void exibir_maiores(Titem **Raiz){
	Titem *Aux;
	Aux = *Raiz;
	printf("DIREITA: ");
	while (Aux != NULL){ 
		printf("[%d]",Aux->valor);		
		Aux = Aux->maior;		
	}
}

//contar folhas
int contar_menores(Titem **Raiz){
	Titem *Aux;
	Aux = *Raiz;
	int menores=0;
	
	while (Aux != NULL){ 
		Aux = Aux->menor;
		menores++;		
	}
	return menores;
}

int contar_maiores(Titem **Raiz){
	Titem *Aux;
	Aux = *Raiz;
	int maiores=0;
	
	while (Aux != NULL){	
		Aux = Aux->maior;
		maiores++;				
	}
	return maiores;
}

