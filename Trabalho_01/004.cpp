/* EXERCÍCIO 4
 Crie um programa que contenha um array de float contendo 10 elementos.
 Imprima o endereço de cada posição desse array.
*/

#include<iostream>
using namespace std;

int main()
{
	float elementos[10];
	
	for(int i = 0; i < 10; i++)
	{
		cout << "Valor " << i + 1 << ": ";
		cin >> elementos[i];
	}
	
	cout << endl << "ELEMENTOS E ENDERECOS DE MEMORIA:" << endl;
	for(float i : elementos)
	{
		float* ponteiro = &i;
		cout << "Elemento: " << i << " | Edereco: " << ponteiro << endl;
	}
	
	return 0;
}