/*FUNCAO:
 gerar um registro para representar uma turma com determinados alunos, contendo nomes, notas de 4 provas e a suas medias.*/
 
#include<iostream>
#include<vector>

using namespace std;

struct Cadastros
{
	string nome;
	float notas[4];
	float med;
	
	void soma_media( float nota[])
	{
		float media = 0;
		float soma = 0;
		for(int i = 0; i < 4; i ++)
		{
			soma += nota[i];
		}
		media = soma / 4;
		med = media;
	}
};
	Cadastros pessoas;
	vector<Cadastros> alunos;
	
void mostra_aluno()
{
	cout << "ALUNOS CADASTRADOS: ";
	for(Cadastros aluno : alunos)
	{
		cout << "Nome: " << aluno.nome << endl;
		cout << "Notas: " ;
		for(int i = 0; i < 4; i++)
		{
			cout << aluno.notas[i] << " ";
		}
		cout << endl << "Media: " << aluno.med << endl;
		cout << "-------------------" << endl;
	}
}

int main()
{
	string resp;
	
	cout << "CADASTRANDO ALUNOS" << endl;
	do
	{
		cout << "Nome: ";
	cin >> pessoas.nome;
		for(int i = 0; i < 4; i++)
		{
			cout << "Nota " << i + 1 << ": ";
			cin >> pessoas.notas[i];
		}
		cout << "-------------------" << endl;
		pessoas.soma_media(pessoas.notas);
		alunos.push_back(pessoas);
		cout << "Deseja cadastrar outro aluno? [s|n] ";
		cin >> resp;
		if(resp != "s" && resp != "n")
		{
			cout << "RESPOSTA INVALIDA!";
			cout << "Deseja cadastrar outro aluno? [s|n] ";
			cin >> resp;
		}
	}while(resp != "n");
	
	
	
	mostra_aluno();
	
	return 0 ;
	
}