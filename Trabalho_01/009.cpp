/* EXRCÍCIO 09
Construa uma estrutura aluno com nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela. */

#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Cadastros
{
	string nome;
	int matricula;
	string curso;	
};

int main()
{
	Cadastros aluno;
	vector<Cadastros> alunos;
	
	for(int i = 0; i < 5; i++)
	{
		cout << "--- CADASTRO DO ALUNO " << i + 1 << " ---" << endl;
		cout << "NOME: ";
		cin >> aluno.nome;
		cout << "NUMERO DA MATRICULA: ";
		cin >> aluno.matricula;
		cout << "NOME CURSO: ";
		cin.ignore( );
		getline(cin, aluno.curso);
		cout << "--------------------------------" << endl << endl;
		alunos.push_back(aluno);
	}
	
	
	cout << endl << "   ALUNOS ACADASTRADOS" << endl;
	for(Cadastros informacao : alunos)
	{
		cout << "Cadastro do aluno(a): " << informacao.nome << endl;
		cout << "  - Numero da matricula: " << informacao.matricula << endl;
		cout << "  - Curso: " << informacao.curso << endl;
		cout << "------------------------------" << endl;
	}
	return 0;
}