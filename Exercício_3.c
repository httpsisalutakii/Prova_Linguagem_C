#include <stdio.h>

int main (){
	
	int opcao, num1, num2;
	
	printf("1. Multiplica��o\n");
	printf("2. Divis�o\n");
	
	printf("Escolha uma op��o:");
	scanf("%d", opcao);
	
	
	while (opcao <1 || opcao >2){ 
	
		printf("Digite uma op��o v�lida");
		
		printf("Escreva uma op��o");
		scanf("%d", opcao);
  	
}
	printf("Digite o primeiro n�mero");
	scanf("%d", num1);
	
	printf("Digite o segundo n�mero");
	scanf("%d", num2);

	if (opcao == 1){
		printf("O resultado �:", num1 * num2);	
	} else if (num2 == 0){
			printf("N�o � poss�vel fazer divis�o por zero");
	}

}
