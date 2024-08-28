// Calculadora usando funções

#include<iostream>
using namespace std;

float multiplicacao(float a, float b)
{
	return a * b;
}

float divisao(float a, float b)
{
	if (b == 0)
	{
		cout << "Divisoa invalida";
		return 0;
	}
	else
		return a / b;
}

float soma(float a, float b)
{
	return a + b;
}

float subtracao(float a, float b)
{
	return a - b;
}

int main()
{
	float n1, n2 = 0.0;
	int resp;
	
	cout << "CALCULADORA:" << endl;
	cout << "Escolha uma opcao:" << endl;
	cout << "1 = SOMA | 2 = SUBTRACAO | 3 = DIVISAO | 4 = MULTIPLICACAO" << endl;
	cout << "Informe sua escolha: ";
	cin >> resp;
	cout << endl;
	cout << "Informe um valor: ";
	cin >> n1;
	cout << "Informe mais um valor: ";
	cin >> n2;
	
	switch(resp)
	{
		case 1:
			cout << "Resultado: " << soma(n1 , n2);
			break;
		case 2:
			cout << "Resultado: " << subtracao(n1 , n2);
			break;
		case 3:
			cout << "Resultado: " << divisao(n1 , n2);
			break;
		case 4:
			cout << "Resultado: " << multiplicacao(n1 , n2);
			break;
		default:
			cout << "Não existe essa opcao!!!!!";
    }
	
	return 0;	
}


