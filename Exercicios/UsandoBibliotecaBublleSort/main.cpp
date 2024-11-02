#include <iostream>
#include "BublleSort.h"
using namespace std;

int main() 
{
	int array[5];
	
	cout << "------ Bublle Sort ------" << endl;
	for(int i = 0 ; i < 5; i++)
	{
		cout << "Elemento " << i + 1 << " : ";
		cin >> array[i];
	}
	
	cout << "------ Ordenando o Vetor ------" << endl;
	BublleSort(array, 5);

	for(int i = 0 ; i < 5; i++)
	{
		cout << array[i] << " ";
	}
	
	return 0;
}