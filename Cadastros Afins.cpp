#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em meméria
#include <locale.h> //biblioteca de alocações de texto por regiões
#include <string.h> //biblioteca responsável por cuidar das strings

int registro()// int registro
{// inicio de criação de variaveis - strings
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o Número do CPF a Ser Cadastrado: ");
	
	scanf("%s", cpf);//%s strings a armazenar

	strcpy(arquivo, cpf); //responsável por copiar os valores das strings do cpf para o arquivo
	
	FILE *file; //cria o arquivo	
	file = fopen(arquivo,"w"); //cria o arquivo escrever
	fprintf(file,cpf); //salvar o valor da variavel	
	fclose(file); //fecha o valor do cpf
	
	file = fopen(arquivo,"a");
	fprintf(file,"");// Remoção de uma vírgula entre as áspas
	fclose(file);
	
	printf("Digite o Nome a Ser Cadastrado: ");
	scanf("%s",nome);
	fclose(file);
		
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
		
	printf("Digite o Sobrenome a Ser Cadastrado: ");
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
}

int consulta()

{
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem Gramatical
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a Ser Connsultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if (file == NULL)
	{
		printf("Não Foi Possível Abrir o Arquivo Consultado.\n");
	}
		
	while (fgets(conteudo, 200, file) != NULL);
	{
		
	printf("\nEssas são as informações do Usuário: ");
	printf("%s", conteudo);
	printf("\n\n");
	system("pause");
}
	
}

int deletar()

{
	char cpf[40];
	
	printf("Digite o CPF a Ser Deletado:");
	scanf("%s",cpf);
	
	printf("As Informações Foram Deletadas Com Sucesso!!!");//Incerssão de mensagem
	remove(cpf);
	system("pause");
		
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	
{
	printf("O Usuário não se encontra no Cadastro.\n");//Mudança de mensagem
	system("pause");
}
	
}

int main()

{
	
	int opcao=0; //Definindo Variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
{

	system("cls");
		
	setlocale(LC_ALL, "Portuguese"); //Definindo a Linguagem Gramatical
	
	printf("### Cadastros Afins ###\n\n"); //Iínicio do Menu
	printf("Escolha a Opção Desejada:\n\n");
	printf("\t1 - Registrar Nomes:\n\n");
	printf("\t2 - Consultar Nomes:\n\n");
	printf("\t3 - Deletar Nomes: \n\n");
	printf("\t4 - Sair do Cadastro!!!\n\n");
	printf("\n### Escolha a Opção Desejada:  "); //Fim do Menu
		
	scanf("%d", &opcao); //armazenando da escolha do usuario
		
	system("cls");
	
	switch(opcao) //Início da seleção das funções
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

		case 4:// Caso opção 4
			printf(\n Obrigado Por Utilizar O Cadastro!!!\n\n);//Mudança de mensagem
			return 0;
			break;
		
		default:
			printf("Esta Opção Não Está Disponível!\n");
			system("pause");
			break;
			
	    }
	
	}
	
}
	













