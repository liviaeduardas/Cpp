//  Exemplo recursão
// Programa vai mostrar a somas do primeiros N números naturais

#include<iostream>
using namespace std;

int somaN(int n)
{
	if(n == 0)
		return 0;
	int res = n + somaN(n-1);
	return res;
}

int main()
{
	int n = 5;
	int soma = somaN(n);
	cout << "Soma: " << soma;
	return 0;
}