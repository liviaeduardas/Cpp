/*ler n codigos de profissao e o respectivo nome da profissao.
//ler um numero indeterminado de codigos e informa, para cada codigo lido, o nome da profissao correspondente, caso exista.*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Profissionais
{
	string nome;
	string profissao;
	int codigo;
};

Profissionais pessoas;
vector<Profissionais> cadastros;

void procurar(int cod)
{
	for(Profissionais pessoa: cadastros)
	{
		if(pessoa.codigo == cod)
		{
			cout << "Nome: " << pessoa.nome << endl;
			cout << "Profissao: " << pessoa.profissao  << endl;
			cout << "---------------" << endl;
		}
	}
}

void cadastrar()
{
	cout << "Nome: ";
	cin >> pessoas.nome;
	cout << "Profissao: ";
	cin.ignore();
	getline(cin, pessoas.profissao);
	cout << "Codigo: ";
	cin >> pessoas.codigo;
	cadastros.push_back(pessoas);
}

void mostrarProf()
{
	for(Profissionais pessoa: cadastros)
	{
		cout << "Profissionais cadastrados:" << endl;
		cout << "Nome: " << pessoa.nome << endl;
		cout << "Profissao: " << pessoa.profissao << endl;
		cout << "Codigo: " << pessoa.codigo << endl;
		cout << "-----------------" << endl;
	}
}
int main()
{
	int n1;
	int numero;
	do
	{
		cout << "MENU: " << endl;
		cout << "1 = cadastrar profissional | 2 = mostrar profissionais | 3 = procurar pelo codigo | 0 sair " << endl;
		cout << "Resp: ";
		cin >> numero;
		switch(numero)
		{
			case 0:
				break;
			case 1:
				cadastrar();
				break;
			case 2:
				mostrarProf();
				break;
			case 3:
				cout << "Procurar profissional: " << endl;
				cout << "Codigo: ";
				cin >> n1;
				procurar(n1);
				break;
			default:
				cout << "Invalido!!!" << endl;
				break;	
		}
	}while(numero != 0);

	return 0;
}