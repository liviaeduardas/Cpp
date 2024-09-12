/* EXERCÍCIO 05
 Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
 Imprima o endereço de cada posição dessa matriz. */
 
#include<iostream>
using namespace std;

int main()
{
	float matriz [3][3];
	
	cout << "--- CARREGANDO MATRIZ ---" << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << "Matriz [ " << i << " ]" << "[ " << j << " ]: ";
			cin >> matriz[i][j];
		}
	}
	
	
	cout << endl << "--- MATRIZ CADASTRADA ---" << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << " [ "<< matriz[i][j] << " ] ";
		}
		cout << endl;
	}
	
	cout << endl << "--- ENDERECO DA POSICAO ---" << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			float* ponteiro = &matriz[i][j];
			cout << " [ "<< ponteiro << " ] ";
		}
		cout << endl;
	}
	
	return 0;
}