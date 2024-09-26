/* gerar um registro de uma empresa com n funcionarios e verificar quais funcionarios possuem salario acima da media.
o algoritmo deve socilitar os dados do funcionario individualmente para so depois calcular a media salarial.*/

#include<iostream>
#include<vector>
using namespace std;

struct Funcionarios
{
	string nome;
	float salario;	
};

Funcionarios pessoas;
vector<Funcionarios> funcionario;

void Cadastros()
{
	string resp;
	do{
		cout << "Nome: ";
		cin >> pessoas.nome;
		cout << "Salario: R$";
		cin >> pessoas.salario;
		cout << "Deseja cadastrar outras pessoas? [s|n] ";
		cin >> resp;
		funcionario.push_back(pessoas);
		if(resp != "n" && resp != "s")
		{
			cout << "Deseja cadastrar outras pessoas? [s|n] ";
			cin >> resp;
		}
	}while(resp != "n");
}

void acima()
{
	float soma = 0;
	int count = 0;
	float media;
	
	for(Funcionarios pessoa : funcionario)
	{
		soma += pessoa.salario;
		count += 1;
	}
	
	media = soma / count;
	
	cout << "Pessoas com salario acima da media: ";
	
	for (Funcionarios pessoa : funcionario)
	{
		if( pessoa.salario > media)
			cout << pessoa.nome << ", ";
	}
}

int main()
{
	
	cout << "Cadastro de funcionarios: " << endl;
	Cadastros();
	cout << endl;
	acima();
	
	return 0;
}