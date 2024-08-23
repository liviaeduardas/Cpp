/*Programa com menu de opções
- use for ou while para repetir até o usuário digitar 0
- use switch case para alternar entre as opções:
1. inserir carro
2. mostrar todos os carros
3. buscar um carro e mostrar
4. 0 para sair
- use array struct para riar os carros*/

#include<iostream>
using namespace std;

struct Carros
{
	string modelo;
	char placa[7];
	int ano;
	
};

int main()
{
	int resp = 5;
	int i = 0;
	char p[7];
	int tamanho = 0;
	struct Carros carro[1000];
	
	while(resp != 0)
	{
		cout << " MENU : " << endl;
		cout << "1. inserir carro" << endl;
		cout << "2. mostrar todos os carros" << endl;
		cout << "3. buscar um carro e mostrar" << endl;
		cout << "4. 0 para sair" << endl;
		cout << "Escolha uma opcao: ";
		cin >> resp;
		
		if (resp == 1)
		{
			cout << endl;
			cout << "CADASTRO CARRO " << endl;
			cout << "MODELO: ";
			cin >> carro[i].modelo;
			cout << "PLACA: ";
			cin >> carro[i].placa;
			cout << "ANO: ";
			cin >> carro[i].ano;
			cout << "----------------" << endl;
			i += 1;	
			tamanho = i;
		}
		else if (resp == 2)
		{
			for(int i = 0; i < tamanho; i++)
			{
				cout << "MODELO: " << carro[i].modelo << endl;	
				cout << "PLACA: " << carro[i].placa << endl;	
				cout << "ANO: " << carro[i].ano << endl;	
				cout << "----------------" << endl;	
			}
	    }
		else if(resp == 3)
		{
			cout << "Informe uma placa: ";
			cin >> p;
			for(int i = 0; i < tamanho; i++)
			{
				if(strcmp(carro[i].placa, p) == 0)
				{
					cout << "MODELO: " << carro[i].modelo << endl;	
					cout << "PLACA: " << carro[i].placa << endl;	
					cout << "ANO: " << carro[i].ano << endl;	
					cout << "----------------" << endl;	
				}
			}
		}
	}
	
	return 0;
}