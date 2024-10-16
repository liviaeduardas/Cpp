#include<iostream>
using namespace std;


void bublleSort(int array[], int tamanho)
{
	for(int passo = 0; passo < tamanho - 1; passo++)
	{
		for(int i = 0; i < tamanho - passo - 1; i++)
		{
			if(array[i] > array[i+1])
			{
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}
}

int main()
{
	int dado[] = {-2, 45, 0, 11, -9};
	int tamanho = sizeof(dado) / sizeof(dado[0]);
	
	bublleSort(dado, tamanho);
	cout << "Array ordenado em ordem crescente:" << endl;
	
	for(int i= 0; i < tamanho; i++)
	{
		cout << " " << dado[i];
	}
}