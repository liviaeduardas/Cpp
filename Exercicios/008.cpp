/*Gerar um registro para representar um determinado aluno, contendo nome, notas de 4 provas e a sua media.*/

#include<iostream>
using namespace std;

struct Aluno
{
	string nome;
	float notas[4];
	float soma;
	float med;
	
	void media(float notas[])
	{
		for(int i = 0; i < 4; i++)
		{
			soma += notas[i]; 
		}
		 med = soma / 4;
		 cout <<"Media: " << med;
	}
};

int main()
{
	Aluno aluno1;
	
	cout << "INFORMACOES ALUNO" << endl;
	cout << "NOME: ";
	cin >> aluno1.nome;
	for(int i = 0; i < 4; i++)
	{
		cout << "Nota " << i + 1 << ": ";
		cin >> aluno1.notas[i];
	}
	
	aluno1.media(aluno1.notas);
	
	return 0;
}