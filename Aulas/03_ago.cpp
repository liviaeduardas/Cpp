// EXEMPLO 1 PONTEIRO
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
	
	return 0;
}