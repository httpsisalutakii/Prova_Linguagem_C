#include <stdio.h>

int main (){
	
	int opcao, num1, num2;
	
	printf("1. Multiplicação\n");
	printf("2. Divisão\n");
	
	printf("Escolha uma opção:");
	scanf("%d", opcao);
	
	
	while (opcao <1 || opcao >2){ 
	
		printf("Digite uma opção válida");
		
		printf("Escreva uma opção");
		scanf("%d", opcao);
  	
}
	printf("Digite o primeiro número");
	scanf("%d", num1);
	
	printf("Digite o segundo número");
	scanf("%d", num2);

	if (opcao == 1){
		printf("O resultado é:", num1 * num2);	
	} else if (num2 == 0){
			printf("Não é possível fazer divisão por zero");
	}

}
