#include"arvore.h"

main(){	
	int i,j,tamanho=0,sair=1;
	int valor;
	int menores,maiores,diferenca;
	Titem **Raiz;	
	criarArvore(&Raiz);
	
	
	while(sair != 0){		
		printf("\t\t\tINSIRA UM VALOR NA ARVORE:     >>");
		scanf("%d",&valor);
		system("cls");	
		menores = contar_menores(&Raiz);
		maiores = contar_maiores(&Raiz);	
		inserir(&Raiz,valor,maiores,menores);
	
	
			
		printf("\n\n\t\t\t[0]-SAIR  >>");
		scanf("%d",&sair);
	}
	
	
	printf("\nDIREITO: %d   ESQUERDO: %d \n", maiores, menores);
	exibir(&Raiz);
	printf("\n\n");
	exibir_maiores(&Raiz);		

}
	
