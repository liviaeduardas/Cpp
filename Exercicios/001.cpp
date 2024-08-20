/*1) Crie um programa que use registro (struct) para armazenar os dados de um carro, contendo: marca, modelo, ano, cor e km
a) Ler as informações de dois carros e imprimir usando função
b) Use a estrutura de decisão que verifica a quilometragem. Se for maior que 10000 ele deve ser levado para revisão.*/

#include <iostream>
using namespace std;

struct Carro
{
	string marca;
	string modelo;
	int ano;
	string cor;
	int km;
	
	void informacao()
	{
		cout << endl << "---- CADASTRO ----" ;
		cout << endl << "MARCA: " << marca;
		cout << endl << "MODELO: " << modelo;
		cout << endl << "ANO: " << ano;
		cout << endl << "COR: " << cor;
		cout << endl << "QUILOMETRAGEM: " << km;
	}
};

int main() 
{
	Carro c1;
	cout << endl <<"INFORMACOES CARRO 1";
	cout << "\nInforme a marca: ";
	cin >> c1.marca;
	cout << "Informe o modelo: ";
	cin >> c1.modelo;
	cout << "Informe o ano: ";
	cin >> c1.ano;
	cout << "Informe a cor: ";
	cin >> c1.cor;
	cout << "Informe a quilometragem: "; 
	cin >> c1.km;
	
	c1.informacao();
	
	if (c1.km >= 10000)
		cout << "\nSeu carro esta com mais de 10000 km rodados e precisa de ir para revisao!!\n";
	
	cout << endl << "-----------------------------------"<< endl;
	
	Carro c2;
	cout << endl <<"INFORMACOES CARRO 2";
	cout << "\nInforme a marca: ";
	cin >> c2.marca;
	cout << "Informe o modelo: ";
	cin >> c2.modelo;
	cout << "Informe o ano: ";
	cin >> c2.ano;
	cout << "Informe a cor: ";
	cin >> c2.cor;
	cout << "Informe a quilometragem: "; 
	cin >> c2.km;
	
	c2.informacao();
	
	if (c2.km >= 10000)
		cout << "\nSeu carro esta com mais de 10000 km rodados e precisa de ir para revisao!!\n";
	
	return 0;
}