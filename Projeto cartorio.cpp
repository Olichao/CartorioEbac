#include <stdio.h> // Biblioteca de comunicação com o usuario
#include <stdlib.h> //Biblioteca de alocação de espaço em memoria
#include <locale.h> //Biblioteca de alocação de texto por regiao
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
	 printf ("Cpf não cadastrado, tente novamente \n");
	 
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	printf(" Essas são as informações do usuario: ");
	printf ("%s", conteudo);
	printf ("\n\n");
	system("pause");
	
	
	
	
}
int deletar()
{    char cpf[40];

	printf("Digite o cpf que quer deletar do sistema:\n");
	scanf("%s",cpf);	
	FILE *file;
	file = fopen(cpf,"r");		
	if (file == NULL);
		{
			printf("o cpf digitado nao foi encontrado no sistema.\n");
			system("pause");
			return 0;
			
		}{
	
		
	printf("Deseja deletar esse aluno do sistema ?");
	printf("%s" , cpf);
	printf("\n Digite (S) ou (N) \n\n");
	
	getchar();
	
	char opcao;
	opcao = getchar();
	
if (opcao == 's' || opcao == 'S')
	{
		if (remove(cpf) ==0);
		{printf ("Aluno deletado com sucesso \n\n");
		
		}
		system("pause");
	}
	else if(opcao == 'n'|| opcao == 'N')
	{
		printf("retornando ao menu principal\n");
		system("pause");
		}}
	 
}

int main ()
	{
	int opcao=0; //definindo Variaveis 
	int laco=1;	
		setlocale(LC_ALL, "portuguese");//Definindo a Linguagem
	char senhadigitada[]="a";
	int comparacao; 
	
		printf(" \tCartório da EBAC \n\n");
		printf("\tLogin Administrados\n\nDigite sua senha:");
		scanf("%s", senhadigitada);
		
	comparacao = strcmp(senhadigitada, "admin");
		
	if(comparacao == 0)
	
	{
		system ("cls");
		for (laco=1; laco=1;)	
 	{
	
	
	setlocale(LC_ALL, "portuguese");//Definindo a Linguagem 
		 	
		printf(" \tCartório da EBAC \n\n");//Inicio do menu
		printf(" escolha a opção desejada do menu:\n\n");
		printf("\t-1 - Cadastrar aluno \n");
		printf("\t-2 - consultar CPF \n");
		printf("\t-3 - deletar CPF \n");
		printf("\t-4 - Fechar Programa \n");
		printf("Opção:	"); //Fim do Menu 	
		scanf("%d", &opcao); //Armazenamento de opção do usuario
		system("cls");
		switch(opcao)
	{	case 1:
	 	registro();
	 		system ("cls");
		break;
	
		case 2:
		consulta();
			system ("cls");
		break;

		case 3:
		deletar();	
			system ("cls");
		break;
		
		case 4:
		printf("Obrigado por utilizar nosso cartorio, o programa ira fechar\n\n");
		return 0;
		break;
			
		default:
		printf("Essa escolha e invalida, tente novamente\n");
		system ("pause");
		break;}
}	 //Fim da seleção
}else
		printf("senha incorreta!");
}

