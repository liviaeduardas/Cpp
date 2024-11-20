#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
	int id;
	char nome[50];
	char sobrenome[50];	
};


int main() 
{
	FILE* arquivo;
	
	arquivo = fopen("pessoa.bin", "wb");
	
	if(arquivo == NULL)
	{
		printf("Falha ao abrir o arquivo \n");
		exit(1);
	}
	
	struct pessoa p1 = {1, "Livia", "Silveira"};
	struct pessoa p2;
	
	int flag = 0;
	
	//sutruct, tamanho em bits, quantidade, nome arquivo
	flag = fwrite(&p1, sizeof(struct pessoa), 1, arquivo);
	
	if(flag)
	{
		printf("Pessoa salva com sucesso!");
	}
	else
	{
		printf("Erro ao slavar");
	}
	
	fclose(arquivo);
	
	arquivo = fopen("pessoa.bin", "rb");
	
	// posiciona o ponteiro no início do arquivo
	rewind(arquivo);
	
	fread(&p2, sizeof(p2), 1, arquivo);
	
	printf("Nome: %s %s \n", p2.nome, p2.sobrenome);
	
	fclose(arquivo);
	
	return 0;
}