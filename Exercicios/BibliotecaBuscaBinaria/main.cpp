#include"BuscaBinaria.h"
#include<iostream>
using namespace std;

int buscaBinaria(int array[], int baixo, int alto, int x)
{
	int indice = 0;
	while(baixo <= alto)
  	{
  		int meio = baixo + (alto - baixo) / 2;
  		
  		if(array[meio] == x)
  		{
  			indice = meio;
  			break;
  		}
		else if(array[meio] < x)
			baixo = meio + 1;
		else
			alto = meio - 1;		
	}
	
	if(indice != 0)
	{
		cout << "Indice do elemento: " << indice << endl ;
	}
	else
		cout << "Elemento nao encontrado" << endl ;
	
	return 0;
}