#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�es
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro()// int registro
{// inicio de cria��o de variaveis - strings
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o N�mero do CPF a Ser Cadastrado: ");
	
	scanf("%s", cpf);//%s strings armazenar

	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; //cria o arquivo	
	file = fopen(arquivo,"w"); //cria o arquivo escrever
	fprintf(file,cpf); //salvar o valor da variavel	
	fclose(file); //fecha o valor do cpf
	
	file = fopen(arquivo,"a");
	fprintf(file,"");
	fclose(file);
	
	printf("DIgite o Nome a Ser Cadastrado: ");
	scanf("%s",nome);
	fclose(file);
		
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
		
	printf("DIgite o Sobrenome a Ser Cadastrado: ");
	scanf("%s",sobrenome);

	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
			
	printf("Digite o Cargo a Ser Cadastrado: ");
	scanf("%s",cargo);
	fclose(file);

	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	


//	printf("Voc� Escolheu o Registro de Nomes!\n");
//	system("pause");
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a Ser Connsultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if (file == NULL)
	{
		printf("n�o foi Poss�vel abrir o Arquivo Localizado.\n");
	}
		
	while (fgets(conteudo, 200, file) != NULL);
	{
	
	
	printf("\nEssas s�o as informa��es do Usu�rios: ");
	printf("%s", conteudo);
	printf("\n\n");
}
	

		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
		system("pause");

	//printf("Voc� Escolheu Consultar Nomes!\n");
	//system("pause");
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do Usu�rio a Ser Deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("O Usu�rio n�o se encontra no Sistema.\n");
		system("pause");
	}
	
}

int main()
{
	
	int opcao=0; //Definindo Vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
{

		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem
		printf("### Cart�rio da EBAC ###\n\n"); //I�nicio do Menu
		printf("Escolha a Op��o Desejada do Menu:\n\n");
		printf("\t1 - Registrar Nomes:\n\n");
		printf("\t2 - Consultar Nomes:\n\n");
		printf("\t3 - Deletar Nomes: \n\n");
		printf("\t4 - Sair do Cadastro!\n\n");
		printf("Op��o a Ser Escolhida: "); //Fim do Menu
		
		scanf("%d", &opcao); //armazenando da escolha do usuario
		
		system("cls");
	
	switch(opcao) //In�cio da sele��o das fun��es
	{
		case 1:
			registro();
			break;
		
		case 2:
			consulta();
			break;
		
		case 3:
			deletar();
			break;
		
		case 4:
			printf("\n\n### Obrigado!!! ###\n\n");
			return 0;
			break;
		
		default:
			printf("Esta Op��o N�o Est� Dispon�vel!\n");
			system("pause");
			break;
			
	    }
	
	}
	
}
	













