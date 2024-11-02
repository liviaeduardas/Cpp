#include "BublleSort.h"

void BublleSort(int array[], int tamanho)
{
	for(int passo = 0; passo < tamanho - 1; passo ++)
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

