// EXEMPLO 2 PONTEIRO: mudando valores
using namespace std;

#include <iostream>

int main()
{
	int idade = 19;
	
	//armazenar o endereço de memória
	int* ponteiro = &idade;
	
	//mostrar variável com ponteiro
	cout << "Variavel idade:" << *ponteiro << endl;
	
	//mostrar varlor do endereço da memória 
	cout << "Endereco:" << ponteiro << endl; 
	
	//outra forma de mostrar o endereço sem salvar em variável
	cout << "Endereco sem ponteiro:" << &idade << endl; 
	
	// Mudando valor da variável pelo ponteiro
	*ponteiro = 30;
	cout << "Novo valor: " << idade << endl;
	
	return 0;
}