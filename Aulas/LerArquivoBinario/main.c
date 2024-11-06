#include <stdio.h>
#include <stdlib.h>



int main() 
{
	FILE* fptr;
	int flag;
	
	fptr = fopen("arquivo.bin", "wb");
	if(fptr == NULL)
	{
		printf("Erro ao abrir arquivo");
		exit(1);
	}
	else
	{
		int num = 10;
		//parametros(endereço de memoria, tamanho me bits, quantos elementos, ponteiro arquivo)
		flag = fwrite(&num, sizeof(num), 1, fptr);
		
		if(!flag)
		{
			printf("Operacap falhou!!!");
		}
		else
		{
			printf("Operacao realizada com sucesso!!!");
		}
	}
	
	return 0;
}