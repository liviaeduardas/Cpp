#include <stdio.h>
#include <stdlib.h>


int main() 
{
	FILE* fptr;
	char dados[50];
	
	fptr = fopen("arquivo.txt", "r");
	
	if(fptr == NULL)
		printf("Falha ao abrir o arquivo\n");
	else
	{
		printf("O arquivo foi aberto! \n");
		
		while(fgets(dados, 50, fptr) != NULL)
		{
			printf("%s\n", dados);
		}
		
		fclose(fptr);
		
		printf("Dados lidos com sucesso \n");
	}
	
		

	
	return 0;
}