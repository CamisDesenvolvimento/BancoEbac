#include <stdio.h> // biblioteca de comunica��o com usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��o de texto por regi�o 
#include <string.h> // biblioteca responsavel por cuidar das string

int registro()
{
	    char arquivo [40];
	    char cpf[40];
	    char nome[40];
	    char sobrenome[40];
	    char cargo[40];
	    
	    printf("Digite o CPF a ser cadastrado: ");
	    scanf("%s", cpf);
	    
	    strcpy(arquivo,cpf); // Responsavel por copiar o valor das string
	    
	    FILE *file; // Cria o arquivo 
	    file = fopen(arquivo,"w"); // Cria o arquivo 
	    fprintf(file,cpf); // Salvo o valor da variavel 
	    fclose(file); // Fecho o arquivo 
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,",");
	    fclose(file);
	    
	    printf("Digite o nome a ser cadastrado: ");
	    scanf("%s", nome);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,nome);
	    fclose(file);
	    
	    printf("Digite o sobrenome a ser cadastrado: ");
	    scanf("%s", sobrenome);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,sobrenome);
	    fclose(file);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,",");
	    fclose(file);
	    
	    printf("Digite o cargo a ser cadastrado: ");
	    scanf("%s",cargo);
	    
	    file = fopen(arquivo,"a");
	    fprintf(file,cargo);
	    fclose(file);
	    
	    system("pause");
	    
	    
	    
}

int consulta()
{
	    setlocale(LC_ALL,"Portuguese"); // Definindo a linguagem
	    
	    char cpf[40];
	    char conteudo[400];
	    
	    printf("Digite o CPF a ser consultado: ");
	    scanf("%s",cpf);
	    
	    FILE *file;
	    file  = fopen(cpf,"r");
	    
	    if(file == NULL)
	    {
	    	printf("N�o foi possivel abrir o arquivo, n�o localizado!. \n");
		}
	    
	    while(fgets(conteudo, 400, file) != NULL)
	    {
	    	printf("\nEssas s�o as informa��es do Usuario");
	    	printf("%s",conteudo);
	    	printf("\n\n");
	    	
		}
		
		system("pause");
		
}

int deletar()
{
	    printf("Voce escolheu deletar nomes\n");
		system("pause");
}

int main()
{
	int opcao=0; // Definindo as variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	 system("cls");
	
	 setlocale(LC_ALL,"Portuguese"); // Definindo a linguagem 
	
 	 printf("### Banco da EBAC ### \n \n"); // Inicio do Menu
  	 printf("Escolha a Op��o desejada do menu: \n \n");
 	 printf("\t1 - Registrar nomes\n");
 	 printf("\t2 - Consultar nomes\n");
	 printf("\t3 - Deletar nomes\n");
	 printf("\t4 - Sair do banco\n");
	 printf("Op��o - "); // Fim do Menu
	
	 scanf("%d", &opcao); // Armazenando a escolhado usuario 
	
	 system("cls");
	 
	 switch(opcao)
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
			printf("Obrigado por ultilizar o nosso banco\n");
			return 0;
		break;
		
		
		default: 
		    printf("Essa opcao n�o est� disponivel\n");
		system("pause");
		break;
		
			
	 }
	   
   }
}



