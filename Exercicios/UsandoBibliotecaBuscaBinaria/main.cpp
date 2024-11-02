#include <iostream>
#include "BuscaBinaria.h"
using namespace std;

int main() 
{
	int array[] = {10, 11, 25, 20, 23, 63, 7};
	int elemento = 23;
	int n = sizeof(array)/sizeof(array[0]);
	buscaBinaria(array, 0, n-1, elemento);
	
	return 0;
}