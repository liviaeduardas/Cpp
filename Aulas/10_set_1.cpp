// Exemplo 2 FUNÇÕES POR REFERÊNCIA e PONTEIROS

#include<iostream>
using namespace std;

void f (int *x)
{
	// função vai pegar o valor da variável que o endereço corresponde
	*x = *x - 1;
}

int main()
{
	int a = 5;
	cout << "Valor de a: " << a << endl;
	
	// passando endereço da mémoria da variável
	f(&a);
	
	cout << "Novo valor de a: " << a << endl;
	
	
	return 0;
}