/* EXERCÍCIO 1
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.*/

#include <iostream>
#include <string>
using namespace std;

struct Cadastro
{
	string nome;
	int idade;
	string bairro;
	string rua;
	int numero;
	int cep;
};

int main()
{
	Cadastro pessoa1;
	cout << "--- Cadastro de Informacoes ---" << endl;
	cout << "________________________________"<< endl;
	cout << "Nome: ";
	cin >> pessoa1.nome;
	cout << "Idade: ";
	cin >> pessoa1.idade;
	cout << "Endereco:" << endl;
	cout << "-  CEP: ";
	cin >> pessoa1.cep;
	cout << "-  Rua: ";
	cin.ignore();
	getline(cin, pessoa1.rua);
	cout << "-  Numero: ";
	cin >> pessoa1.numero;
	cout << "-  Bairro: ";
	cin.ignore();
	getline(cin, pessoa1.bairro);
	cout << "________________________________"<< endl;
	
	cout << endl << "--- Informacoes Cadastradas ---" << endl;
	cout << "________________________________"<< endl;
	cout << "Nome: " << pessoa1.nome << endl;
	cout << "Idade: " << pessoa1.idade << endl;
	cout << "Endereco:" << endl;
	cout << "-  CEP: " << pessoa1.cep << endl;
	cout << "-  Rua: " << pessoa1.rua << ", " << pessoa1.numero << ", " << pessoa1.bairro << endl;
	cout << "________________________________"<< endl;
	
	return 0;
}