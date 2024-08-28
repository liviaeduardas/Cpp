// EXEMPLO FUNÇÕES

#include <iostream>
using namespace std;

float soma(float a, float b)
{
	cout << "Resultado:";
	return a + b;
}

int main()
{
	float n1, n2 = 0.0;
	cout << "Informe um valor: ";
	cin >> n1;
	cout << "Informe outro valor: ";
	cin >> n2;
	cout << soma(n1, n2);
	return 0;
}