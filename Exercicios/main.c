#include <stdio.h>
#include <stdlib.h>

//criando um arquivo
int main()
{
  //criando tipo de dado com o ponteiro FILE
	FILE* fptr;
	
	// mensagem que vai aparecer no arquivo
	char conteudo[50] = "OLA MUNDOOO !!!!";
	
	//fopen abre o arquivo,
	// passa o caminho do arquivo e o modo que vai abrir o arquivo
	fptr = fopen("Arquivo.txt", "w");
	
	if(fptr == NULL)
	{
	//testando se o arquivo está nulo
		printf("O arquivo nao esta aberto");
		exit(0);
	}
	else
	{
		printf("O arquivo foi criado com sucesso\n");
		
		//Escrevendo o conteudo no arquivo, pode passar a frase sem criar uma variavel para ela 
		fputs(conteudo, fptr);
		fputs("\n", fptr);
		
		//fechando o arquivo
		fclose(fptr);
		
		printf("Dado criado com sucesso!!!\n");
	}
		
	return 0;
}