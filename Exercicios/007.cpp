// EXERCÍCIO CADASTRO DE CARROS COM SWITCH CASE E FUNÇÕES

#include<iostream>
#include<vector>
using namespace std;

struct Carro
{
	string modelo;
	int ano;
	string placa;
};

Carro carro;
vector<Carro> carros;
string placa;

void inserir()
{
	cout << endl;
	cout << "CADASTRO CARRO " << endl;
	cout << "MODELO: ";
	cin >> carro.modelo;
	cout << "PLACA: ";
	cin >> carro.placa;
	cout << "ANO: ";
	cin >> carro.ano;
	carros.push_back(carro);
	cout << "----------------" << endl;
}

void mostrar()
{
	cout << endl;
	cout << "LISTA DE CARROS" << endl;
	for(Carro carro : carros)
	{
					
		cout << "MODELO: " << carro.modelo << endl;	
		cout << "PLACA: " << carro.placa << endl;	
		cout << "ANO: " << carro.ano << endl;	
		cout << "----------------" << endl;	
		cout << endl;
	}
}

void buscar()
{
	cout << "BUSCAR POR CARRO: " << endl;
	cout << "Placa: ";
	cin >> placa;
	for(Carro i: carros)
	{
		if(carro.placa == placa)
		{
			cout << endl;
			cout << "CARRO ENCONTRADO!!!!"<< endl;
			cout << "MODELO: " << carro.modelo << endl;	
			cout << "PLACA: " << carro.placa << endl;	
			cout << "ANO: " << carro.ano << endl;	
			cout << "----------------" << endl;	
			cout << endl;
		}
	}
}

int main()
{
	int opcao;
	
	do
	{
		cout << " MENU : " << endl;
		cout << "1. inserir " << endl;
		cout << "2. mostrar " << endl;
		cout << "3. buscar" << endl;
		cout << "4. 0 para sair" << endl;
		cout << "Escolha uma opcao: ";
		cin >> opcao;
		
		switch (opcao)
		{
			case 0:
				cout << "BYE BYE!!!!!!";
				break;
			case 1:
				inserir();
				break;
			case 2:
				mostrar();
				break;
			case 3:
				buscar();
				break;
			default:
				cout << "Invalido!!!!!";
		}
	} while(opcao != 0);
	
	return 0;
}