/* EXERCÍCIO 06
 Crie uma função que receba como parâmetro um array e o imprima.
 Não utilize índices para percorrer o array, apenas aritmética de ponteiros.*/
 
#include<iostream>
using namespace std;

void imprimir(int *v)
{
	int* pont = v;
	int i = 0;
	cout << "--- IMPRIMINDO VETOR ---" << endl;
	while(pont < v + 5)
	{
		cout << "Indice " << i << " : " << *pont << endl;
		i ++;
		pont ++;
	}
}

int main()
{
	int vetor[5];
	cout << "--- CARREGANDO VETOR ---" << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Informe um valor: ";
		cin >> vetor[i];
	}
	cout << endl;
	
	imprimir(vetor);
	return 0;
}