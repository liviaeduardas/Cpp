// Exemplo aula FUNÇÕES PASSAGEM POR REFERÊNCIA

#include<iostream>
using namespace std;

void f (int &x)
{
	x--;
}

int main()
{
	int a = 5;
	cout << "Primeiro valor de a: " << a << endl;
	f(a);
	cout <<"Valor de a modificado pela funcao: " << a << endl;
	
	return 0;
}
