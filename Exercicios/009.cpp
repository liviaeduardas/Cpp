/* Gerar um relatorio com nomes, notas e media de alunos de uma turma, e tambem a media geral da turma.*/

#include<iostream>
#include<vector>
using namespace std;

struct Turmas
{
	vector<string> nomes;
	float media_turma;
};

struct Alunos
{
	string nome;
	float notas[4];
	float media, som;
	void somas(float notas[])
	{
		for(int i = 0; i < 4; i++)
		{
			som += notas[i];
		}
		
		media = som / 4;
	}
};

int main()
{
	Alunos aluno;
	Turmas turma1;
	vector<Alunos> cadastros;
	string resp;
	int i = 0;
	float soma_notas;
	
	cout << "Turma 1: " << endl;
	do
	{
		cout << "Nome: ";
		cin >> aluno.nome;
		i += 1;
		for(int i = 0; i < 4; i++)
		{
			cout << "Nota " << i + 1 << ": ";
			cin >> aluno.notas[i];
		}
		aluno.somas(aluno.notas);
		cadastros.push_back(aluno);
		cout << "Deseja cadastrar outro aluno? [s|n] ";
		cin >> resp;
		if(resp != "s" && resp != "n")
		{
			cout << "RESPOSTA INVALIDA!";
			cout << "Deseja cadastrar outro aluno? [s|n] ";
			cin >> resp;
		}
	}while(resp != "n");
	
	for(Alunos aluno : cadastros)
	{
		turma1.nomes.push_back(aluno.nome);
	}
	
	turma1.media_turma = aluno.media / i;
	
	cout << "Turma 1: Cadastros " << endl;
	cout << "Nomes: " ;
	for( int c = 0; c < i; c++)
	{
		cout << turma1.nomes[c] << " ";
	}
	cout << endl <<  "Media da turma: " << turma1.media_turma << endl;

	
	return 0;
}