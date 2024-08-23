/*Cadastro de carros (modelo, placa e ano) em uma struct*/

#include <iostream>
using namespace std;

struct Carro
{
	string modelo;
	char placa[7];
	int ano;	
};

int main()
{
	int tamanho;
	cout << "Informe a quantidade de carros: ";
	cin >> tamanho;
	cout << endl;
	
	struct Carro carros[tamanho];
	for(int i = 0; i < tamanho; i++)
	{
		cout << "CADASTRO CARRO " << i +1 << endl;
		cout << "MODELO: ";
		cin >> carros[i].modelo;
		cout << "PLACA: ";
		cin >> carros[i].placa;
		cout << "ANO: ";
		cin >> carros[i].ano;
		cout << "----------------" << endl;	
	}
	
	cout << endl;
	cout << "  CARROS CADASTRADOS " << endl;
	for(int i = 0; i < tamanho; i++)
	{
		cout << "MODELO: " << carros[i].modelo << endl;	
		cout << "PLACA: " << carros[i].placa << endl;	
		cout << "ANO: " << carros[i].ano << endl;	
		cout << "----------------" << endl;
	}
	
	return 0;
}