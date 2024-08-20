#include <iostream>
#include <string>
using namespace std;

int main()
{
	string nome;
	int idade;
	string nome_completo;
	
	cout << "Ola!!!!" << endl;

	cout << "Entre seu nome: ";
	cin >> nome;

	cout << "Informe sua idade: ";
	cin >> idade;
	cout << "Seu nome e " << nome << " e voce tem " << idade << " anos" << endl;

	cout << "Qual o nome completo? ";
	cin.ignore();
	getline(cin,nome_completo);
	cout << "Seu nome completo e " << nome_completo;
	
	return 0;
}