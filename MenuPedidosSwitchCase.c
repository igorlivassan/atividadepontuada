	/*Em um projeto para um jogo, � necess�rio cria um menu, crie um programa que exiba um menu com op��es
	 (1 - Novo jogo, 2 - Carregar jogo, 3 - Configura��es). Solicite ao usu�rio que escolha uma op��o e, 
	 utilizando o switch case, execute a funcionalidade correspondente � op��o escolhida.
	*/
	
	int main()
	{
	int escolha;
	
	printf("\n \t 1. NOVO JOGO - \t 2. CARREGAR JOGO - 3. CONFIGURACOES ");
	printf("\nSelecione o produto desejado: \t");
	scanf("%d", &escolha);

	switch (escolha)
	case 1: {
	printf("Novo jogo selecionado!");
	break;
	

	case 2: 
	printf("Carregando novo jogo...!");
	break;
	
	case 3: 
	printf("Configura��es...!");
	break;
	}

	    return 0;
	}
