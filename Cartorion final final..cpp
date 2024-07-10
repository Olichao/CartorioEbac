#include <stdio.h> // Biblioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //Biblioteca de aloca��o de texto por regiao
#include <string.h>// Biblioteca responsavel por cuidar das strings

int registro()
{
	char arquivo[40];
 	char cpf[40];
 	char nome [40];
 	char sobrenome [40];
 	char cargo [40];
 	
 	printf("Digite o CPF do usuario a ser cadastrado");
 	scanf("%s", cpf);
 	
 	strcpy(arquivo, cpf);//responsavel por copiar os valores das string
 	
 	FILE *file;// criar arquivo
 	file = fopen(arquivo, "w");// cria o arquivo 
 	fprintf(file,cpf);// salvo valor da variavel 
 	fclose(file);// fecha o arquivo

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado");
	scanf("%s", nome);
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
		file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome do usuario a ser cadastrado");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado");
	scanf("%s", cargo);
	
	file =fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
}
int consulta()
{

	setlocale(LC_ALL, "portuguese");//Definindo a Linguagem 
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s",cpf); 
	
	FILE *file;
	file = fopen (cpf,"r");
	
	if(file == NULL)
	{
	 printf ("n�o foi possivel abrir o aquivo, n�o localizado /n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	printf(" Essas s�o as informa��es do usuario: ");
	printf ("%s", conteudo);
	printf ("\n\n");
	system("pause");
	
	
	
	
}
int deletar()
{
	printf("Voc� escolheu deletar Nomes\n");
	system ("pause");
}

int main ()
	{
	int opcao=0; //definindo Variaveis 
	int x=1;
	
	
	for(x=1;x=1;)
 {
		system("cls");
	
	setlocale(LC_ALL, "portuguese");//Definindo a Linguagem 
		 	
		printf("\tCart�rio da EBAC \n\n");//Inicio do menu
	
		printf("escolha a op��o desejada\n");
	
		printf("\t-1 - Registrar nomes \n");
	
		printf("\t-2 - Consultar nomes \n");
	
		printf("\t-3 - Deletar nomes \n");
	
		printf("\t-4 - Fechar sistema \n\n");
	
		printf("Op��o:	"); //Fim do Menu 	
	
		scanf("%d", &opcao); //Armazenamento de op��o do usuario
		system("cls");
		switch(opcao)

	{	case 1:
	 	registro();
		break;
	
		case 2:
		consulta();
		break;

		case 3:
		deletar();	
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema \n");
		return 0;
		break;
		
		default:
		printf(" escolha invalida, tente novamente\n");
		system ("pause");
		break;
	} //Fim da sele��o
	}	
		printf("\tCriado por Bruno Moreno\n\n");
}


