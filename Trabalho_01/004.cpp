/* EXERCÍCIO 4
 Crie um programa que contenha um array de float contendo 10 elementos.
 Imprima o endereço de cada posição desse array.
*/

#include<iostream>
using namespace std;

int main()
{
	float elementos[10] = {12.5, 10.2, 34.9, 11.8, 67.8, 34.9, 99.9, 23.3, 90.4, 19.9};
	
	cout << "ELEMENTOS E ENDERECOS DE MEMORIA:" << endl;
	for(float i : elementos)
	{
		float* ponteiro = &i;
		cout << "Elemento: " << i << " | Edereco: " << ponteiro << endl;
	}
	
	return 0;
}