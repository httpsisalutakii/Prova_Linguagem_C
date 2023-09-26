#include <stdio.h>

int main(){
	
	int opcao, a, b;
			
	printf("------ MENU ------\n");
	printf("A. Cadastrar\n");
	printf("B. Buscar\n");
	printf("C. Atualizar\n");
	printf("D. Excluir\n");
	printf("E. Sair\n");
	printf("------------------\n");
	
	scanf("%d", a, b);
	
	switch(opcao){
		case 1:
			printf("Você escolheu a opção A. Cadastrar");
			break;
		case 2:
			printf("Você escolheu a opção B. Buscar");
			break;
		case 3:
			printf("Você escolheu a opção C. Atualizar");
			break;
		case 4:
			printf("Você escolheu a opção D. Excluir");
			break;
		case 5:
			printf("Você escolheu a opção A. Sair");
			break;
		
	}
	
	
}
