	/*Considerando um projeto de e-commerce, implemente um programa que solicite ao usu�rio o c�digo do produto
	 (1 - Camiseta, 2 - Cal�a, 3 - Sapato). 
	 Com base na escolha do usu�rio, exiba a mensagem informando o produto selecionado e seu pre�o.
	*/
	
	int main()
	{
		
	int escolha = 0;
	
	printf("\n \t 1. camiseta - \t 2. cal�a - 3. sapato ");
	printf("\nSelecione o produto desejado: \t");
	scanf("%d", &escolha);
	
	if (escolha == 1) {
		printf("Voc� escolheu a opcao '1 - CAMISETA' no valor de R$49,90");
	}
	else if (escolha == 2) {
		printf("Voc� escolheu a opcao '2 - CAL�A' no valor de R$79,90");
	}
	else if (escolha == 3) {
		printf("Voc� escolheu a opcao '1 - SAPATO' no valor de R$129,90");
	}
	else {
	printf("Opcao invalida!");
	}
	    return 0;
	}
