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
			printf("Voc� escolheu a op��o A. Cadastrar");
			break;
		case 2:
			printf("Voc� escolheu a op��o B. Buscar");
			break;
		case 3:
			printf("Voc� escolheu a op��o C. Atualizar");
			break;
		case 4:
			printf("Voc� escolheu a op��o D. Excluir");
			break;
		case 5:
			printf("Voc� escolheu a op��o A. Sair");
			break;
		
	}
	
	
}
